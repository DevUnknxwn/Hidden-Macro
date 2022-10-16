#include "Globals.h"

void threads::binds()
{
	while (1)
	{
		// Enable & Disable HM keybinds
		if (GetAsyncKeyState(s.enableDisableKeys.x) & 1 && !s.enabled) s.enabled = true;
		if (GetAsyncKeyState(s.enableDisableKeys.y) & 1 && s.enabled)  s.enabled = false;

		// Change Value For Movement
		if (GetAsyncKeyState(s.valueKeys.x) & 1 && s.movementValues.y != 50) s.movementValues.y++;
		if (GetAsyncKeyState(s.valueKeys.y) & 1 && s.movementValues.y != 0) s.movementValues.y--;

		// Change sleep value lower = smoother
		if (GetAsyncKeyState(s.smoothKeys.x) & 1 && s.movementValues.s != 100) s.movementValues.s++;
		if (GetAsyncKeyState(s.smoothKeys.y) & 1 && s.movementValues.s != 1) s.movementValues.s--;

		// Close HM keybind
		if (GetAsyncKeyState(s.killProcKey)) { MessageBox(0, "Threads Killed.\nPress Ok To Close Macro.", "Closing Hidden Macro", MB_OK); exit(0); }

		// Delay for preformace reasons
		Sleep(1);
	}
}