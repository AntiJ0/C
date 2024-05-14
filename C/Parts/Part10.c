#include "stdafx.h"
#include "Part10.h"

void Part10()
{
	//Pointer();
	//InitializeArray();
	PointerToPointer();
}

void Pointer()
{
	//�ּҰ��� �����ϴ� ����
	int intNum = 0;
	float fltNum = 0.0f;
	double dbNum = 0.0;

	/*
	������ ���� ���
	�ڷ��� (*)�����Ϳ����� �������̸�

	������ : �ּҰ��� �����ϴ� ����

	������(�ּҰ�)�� ũ��
	x86(32bit) - 4����Ʈ
	x64(64bit) - 8����Ʈ

	int intNum;

	int* intPtr = &intNum;
	*/

	int* intPtr = &intNum;
	float* fltPtr = &fltNum;
	double* dbPtr = &dbNum;

	printf("\n===== ������ ũ�� =====\n");
	printf("int* : %zd\n", sizeof(intPtr));
	printf("float* : %zd\n", sizeof(fltPtr));
	printf("double* : %zd\n", sizeof(dbPtr));
	
	/*
	intNum = 10;
	intPtr = &intNum
	*intPtr = 10;
	*/
	//��������������
	*intPtr = 10;
	//intNum = 10
	*fltPtr = 3.14f;

	printf("===== ������ ���� ���� ��� =====\n");
	printf("Int : %d, %p, Int* : %p, %d\n", intNum, &intNum, intPtr, *intPtr);
	printf("Float : %f, %p, Int* : %p, %f\n", fltNum, &fltNum, fltPtr, *fltPtr);

	void* ptr = &intNum;

	//����ȯ �ʿ�
	*(int*)ptr = 20;

	printf("===== ������ ���� ���� ��� =====\n");
	printf("Int : %d, %p, Void* : %p, %d\n", intNum, &intNum, ptr, *(int*)ptr);

	/*
	�Լ� ȣ�� -> CallByValue
	*/

	int num1 = 0;
	int num2 = 0;

	printf("\n���� 2�� �Է� : ");
	scanf("%d %d", &num1, &num2);

	printf("\n===== �� ��ȯ �� =====\n");
	printf("���� ���� num1(%p) : %d, ���� ���� num2(%p) : %d\n", &num1, num1, &num2, num2);
	
	printf("\n===== �� ��ȯ�� =====\n");
	SwapByPtr(&num1, &num2);

	printf("\n===== �� ��ȯ �� =====\n");
	printf("���� ���� num1(%p) : %d, ���� ���� num2(%p) : %d\n", &num1, num1, &num2, num2);

	const int num = 20;
	//������ ���ȭ
	
	const int* constPtr1 = &num1;//���� â���� ���� �� ���� �Ұ���
	int* const constPtr2 = &num2;//�ּҰ� ���� �Ұ���
	const int* const constPtr3 = &num1;

	constPtr1 = &num2;
	//constPtr1 = 10; �Ұ���

	//constPtr2 = 20;
	//constPtr2 = &num1; �Ұ���

	//�� �� �Ұ���
}

void SwapByValue(int a, int b)
{
	printf("�Ű� ���� a(%p) : %d, �Ű� ���� b(%p) : %d\n", &a, a, &b, b);

	int temp = a;
	a = b;
	b = temp;

	printf("�Ű� ���� a(%p) : %d, �Ű� ���� b(%p) : %d\n", &a, a, &b, b);
}

void SwapByPtr(int* a, int* b)
{
	printf("�Ű� ���� a(%p) : %d, �Ű� ���� b(%p) : %d\n", a, *a, b, *b);

	int temp = *a;
	*a = *b;
	*b = temp;

	printf("�Ű� ���� a(%p) : %d, �Ű� ���� b(%p) : %d\n", a, *a, b, *b);
}

void InitializeArray()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 1, 2, 3, 4, 5 };

	const int len1 = sizeof(arr1) / sizeof(arr1[0]);
	const int len2 = sizeof(arr2) / sizeof(arr2[0]);

	printf("===== �迭 1 ���� (%lld) =====\n", sizeof(arr1));
	for (int i = 0; i < len1; ++i)
		printf("%d, ", *(arr1 + i));

	int* const ptr1 = arr2;
	printf("\n\n===== �迭 2 ���� (%lld) =====\n", sizeof(ptr1));
	for (int i = 0; i < len2; ++i)
		printf("%d, ", ptr1[i]);

	int arr3[5] = { 0 };

	const int len3 = sizeof(arr3) / sizeof(arr3[0]);

	InitArrayByPtr(arr3, len3);

	printf("\n\n===== �迭 3 ���� (%lld) =====\n", sizeof(arr3));
	for (int i = 0; i < len3; ++i)
		printf("%d, ", arr3[i]);

	printf("\n");
}

//void InitArray(int a[])
//{
//	const int len = sizeof(a) / sizeof(a[0]);
//
//	for (int i = 0; i < len; ++i)
//		a[i] = i + 1;
//}

void InitArrayByPtr(int* arr, int len)
{
	for (int i = 0; i < len; ++i)
		arr[i] = i + 1;
}

void PointerToPointer()
{
	//���� ������
	int num1 = 0;
	int num2 = 0;

	int* ptr = &num1;
	int** ptrToPtr = &ptr;
	int*** ptrToPtrToPtr = &ptrToPtr;


}
