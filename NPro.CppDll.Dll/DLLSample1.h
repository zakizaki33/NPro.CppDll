#pragma once
#include <string>
#include <comdef.h>

extern "C" __declspec(dllexport) int GetFrameBorderWidth();
extern "C" __declspec(dllexport) int GetFrameBorderHeight();
extern "C" __declspec(dllexport) int GetTitleBarHeight();
extern "C" __declspec(dllexport) double GetDoubleValue();
extern "C" __declspec(dllexport) std::string GetString();
extern "C" __declspec(dllexport) BSTR GetName();
