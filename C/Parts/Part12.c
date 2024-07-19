﻿#include "stdafx.h"
#include "Part12.h"

void Part12()
{
	//MemoryAllocation();
	//TwoDimensionalArrayMemoryAllocation();
	//ClearAllocation();
	ReAllocation();
}

void MemoryAllocation()
{
	/*
	정적 동적 차이
	동적 - runtime -> 프로그램이 실행될 때 결정
	정적 - compileTime -> 컴파일하는 도중에 결정 
	
	동적 할당
	프로그램이 실행 중에 사용자가 필요한 만큼 메모리를 할당하거나 해제할 수 있는 기능
	메모리를 할당하고 사용한 뒤 해제하지 않으면 메모리 누수(Memory Leak)가 일어남

	c언어에서 동적할당을 하는 방법

	malloc -> memory allocation
	malloc(동적 할당할 크기) -> 괄호 안의 크기만큼 동적할당

	calloc -> clear allocation

	realloc	-> re allocation

	*/

	int* intPtr = (int*)malloc(sizeof(int));
	assert(intPtr != NULL);
	float* fltPtr = (float*)malloc(sizeof(float));
	assert(fltPtr != NULL);

	*intPtr = 10;
	*fltPtr = 3.14f;

	printf("===== 동적 할당 결과 =====\n");
	printf("int*(%p) : %d\n", intPtr, *intPtr);
	printf("float*(%p) : %f\n", fltPtr, *fltPtr);

	//동적할당 해제는 할당한 순서의 역순
	SAFE_FREE(fltPtr);
	//if (fltPtr)
	//{ 
	//	  free(fltPtr);
	//	  fltPtr = NULL; 
	//}

	SAFE_FREE(intPtr);

	if (intPtr != NULL)
		*intPtr = 10;

	//printf("\n===== 해제 결과 =====\n");
	//printf("int*(%p) : %d\n", intPtr, *intPtr);
	//printf("float*(%p) : %f\n", fltPtr, *fltPtr);

	int len = 0;

	printf("\n초기 배열 크기 입력 : ");
	scanf("%d", &len);

	int* arr = (int*)malloc(sizeof(int) * len);
	assert(arr != NULL);
	printf("배열 재할당 완료! 초기 배열 주소 : %p\n", arr);

	int ordinal = 0;
	int input = 0;

	printf("\n");
	
	while (true)
	{
		printf("%d번째 정수 입력 : ", ordinal + 1);
		scanf("%d", &input);

		if (input == 0)
			break;

		if (ordinal >= len)
		{
			len *= 2;
			int* newArr = (int*)malloc(sizeof(int) * len);
			assert(newArr != NULL);

			for (int i = 0; i < ordinal; ++i)
				newArr[i] = arr[i];

			SAFE_FREE(arr);
			arr = newArr;
			printf("배열 재할당 완료! 현재 배열 주소 : %p\n", arr);
		}

		arr[ordinal++] = input;
	}

	printf("\n===== 동적 할당 배열 원소 =====\n");
	for (int i = 0; i < ordinal; ++i)
		printf("%d ", arr[i]);

	printf("\n");

	SAFE_FREE(arr);
}

void TwoDimensionalArrayMemoryAllocation()
{
	int row = 0;
	int col = 0;

	printf("행렬 크기 입력 : ");
	scanf("%d %d", &row, &col);

	//2차원 배열 matrix를 동적 할당

	int** matrix = (int**)malloc(sizeof(int*) * row);
	assert(matrix != NULL);
	//for (int i = 0; i < row; ++i)
	//{
	//   	matrix[i] = (int*)malloc(sizeof(int) * col);
	//  	assert(matrix[i] != NULL);
	//}
	matrix[0] = (int*)malloc(sizeof(int) * row * col);
	assert(matrix[0] != NULL);
	for (int i = 1; i < row; ++i)
		matrix[i] = matrix[i - 1] + col;

	int num = 0;
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			matrix[i][j] = ++num;

	printf("\n===== 행렬 원소 =====\n");
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
			printf("%03d, ", matrix[i][j]);

		printf("\n");
	}

	//for (int i = 0; i < row; ++i)
		//SAFE_FREE(matrix[i]);
	SAFE_FREE(matrix[0]);

	SAFE_FREE(matrix);


}

void ClearAllocation()
{
	int len = 0;

	printf("배열 크기 입력 : ");
	scanf("%d", &len);

	int* arr1 = (int*)malloc(sizeof(int) * len);
	int* arr2 = (int*)calloc(len, sizeof(int));
	int* arr3 = (int*)ClearAlloc(len, sizeof(int));

	printf("\n===== 배열 1 원소 =====\n");
	for (int i = 0; i < len; ++i)
		printf("%d ", arr1[i]);

	printf("\n===== 배열 2 원소 =====\n");
	for (int i = 0; i < len; ++i)
		printf("%d ", arr2[i]);
	//calloc -> 0초기화를 해주며 동적 할당함

	printf("\n===== 배열 3 원소 =====\n");
	for (int i = 0; i < len; ++i)
		printf("%d ", arr3[i]);

	printf("\n");

	SAFE_FREE(arr1);
}

void* ClearAlloc(int count, int size)
{
	int totalSize = count * size;
	void* buffer = malloc(totalSize);
	assert(buffer != NULL);

	//for (int i = 0; i < totalSize; ++i)
	//	*((char*)buffer + i) = 0;

	//memoryset, 위의 기능을 대체해줌
	memset(buffer, 0, totalSize);

	return buffer;
}

void ReAllocation()
{
	int len = 0;

	printf("초기 배열 크기 입력 : ");
	scanf("%d", &len);

	int* arr = (int*)malloc(sizeof(int) * len);
	assert(arr != NULL);
	printf("배열 재할당 완료! 초기 배열 주소 : %p\n", arr);

	int ordinal = 0;
	int input = 0;

	printf("\n");

	while (true)
	{
		printf("%d번째 정수 입력 : ", ordinal + 1);
		scanf("%d", &input);

		if (input == 0)
			break;

		if (ordinal >= len)
		{
			len *= 2;
			int* temp = (int*)realloc(arr, sizeof(int) * len);
			assert(temp != NULL);
			arr = temp;
			temp = NULL;

			printf("배열 재할당 완료! 현재 배열 주소 : %p\n", arr);
		}

		arr[ordinal++] = input;
	}

	printf("\n===== 동적 할당 배열 원소 =====\n");
	for (int i = 0; i < ordinal; ++i)
		printf("%d ", arr[i]);

	printf("\n");

	SAFE_FREE(arr);
}
