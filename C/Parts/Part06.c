#include <stdafx.h>
#include "Part06.h"

void Part06()
{
	//Example1();
	Example2();
}

void Example1()
{
	bool temp = false;
	int breakPoint = 0;
	int index = 0;

	while (temp)
		printf("실행 불가능\n");

	do
	{
		temp = true;
		printf("10을 입력하면 반복문을 탈출합니다. \n숫자 입력 : ");
		scanf("%d", &breakPoint);

		if (breakPoint == 10)
		{
			temp = false;
			printf("탈출 성공");
		}
		else
		{
			if (index < 10)
				++index;

			printf("10을 입력하세요");
			for (int i = 0; i < index; ++i)
				printf("!");

			printf("\n\n");
		}
	} while (temp);
}

void Example2()
{
	int selection = 0;

	do
	{
		printf("과제를 선택하세요.\n\n");

		printf("1. 새벽 2시에 잘 수 있는 과제\n");
		printf("2. 새벽 4시에 잘 수 있는 과제\n");
		printf("3. 아침에 뜨는 해를 볼 수 있는 과제\n");
		printf("4. 24시간 할 수 있는 과제\n");
		printf("5. 과제 없음\n");

		printf("\n번호 선택 : ");
		scanf("%d", &selection);

		printf("\n");
	} while (selection != 1 && selection != 2 && selection != 3 && selection != 4);

	switch (selection)
	{
	case 1:
		printf("새벽 2시 접수 완료!\n");
		break;
	case 2:
		printf("새벽 4시 접수 완료!\n");
		break;
	case 3:
		printf("밤샘 접수 완료!\n");
		break;
	case 4:
		printf("24시간 접수 완료!\n");
		break;
	}
}
