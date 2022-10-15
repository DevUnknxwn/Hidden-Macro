#pragma once
#include <iostream>
#include <Windows.h>
#include <thread>

#include "Vector.h"

using namespace std;

class  HM_Settings
{
public:
	bool enabled = false;

	Vector3 movementValues{0,0,13};

	int enableKey   = VK_F1;
	int disableKey  = VK_F2;
	int killProcKey = VK_F8;

	int key1 = VK_LBUTTON;
	int key2 = VK_RBUTTON;

	int yKey1 = VK_UP;
	int yKey2 = VK_DOWN;
};
inline HM_Settings s;

namespace threads
{
	void macro();
	void binds();
}

namespace mouse
{
	void move(Vector3 value);
}