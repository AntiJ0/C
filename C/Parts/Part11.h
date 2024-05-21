#pragma once

void Part11();

void FunctionPointer();
float GetAvr(int a, int b);
void FuncA();
void FuncB();
/*
함수포인터반환형 (*함수이름(함수의매개변수))(함수포인터의매개변수);
*/
void (*FuncC(int funcType))();