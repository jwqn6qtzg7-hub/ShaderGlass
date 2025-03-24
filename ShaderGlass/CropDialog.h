#pragma once

#define WM_USER_CROP_UPDATED (WM_USER + 5000)

class CropDialog
{
public:
    CropDialog(HINSTANCE hInstance, HWND mainWindow);

    void Show(RECT croppedArea);

private:
    HINSTANCE m_instance;
    HWND      m_mainWindow;
};