#include "stdafx.h"
#include "Part05.h"

void Part05()
{
	//While();
	//DoWhile();
	For();
}

void While()
{
	/*
	반복문
	특정 조건이 만족할 동안만 특정 동작을 반복하는 제어문
	게임 -> 무한루프 구조
	플레이어가 가만히 있을때 - idle 자세
	Update
	Rendering - 화면을 지우고 다시 그리는 과정

	반복문의 기본적인 구조
	while, do while, for

	while (조건식)
	{
		조건식이 만족할 동안 반복할 명령문1;
		조건식이 만족할 동안 반복할 명령문2;
		조건식이 만족할 동안 반복할 명령문3;
		조건식이 만족할 동안 반복할 명령문4;
	}
	*/

	int i = 0, times = 0;

	printf("반복 횟수 입력 : ");
	scanf("%d", &times);

	while (i < times)
	{
		printf("%d, ", ++i);
	}
}

void DoWhile()
{
	int i = 0, times = 0;

	printf("반복 횟수 입력 : ");
	scanf("%d", &times);

	do
	{
		printf("%d, ", ++i);
	} while (i < times);
}

void For()
{
	int times = 0;

	printf("반복 횟수 입력 : ");
	scanf("%d", &times);

	/*
	for (초기절; 조건절; 반복절)
	{
	
	}

	초기절 - for문에 처음 들어올 때 실행할 구문
	반복절 -	반복이 될 때마다 실행할 구문
	*/

	for (int i = 0; i < times; ++i)
	{
		//if (true)
			//break; 무조건제어문, 가장 가까운 반복문이나 switch문을 탈출
		if ((i + 1) % 2 == 0) continue;

		printf("%d, ", i + 1);
	}
}
