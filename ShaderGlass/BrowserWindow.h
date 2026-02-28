/*
ShaderGlass: shader effect overlay
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#pragma once

#define MAX_LOADSTRING 100

#include "Options.h"
#include "CaptureManager.h"
#include "Helpers.h"

class BrowserWindow
{
public:
    BrowserWindow(CaptureManager& manager);

    bool Create(_In_ HINSTANCE hInstance, _In_ int nCmdShow, _In_ HWND shaderWindow, _In_ HWND paramsWindow);

    HWND m_mainWindow {nullptr};
    bool m_searching {false};

private:
    WCHAR                     m_title[MAX_LOADSTRING];
    WCHAR                     m_windowClass[MAX_LOADSTRING];
    HINSTANCE                 m_instance {nullptr};
    HWND                      m_treeControl;
    HWND                      m_searchBox;
    HWND                      m_searchLabel;
    HWND                      m_clearButton;
    HWND                      m_resultsControl;
    HWND                      m_shaderWindow;
    HWND                      m_paramsWindow;
    HWND                      m_addFavButton;
    HWND                      m_delFavButton;
    HWND                      m_paramsButton;
    HWND                      m_pixelSizeTrackBar;
    HWND                      m_pixelSizeLabel;
    HWND                      m_pixelSizeValue;
    UINT                      m_dpi {USER_DEFAULT_SCREEN_DPI};
    HFONT                     m_font;
    CaptureManager&           m_captureManager;
    CaptureOptions&           m_captureOptions;
    float                     m_dpiScale;
    int                       g_nOpen;
    int                       g_nClosed;
    int                       g_nDocument;
    std::map<UINT, HTREEITEM> m_items;
    std::map<UINT, HTREEITEM> m_favorites;
    HTREEITEM                 m_imported;
    HTREEITEM                 m_personalItems;
    std::map<UINT, HTREEITEM> m_personal;
    HIMAGELIST                m_imageList;

    void        Resize();
    void        Build();
    void        SavePersonal();
    void        LoadPersonal();
    HTREEITEM   BuildTree(HWND ctrl, std::map<UINT, HTREEITEM>& items, const std::string& filter);
    void        Search(const std::string& filter);
    static void ExpandAll(HWND ctrl, HTREEITEM item);

    static LRESULT CALLBACK WndProcProxy(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
    ATOM                    MyRegisterClass(HINSTANCE hInstance);
    BOOL                    InitInstance(HINSTANCE hInstance, int nCmdShow);
    LRESULT CALLBACK        WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

    BOOL CreateImageList();
    void CreatePixelSizeSlider(const RECT& rcClient);

    HTREEITEM hPrev         = (HTREEITEM)TVI_FIRST;
    HTREEITEM hPrevRootItem = NULL;
    HTREEITEM hPrevLev2Item = NULL;
    HTREEITEM hPrevLev3Item = NULL;

    void      BeginTree();
    HTREEITEM AddNoneItem(HWND ctrl, std::map<UINT, HTREEITEM>& items);
    HTREEITEM AddItemToTree(HWND hwndTV, const char* text, LPARAM lParam, int nLevel);
};