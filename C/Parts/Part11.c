#include "stdafx.h"
#include "Part11.h"

void Part11()
{
	FunctionPointer();
}

void FunctionPointer()
{
	/*
	�Լ��������� ����
	��ȯ�� (*�Լ������� �̸�)(�Ű�����)
	*/

	int num1 = 0, num2 = 0;

	printf("���� 2�� �Է� : ");
	scanf("%d %d", &num1, &num2);

	float (*fltFuncPtr)(int, int) = &GetAvr;
	printf("\n��� : %f\n\n", fltFuncPtr(num1, num2));

	void (*funcPtr)() = &FuncA;
	funcPtr();

	funcPtr = &FuncB;
	funcPtr();

	int funcType = -1;

	printf("\n�Լ� Ÿ�� 0 �Ǵ� 1 �Է� : ");
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
	printf("FuncA ȣ��!\n");
}

void FuncB()
{
	printf("FuncB ȣ��!\n");
}

void(*FuncC(int funcType))()
{
	printf("FuncC => ");
	return funcType <= 0 ? &FuncA : &FuncB;
}
