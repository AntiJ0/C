#include "stdafx.h"
#include "Part03.h"

void Part03()
{
	Operator();
}

void Operator()
{
	//���� AND -> &&���ۻ��� ->	������ && ������ -> �Ѵ� ���� ��� -> �� -> �ƴ϶�� ����
	//���� OR -> ������ || ������	-> �Ѵ� ������ ��� -> ���� -> �ƴ϶�� ��
	//���� N���� -> !������ -> �������� �ݴ밪

	//�񱳿����� ==, !=, >=, <=

	int num1 = 0, num2 = 0;
	
	printf("���� 2�� �Է� :");
	scanf("%d %d", & num1, &num2);

	//����������

	//����������(++) + ���ҿ�����(--)
	//����, ����
	//���׿�����
	//++num
	//num++

	printf("\n===== ���������� ��� =====\n");

	printf("���������� ���� num1 : %d\n", ++num1);
	//���������ڴ� ��� ����� ����
	printf("�߰��� Ȯ�� num1 : %d\n", num1);
	printf("���������� ���� num1 : %d\n", num1++);
	//���������ڴ� ���� �������� �ൿ�� ������ �� ����� ����
	printf("������ Ȯ�� num1 : %d\n", num1);

	printf("���ҿ����� ���� num1 : %d\n", num2--);
	printf("�߰��� Ȯ�� num1 : %d\n", num2);
	printf("���ҿ����� ���� num1 : %d\n", --num2);
	printf("������ Ȯ�� num1 : %d\n", num2);

	printf("\n===== ��Ʈ ������ ��� =====\n");
	//��Ʈ������ -> ���� ��Ʈ ������ �ɰ��� ����
	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
	//^ -> ��Ʈ XOR������ -> ���� ������ ����	
	printf("~%d = %d\n", num1, ~num1);
	//~ -> ��Ʈ NOT������ -> 0�� 1�� �ڹٲ�
	//���� ��ȣ�κ��� 0�鵵 ���� 1�� �ڹٲ�
	//����� = ���� ������ ��ȣ�� �ٲ� �� -1
	printf("%d << 2 = %d\n", num1, num1 << 2);
	printf("%d >> 2 = %d\n", num1, num1 >> 2);
	//��Ʈ ����Ʈ ������
	//��Ʈ�� ���� ȭ��ǥ �������� �ű�
	//1010 << 2 = 10 1000, 10 1000 >> 3 = 0101

	printf("\n===== ���� ������ =====\n");
	printf("%d < %d ? : = %d", num1, num2, num1 < num2 ? num1 : num2);
	//(�� or ����) ? (���� ��� �����) : (������ ��� �����)
	//? �տ� ���� �ʿ��� ���� �ƴ� �� or ������ �־�� ��
}