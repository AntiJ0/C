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
		printf("���� �Ұ���\n");

	do
	{
		temp = true;
		printf("10�� �Է��ϸ� �ݺ����� Ż���մϴ�. \n���� �Է� : ");
		scanf("%d", &breakPoint);

		if (breakPoint == 10)
		{
			temp = false;
			printf("Ż�� ����");
		}
		else
		{
			if (index < 10)
				++index;

			printf("10�� �Է��ϼ���");
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
		printf("������ �����ϼ���.\n\n");

		printf("1. ���� 2�ÿ� �� �� �ִ� ����\n");
		printf("2. ���� 4�ÿ� �� �� �ִ� ����\n");
		printf("3. ��ħ�� �ߴ� �ظ� �� �� �ִ� ����\n");
		printf("4. 24�ð� �� �� �ִ� ����\n");
		printf("5. ���� ����\n");

		printf("\n��ȣ ���� : ");
		scanf("%d", &selection);

		printf("\n");
	} while (selection != 1 && selection != 2 && selection != 3 && selection != 4);

	switch (selection)
	{
	case 1:
		printf("���� 2�� ���� �Ϸ�!\n");
		break;
	case 2:
		printf("���� 4�� ���� �Ϸ�!\n");
		break;
	case 3:
		printf("��� ���� �Ϸ�!\n");
		break;
	case 4:
		printf("24�ð� ���� �Ϸ�!\n");
		break;
	}
}
