#include "pch.h"
#include "DLLSample1.h"

// �E�B���h�E�̍��E���E���̕��𓾂�B
int GetFrameBorderWidth()
{
    return GetSystemMetrics(SM_CXBORDER);
}

// �E�B���h�E�̏㉺���E���̍����𓾂�B
int GetFrameBorderHeight()
{
    return GetSystemMetrics(SM_CYBORDER);
}

// �E�B���h�E�̃^�C�g���o�[�̍����𓾂�B
int GetTitleBarHeight()
{
    return GetSystemMetrics(SM_CYCAPTION);
}