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
	�ݺ���
	Ư�� ������ ������ ���ȸ� Ư�� ������ �ݺ��ϴ� ���
	���� -> ���ѷ��� ����
	�÷��̾ ������ ������ - idle �ڼ�
	Update
	Rendering - ȭ���� ����� �ٽ� �׸��� ����

	�ݺ����� �⺻���� ����
	while, do while, for

	while (���ǽ�)
	{
		���ǽ��� ������ ���� �ݺ��� ��ɹ�1;
		���ǽ��� ������ ���� �ݺ��� ��ɹ�2;
		���ǽ��� ������ ���� �ݺ��� ��ɹ�3;
		���ǽ��� ������ ���� �ݺ��� ��ɹ�4;
	}
	*/

	int i = 0, times = 0;

	printf("�ݺ� Ƚ�� �Է� : ");
	scanf("%d", &times);

	while (i < times)
	{
		printf("%d, ", ++i);
	}
}

void DoWhile()
{
	int i = 0, times = 0;

	printf("�ݺ� Ƚ�� �Է� : ");
	scanf("%d", &times);

	do
	{
		printf("%d, ", ++i);
	} while (i < times);
}

void For()
{
	int times = 0;

	printf("�ݺ� Ƚ�� �Է� : ");
	scanf("%d", &times);

	/*
	for (�ʱ���; ������; �ݺ���)
	{
	
	}

	�ʱ��� - for���� ó�� ���� �� ������ ����
	�ݺ��� -	�ݺ��� �� ������ ������ ����
	*/

	for (int i = 0; i < times; ++i)
	{
		//if (true)
			//break; ���������, ���� ����� �ݺ����̳� switch���� Ż��
		if ((i + 1) % 2 == 0) continue;

		printf("%d, ", i + 1);
	}
}
