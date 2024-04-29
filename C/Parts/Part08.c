#include "stdafx.h"
#include "Part08.h"

void Part08()
{
	//Function();
	//StaticGlobal();
	RecursiveFunction();
}

void Function()
{
	//�Է°��� ���� ��°��� �����Ǵ� ����
	//void -> ����(�������)
	//�Լ��� �ٽ� -> �ڵ��� �׷�ȭ�� ����

	/*
	�Լ��� ����
	�Լ��� �⺻����
	��ȯ�� �Լ��̸�(�Ű�����)

	�Լ��� ����
	��ȯ�� �Լ��̸�(�Ű�����) {�Լ���ü}
	�Լ��� ����� �� �Լ���ü�� �ִ� ���� ����

	�Լ��� ȣ��
	�Լ��̸�(�Ű�����);

	��ȯ���� ���� -> �Լ��� ��°��� ����
	��ȯ�� -> �Լ����� ��ȯ�� ���� �ڷ���
	�Ű����� -> �Լ��� �Է°�

	int func1(int a, int b); -> �Է� o, ��� o
	void func2(int a, int b); -> �Է� o, ��� x
	int func3(void); -> �Է�x, ��� o
	void fund4(void); -> �Է� x, ��� x

	int a;
	a = 10;
	a = 9;
	*/

	int num1 = 0, num2 = 0;

	char oper = '\0';
	printf("���� �Է� (+, -, *, /) : ");
	scanf("%d %c %d", &num1, &oper, &num2);

	system("cls");

	switch (oper)
	{
	case '+':
	{
		int result = GetSumValue(num1, num2);
		printf("%d + %d = %d\n", num1, num2, result);
		break;
	}
	case '-':
	{
		printf("%d - %d = %d\n", num1, num2, GetSubValue(num1, num2));
		break;
	}
	case '*':
	{
		int result = GetMulValue(num1, num2);
		printf("%d * %d = %d\n", num1, num2, result);
		break;
	}
	case '/':
	{
		float result = GetDivValue(num1, num2);
		printf("%d + %f = %f\n", num1, (float)num2, result);
		break;
	}
	default:
		printf("�߸��� ������ �Է��߽��ϴ�.\n");
		break;
	}
}

int GetSumValue(int val1, int val2)
{
	return val1 + val2;
}

int GetSubValue(int val1, int val2)
{
	return val1 - val2;
}

int GetMulValue(int val1, int val2)
{
	return val1 * val2;
}

float GetDivValue(int val1, int val2)
{
	return val1 / (float)val2;
}

void StaticGlobal()
{
	int value = 0;
	//�Լ� �ȿ��� ����� �Լ� -> �����Լ�

	do
	{
		printf("���� �Է� : ");
		scanf("%d", &value);

		IncreaseValue(value);
		printf("\n");
	} while (value != 0);
}

extern int globalVal;

//���� �������� -> �ش� �ҽ����Ͽ����� ����� �� �ִ� ��������
static int staticGlobalVal = 30;

void IncreaseValue(int val)
{
	//Stack
	//Heap
	//Data
	//Code

	int num = 0;
	static int staticNum = 0;
	//���� �������� -> ���������� ������ �ѹ� ������ ���� ��� ������

	num += val;
	//num = num + val
	staticNum += val;
	globalVal += val;
	staticGlobalVal += val;

	system("cls");

	printf("===== ���� ��� =====\n");
	printf("�Ϲ� ���� ���� : %d\n", num);
	printf("���� ���� ���� : %d\n", staticNum);
	printf("�Ϲ� ���� ���� : %d\n", globalVal);
	printf("���� ���� ���� : %d\n", staticGlobalVal);

	
}

void RecursiveFunction()
{
	int value = 0;

	printf("1���� ������ ���� �Է� : ");
	scanf("%d", &value);

	printf("\n1���� %d������ ������ ���� ���� �� : %d\n\n", value, GetArithmeticSeriesTail(value, 0));

	//�������� �Լ��� ��� ȣ����
	//ȿ�� x, �� o
	//���� �����÷ο�
	//�ð� ���⵵(�Լ� �������) ���
}

int GetArithmeticSeries(int val)
{
	//����Լ�
	//�ݺ������� �ٸ��� �ݺ��ɶ����� �Լ��� ȣ���
	//���� �����÷ο� �߻� ���ɼ� ���
	if (val == 1)
		return val;

	return val + GetArithmeticSeries(val - 1);
}

int GetArithmeticSeriesTail(int val, int sum)
{
	//���� ���
	if (val == 0)
		return sum;

	return GetArithmeticSeriesTail(val - 1, val + sum);
}
