#pragma once

void Part11();

void FunctionPointer();
float GetAvr(int a, int b);
void FuncA();
void FuncB();
/*
함수포인터반환형 (*함수이름(함수의매개변수))(함수포인터의매개변수);
*/
//void (*FuncC(int funcType))();
typedef void (*FuncPtr_void_void)();
FuncPtr_void_void FuncC(int funcType);	

/*==============================================*/

void FunctionPointerExample();
void SortArray(int* arr, int len, bool(*compareFunc)(int, int));
bool CompareByAscending(int a, int b);
bool CompareByDescending(int a, int b);