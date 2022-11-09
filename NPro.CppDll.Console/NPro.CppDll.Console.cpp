// NPro.CppDll.Console.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include "DLLSample1.h"
#include <iostream>

int main()
{
    printf_s("DLLSample1 のテスト\n\n");

    int cx = GetFrameBorderWidth();
    printf_s("BorderWidth = %d\n", cx);
    int cy = GetFrameBorderHeight();
    printf_s("BorderHeight = %d\n", cy);
    int tb = GetTitleBarHeight();
    printf_s("TitleBar Height = %d\n", tb);

    // doubleが受け取れるか確認
    double test_double = GetDoubleValue();
    std::cout << "GetDoubleValue is "<< test_double << std::endl;

    // 文字列が受け取れるか確認
    std::cout << GetString() << std::endl;
    std::cout << GetName() << std::endl; //文字化けする

    getchar();
    return 0;
}