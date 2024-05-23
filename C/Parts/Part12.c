#include "stdafx.h"
#include "Part12.h"

void Part12()
{
	MemoryAllocation();
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



	SAFE_FREE(arr);
}
