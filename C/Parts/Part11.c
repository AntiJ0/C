#include "stdafx.h"
#include "Part11.h"

void Part11()
{
	FunctionPointer();
}

void FunctionPointer()
{
	/*
	함수포인터의 선언
	반환형 (*함수포인터 이름)(매개변수)
	*/

	int num1 = 0, num2 = 0;

	printf("정수 2개 입력 : ");
	scanf("%d %d", &num1, &num2);

	float (*fltFuncPtr)(int, int) = &GetAvr;
	printf("\n평균 : %f\n\n", fltFuncPtr(num1, num2));

	void (*funcPtr)() = &FuncA;
	funcPtr();

	funcPtr = &FuncB;
	funcPtr();

	int funcType = -1;

	printf("\n함수 타입 0 또는 1 입력 : ");
	scanf("%d", &funcType);

	funcPtr = FuncC(funcType);
	funcPtr();
}

float GetAvr(int a, int b)
{
	return (a + b) / 2.0f;
}

void FuncA()
{
	printf("FuncA 호출!\n");
}

void FuncB()
{
	printf("FuncB 호출!\n");
}

void(*FuncC(int funcType))()
{
	printf("FuncC => ");
	return funcType <= 0 ? &FuncA : &FuncB;
}
