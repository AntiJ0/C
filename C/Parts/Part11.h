#pragma once

void Part11();

void FunctionPointer();
float GetAvr(int a, int b);
void FuncA();
void FuncB();
/*
�Լ������͹�ȯ�� (*�Լ��̸�(�Լ��ǸŰ�����))(�Լ��������ǸŰ�����);
*/
//void (*FuncC(int funcType))();
typedef void (*FuncPtr_void_void)();
FuncPtr_void_void FuncC(int funcType);	

/*==============================================*/

void FunctionPointerExample();
void SortArray(int* arr, int len, bool(*compareFunc)(int, int));
bool CompareByAscending(int a, int b);
bool CompareByDescending(int a, int b);