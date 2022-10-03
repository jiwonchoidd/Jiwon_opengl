#pragma once
#include "DD_Std.h"
class DD_MainCore
{
private:
	GLFWwindow* pWindow;
public:
	void Start();
	void Frame();
	void Release();
public:
	GLFWwindow* GetGLFWWindow() { return pWindow; }
};

