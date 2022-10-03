#pragma once
#pragma comment	(lib, "ddEngine.lib")
#include "DD_MainCore.h"
int main()
{
	DD_MainCore* gEngine = new DD_MainCore();

	gEngine->Start();

	gEngine->Frame();

	gEngine->Release();

	return -1;
}
