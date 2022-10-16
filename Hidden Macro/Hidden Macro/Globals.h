#pragma once
#include <iostream>
#include <Windows.h> // Needed for GetAsyncKeyState(key) in macro.cpp & binds.cpp
#include <thread> // Needed for the threads to run in main.cpp

#include "Vector.h" // Where the Vector2 & Vector3 are defined

// So i dont have to add std:: infront of some functions
using namespace std;

// All settings for the macro
class  HM_Settings
{
public:
	// Is HM enabled?
	bool enabled = false;

	// Values passed into the move mouse function
	Vector3 movementValues{0,0,13};

	// Function keys
	Vector2 enableDisableKeys{VK_F1,VK_F2};
	Vector2 moveKeys{ VK_LBUTTON,VK_RBUTTON };
	Vector2 valueKeys{ VK_UP, VK_DOWN };
	Vector2 smoothKeys{ VK_RIGHT,VK_LEFT };

	// Keybind to close HM
	int killProcKey = VK_F8;
};
inline HM_Settings s;

// Threads that run see main.cpp
namespace threads
{
	void macro();
	void binds();
}

// Mouse move funtion
namespace mouse
{
	void move(Vector3 value);
}