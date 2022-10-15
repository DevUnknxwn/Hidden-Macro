#include "Globals.h"

int main()
{
    thread(threads::macro).detach();
    thread(threads::binds).detach();

    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth, 0);

    MessageBox(0, "Macro Threads Started.\nClick Ok To Hide Message Box.\n\nKeybinds:\n F1: Enable\n F2: Disable\n F8: Kill Process\n Up Arrow: More Control\n Down Arrow: Less Control", "Hidden Macro Binds", MB_OK);

    while (1)
    {

    }
}
