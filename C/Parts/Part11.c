#include "stdafx.h"
#include "Part11.h"

void Part11()
{
	//FunctionPointer();
	FunctionPointerExample();
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

//void(*FuncC(int funcType))()
//{
//	printf("FuncC => ");
//	return funcType <= 0 ? &FuncA : &FuncB;
//}

FuncPtr_void_void FuncC(int funcType)
{
	printf("FuncC => ");
	return funcType <= 0 ? &FuncA : &FuncB;
}

/*====================================================*/

void FunctionPointerExample()
{
	srand((unsigned)time(NULL));

	int arr[10] = { 0 };
	const int len = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < len; ++i)
		arr[i] = rand() % 100 + 1;

	printf("===== ���� �� ===== \n");
	for (int i = 0; i < len; ++i)
		printf("%d ", arr[i]);

	printf("\n\n===== �������� ���� �� ===== \n");
	SortArray(arr, len, &CompareByAscending);
	for (int i = 0; i < len; ++i)
		printf("%d ", arr[i]);

	printf("\n\n===== �������� ���� �� ===== \n");
	SortArray(arr, len, &CompareByDescending);
	for (int i = 0; i < len; ++i)
		printf("%d ", arr[i]);
}

void SortArray(int* arr, int len, bool(*compareFunc)(int, int))
{
	for (int i = 0; i < len; ++i)
	{
		int compareIndex = i;

		for (int j = i + 1; j < len; ++j)
		{
			if (compareFunc(arr[compareIndex], arr[j]) == true)
				compareIndex = j;
		}

		if (compareIndex != i)
		{
			int temp = arr[i];
			arr[i] = arr[compareIndex];
			arr[compareIndex] = temp;
		}
	}
}

bool CompareByAscending(int a, int b)
{
	return a > b;
}

bool CompareByDescending(int a, int b)
{
	return a < b;
}
