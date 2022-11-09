#pragma once
#include <string>
#include <comdef.h>

extern "C" __declspec(dllimport) int GetFrameBorderWidth();
extern "C" __declspec(dllimport) int GetFrameBorderHeight();
extern "C" __declspec(dllimport) int GetTitleBarHeight();
extern "C" __declspec(dllimport) double GetDoubleValue();
extern "C" __declspec(dllimport) std::string GetString();
extern "C" __declspec(dllimport) BSTR GetName();