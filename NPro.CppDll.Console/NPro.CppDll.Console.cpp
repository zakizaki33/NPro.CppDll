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

    // http://7ujm.net/C++/BSTR.html
    char buf2[64] = "";
    WideCharToMultiByte(
        CP_ACP,			// コードページ ANSI コードページ
        0,			// 処理速度とマッピング方法を決定するフラグ
        (OLECHAR*)GetName(),//bstr,		// ワイド文字列のアドレス
        -1,			// ワイド文字列の文字数
        buf2,			// 新しい文字列を受け取るバッファのアドレス
        sizeof(buf2) - 1,		// 新しい文字列を受け取るバッファのサイズ
        NULL,			// マップできない文字の既定値のアドレス
        NULL			// 既定の文字を使ったときにセットするフラグのアドレス
    );
    std::cout << buf2 << std::endl; // 成功

    getchar();
    return 0;
}