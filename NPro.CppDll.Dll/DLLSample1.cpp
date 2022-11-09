#include "pch.h"
#include "DLLSample1.h"

// ウィンドウの左右境界線の幅を得る。
int GetFrameBorderWidth()
{
    return GetSystemMetrics(SM_CXBORDER);
}

// ウィンドウの上下境界線の高さを得る。
int GetFrameBorderHeight()
{
    return GetSystemMetrics(SM_CYBORDER);
}

// ウィンドウのタイトルバーの高さを得る。
int GetTitleBarHeight()
{
    return GetSystemMetrics(SM_CYCAPTION);
}

// double型の値を渡す練習をする
double GetDoubleValue() 
{
    return 123.321;
}

// 文字列を渡す練習をする
std::string GetString()
{
    return "abcde";
}

BSTR GetName() {
    return SysAllocString(L"test");
}