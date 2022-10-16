#include "Globals.h"

int main()
{
    // Threads that make the macro & keybinds work
    thread(threads::macro).detach();
    thread(threads::binds).detach();

    // Hides the console window
    HWND Stealth;
    AllocConsole();
    Stealth = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(Stealth, 0);

    // Begining message box for showing keybinds
    MessageBox(0, "Macro Threads Started.\nClick Ok To Hide Message Box.\n\nKeybinds:\n F1: Enable\n F2: Disable\n F8: Kill Process\n Up Arrow: More Control\n Down Arrow: Less Control\n Right Arrow: Less Smoothing\n Left Arrow: More Smoothing", "Hidden Macro Binds", MB_OK);

    while (1)
    {
        // This is only here to keep the program running all the features are running in threads
    }
}
