#pragma once

#include <string>
#include <map>
#include <mutex>

// Cross-platform settings manager. Replaces Windows Registry.
// On macOS, stores to ~/Library/Application Support/ShaderGlass/settings.json
// using nlohmann/json (already available from ShaderGC/include/json.hpp).

class Settings
{
public:
    static Settings& instance();

    bool getBool(const std::string& key, bool defaultValue = false);
    void setBool(const std::string& key, bool value);

    int getInt(const std::string& key, int defaultValue = 0);
    void setInt(const std::string& key, int value);

    float getFloat(const std::string& key, float defaultValue = 0.0f);
    void setFloat(const std::string& key, float value);

    std::string getString(const std::string& key, const std::string& defaultValue = "");
    void setString(const std::string& key, const std::string& value);

    void remove(const std::string& key);
    void save();

    // Clear all in-memory settings and persist the empty state to
    // disk. After reset(), subsequent get*() calls return defaults
    // (e.g. getInt(key, 42) returns 42 for any missing key) until
    // new values are written and saved. The on-disk JSON file is
    // rewritten as `{}`.
    void reset();

private:
    Settings();
    void load();
    std::string path() const;

    std::map<std::string, std::string> m_data;
    std::mutex m_mutex;
    bool m_dirty {false};
};
