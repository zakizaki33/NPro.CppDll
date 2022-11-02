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