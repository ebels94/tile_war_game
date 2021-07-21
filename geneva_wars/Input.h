#pragma once
#include "Window.h";

class Input
{
public:
	Input(Window* w);
	void processInput();
private:
	Window* window;
};

