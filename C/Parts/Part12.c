#include "stdafx.h"
#include "Part12.h"

void Part12()
{
	//MemoryAllocation();
	TwoDimensionalArrayMemoryAllocation();
}

void MemoryAllocation()
{
	/*
	���� ���� ����
	���� - runtime -> ���α׷��� ����� �� ����
	���� - compileTime -> �������ϴ� ���߿� ���� 
	
	���� �Ҵ�
	���α׷��� ���� �߿� ����ڰ� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϰų� ������ �� �ִ� ���
	�޸𸮸� �Ҵ��ϰ� ����� �� �������� ������ �޸� ����(Memory Leak)�� �Ͼ

	c���� �����Ҵ��� �ϴ� ���

	malloc -> memory allocation
	malloc(���� �Ҵ��� ũ��) -> ��ȣ ���� ũ�⸸ŭ �����Ҵ�

	calloc -> clear allocation

	realloc	-> re allocation

	*/

	int* intPtr = (int*)malloc(sizeof(int));
	assert(intPtr != NULL);
	float* fltPtr = (float*)malloc(sizeof(float));
	assert(fltPtr != NULL);

	*intPtr = 10;
	*fltPtr = 3.14f;

	printf("===== ���� �Ҵ� ��� =====\n");
	printf("int*(%p) : %d\n", intPtr, *intPtr);
	printf("float*(%p) : %f\n", fltPtr, *fltPtr);

	//�����Ҵ� ������ �Ҵ��� ������ ����
	SAFE_FREE(fltPtr);
	//if (fltPtr)
	//{ 
	//	  free(fltPtr);
	//	  fltPtr = NULL; 
	//}

	SAFE_FREE(intPtr);

	if (intPtr != NULL)
		*intPtr = 10;

	//printf("\n===== ���� ��� =====\n");
	//printf("int*(%p) : %d\n", intPtr, *intPtr);
	//printf("float*(%p) : %f\n", fltPtr, *fltPtr);

	int len = 0;

	printf("\n�ʱ� �迭 ũ�� �Է� : ");
	scanf("%d", &len);

	int* arr = (int*)malloc(sizeof(int) * len);
	assert(arr != NULL);
	printf("�迭 ���Ҵ� �Ϸ�! �ʱ� �迭 �ּ� : %p\n", arr);

	int ordinal = 0;
	int input = 0;

	printf("\n");
	
	while (true)
	{
		printf("%d��° ���� �Է� : ", ordinal + 1);
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
			printf("�迭 ���Ҵ� �Ϸ�! ���� �迭 �ּ� : %p\n", arr);
		}

		arr[ordinal++] = input;
	}

	printf("\n===== ���� �Ҵ� �迭 ���� =====\n");
	for (int i = 0; i < ordinal; ++i)
		printf("%d ", arr[i]);

	printf("\n");

	SAFE_FREE(arr);
}

void TwoDimensionalArrayMemoryAllocation()
{
	int row = 0;
	int col = 0;

	printf("��� ũ�� �Է� : ");
	scanf("%d %d", &row, &col);

	//2���� �迭 matrix�� ���� �Ҵ�

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

	printf("\n===== ��� ���� =====\n");
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
