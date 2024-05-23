#include "stdafx.h"
#include "Part12.h"

void Part12()
{
	MemoryAllocation();
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



	SAFE_FREE(arr);
}
