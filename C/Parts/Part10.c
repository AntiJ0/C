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
	//주소값을 저장하는 변수
	int intNum = 0;
	float fltNum = 0.0f;
	double dbNum = 0.0;

	/*
	포인터 선언 방법
	자료형 (*)포인터연산자 포인터이름

	포인터 : 주소값을 저장하는 변수

	포인터(주소값)의 크기
	x86(32bit) - 4바이트
	x64(64bit) - 8바이트

	int intNum;

	int* intPtr = &intNum;
	*/

	int* intPtr = &intNum;
	float* fltPtr = &fltNum;
	double* dbPtr = &dbNum;

	printf("\n===== 포인터 크기 =====\n");
	printf("int* : %zd\n", sizeof(intPtr));
	printf("float* : %zd\n", sizeof(fltPtr));
	printf("double* : %zd\n", sizeof(dbPtr));
	
	/*
	intNum = 10;
	intPtr = &intNum
	*intPtr = 10;
	*/
	//간접참조연산자
	*intPtr = 10;
	//intNum = 10
	*fltPtr = 3.14f;

	printf("===== 포인터 간접 참조 결과 =====\n");
	printf("Int : %d, %p, Int* : %p, %d\n", intNum, &intNum, intPtr, *intPtr);
	printf("Float : %f, %p, Int* : %p, %f\n", fltNum, &fltNum, fltPtr, *fltPtr);

	void* ptr = &intNum;

	//형변환 필요
	*(int*)ptr = 20;

	printf("===== 포인터 간접 참조 결과 =====\n");
	printf("Int : %d, %p, Void* : %p, %d\n", intNum, &intNum, ptr, *(int*)ptr);

	/*
	함수 호출 -> CallByValue
	*/

	int num1 = 0;
	int num2 = 0;

	printf("\n정수 2개 입력 : ");
	scanf("%d %d", &num1, &num2);

	printf("\n===== 값 교환 전 =====\n");
	printf("지역 변수 num1(%p) : %d, 지역 변수 num2(%p) : %d\n", &num1, num1, &num2, num2);
	
	printf("\n===== 값 교환중 =====\n");
	SwapByPtr(&num1, &num2);

	printf("\n===== 값 교환 후 =====\n");
	printf("지역 변수 num1(%p) : %d, 지역 변수 num2(%p) : %d\n", &num1, num1, &num2, num2);

	const int num = 20;
	//변수의 상수화
	
	const int* constPtr1 = &num1;//간접 창조를 통한 값 조정 불가능
	int* const constPtr2 = &num2;//주소값 변경 불가능
	const int* const constPtr3 = &num1;

	constPtr1 = &num2;
	//constPtr1 = 10; 불가능

	//constPtr2 = 20;
	//constPtr2 = &num1; 불가능

	//둘 다 불가능
}

void SwapByValue(int a, int b)
{
	printf("매개 변수 a(%p) : %d, 매개 변수 b(%p) : %d\n", &a, a, &b, b);

	int temp = a;
	a = b;
	b = temp;

	printf("매개 변수 a(%p) : %d, 매개 변수 b(%p) : %d\n", &a, a, &b, b);
}

void SwapByPtr(int* a, int* b)
{
	printf("매개 변수 a(%p) : %d, 매개 변수 b(%p) : %d\n", a, *a, b, *b);

	int temp = *a;
	*a = *b;
	*b = temp;

	printf("매개 변수 a(%p) : %d, 매개 변수 b(%p) : %d\n", a, *a, b, *b);
}

void InitializeArray()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 1, 2, 3, 4, 5 };

	const int len1 = sizeof(arr1) / sizeof(arr1[0]);
	const int len2 = sizeof(arr2) / sizeof(arr2[0]);

	printf("===== 배열 1 원소 (%lld) =====\n", sizeof(arr1));
	for (int i = 0; i < len1; ++i)
		printf("%d, ", *(arr1 + i));

	int* const ptr1 = arr2;
	printf("\n\n===== 배열 2 원소 (%lld) =====\n", sizeof(ptr1));
	for (int i = 0; i < len2; ++i)
		printf("%d, ", ptr1[i]);

	int arr3[5] = { 0 };

	const int len3 = sizeof(arr3) / sizeof(arr3[0]);

	InitArrayByPtr(arr3, len3);

	printf("\n\n===== 배열 3 원소 (%lld) =====\n", sizeof(arr3));
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
	//이중 포인터
	int num1 = 0;
	int num2 = 0;

	int* ptr = &num1;
	int** ptrToPtr = &ptr;
	int*** ptrToPtrToPtr = &ptrToPtr;


}
