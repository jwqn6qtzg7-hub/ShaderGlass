#include "Settings.h"

#include "json.hpp"

#include <fstream>
#include <iostream>
#include <cstdlib>

#ifdef __APPLE__
#include <sys/stat.h>
#include <unistd.h>
#include <pwd.h>
#endif

using json = nlohmann::json;

Settings& Settings::instance()
{
    static Settings s;
    return s;
}

Settings::Settings()
{
    load();
}

void Settings::load()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    std::string p = path();
    std::ifstream f(p);
    if(!f.good()) return;

    try
    {
        json j = json::parse(f);
        for(auto& [key, value] : j.items())
        {
            if(value.is_string())
                m_data[key] = value.get<std::string>();
            else if(value.is_boolean())
                m_data[key] = value.get<bool>() ? "1" : "0";
            else if(value.is_number_integer())
                m_data[key] = std::to_string(value.get<int>());
            else if(value.is_number_float())
                m_data[key] = std::to_string(value.get<double>());
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "[Settings] Failed to parse " << p << ": " << e.what() << std::endl;
    }
}

std::string Settings::path() const
{
#ifdef __APPLE__
    const char* home = getenv("HOME");
    if(!home) { struct passwd* pw = getpwuid(getuid()); if(pw) home = pw->pw_dir; }
    std::string dir = std::string(home ? home : "/tmp") + "/Library/Application Support/ShaderGlass";
    mkdir(dir.c_str(), 0755);
    return dir + "/settings.json";
#else
    return "settings.json";
#endif
}

bool Settings::getBool(const std::string& key, bool defaultValue)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    auto it = m_data.find(key);
    if(it == m_data.end()) return defaultValue;
    return it->second == "1" || it->second == "true";
}

void Settings::setBool(const std::string& key, bool value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_data[key] = value ? "1" : "0";
    m_dirty = true;
}

int Settings::getInt(const std::string& key, int defaultValue)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    auto it = m_data.find(key);
    if(it == m_data.end()) return defaultValue;
    try { return std::stoi(it->second); }
    catch(...) { return defaultValue; }
}

void Settings::setInt(const std::string& key, int value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_data[key] = std::to_string(value);
    m_dirty = true;
}

float Settings::getFloat(const std::string& key, float defaultValue)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    auto it = m_data.find(key);
    if(it == m_data.end()) return defaultValue;
    try { return std::stof(it->second); }
    catch(...) { return defaultValue; }
}

void Settings::setFloat(const std::string& key, float value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_data[key] = std::to_string(value);
    m_dirty = true;
}

std::string Settings::getString(const std::string& key, const std::string& defaultValue)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    auto it = m_data.find(key);
    if(it == m_data.end()) return defaultValue;
    return it->second;
}

void Settings::setString(const std::string& key, const std::string& value)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_data[key] = value;
    m_dirty = true;
}

void Settings::remove(const std::string& key)
{
    std::lock_guard<std::mutex> lock(m_mutex);
    m_data.erase(key);
    m_dirty = true;
}

void Settings::reset()
{
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        m_data.clear();
        m_dirty = true;
    }
    save();
}

void Settings::save()
{
    std::lock_guard<std::mutex> lock(m_mutex);
    if(!m_dirty) return;

    json j;
    for(auto& [key, value] : m_data)
    {
        // Try to preserve types
        if(value == "1" || value == "0")
        {
            if(value == "1")
                j[key] = true;
            else
                j[key] = false;
        }
        else
        {
            try { j[key] = std::stoi(value); }
            catch(...)
            {
                try { j[key] = std::stod(value); }
                catch(...) { j[key] = value; }
            }
        }
    }

    std::string p = path();
    std::ofstream f(p);
    if(f.good())
    {
        f << j.dump(2) << std::endl;
        m_dirty = false;
    }
    else
    {
        std::cerr << "[Settings] Failed to save to " << p << std::endl;
    }
}
