#include "stdafx.h"
#include <limits.h>
#include <float.h>
#include"Part02.h"

void Part02()
{
	//DataSize();
	DataRange();
}

void DataSize()
{
	//��ǻ�� -> �����͸� �����ϰ� �����ϴ� ��ġ
	//������ġ
	//Central Process Unit(CPU, �߾�ó����ġ)
	//����� ��, �Ҽ�����
	//Graphics Process Unit(GPU, �׷���ó����ġ)
	//�ܼ������� ���� ����
	//������ġ
	//HDD, SSD0-���������ġ
	//RAM, ROM(BIOS)-�ֱ����ġ
	//Random Access Memory
	//��������-���������� �ƴ� Ư���� �ּҷ� �ٷ� ������
	//0(1) -> ���� ���� �ӵ�
	//bit -> ��ǻ�Ͱ� ������ �� �ִ� ���� ���� ���� - 0 �Ǵ� 1
	//1 byte = 8 bit => ����� �� 2^8 = 256����
	//int -> 4byte 
	char ch = 'A';
	//1 byte
	//���� or ���� 1���� ������ ���
	//��ǻ�ʹ� 'A'�� ���ڷ� �ν�
	short shortNum = 10;
	int integerNum = 20;
	long longNum = 30;
	long long longLongNum = 40;

	float floatingNum = 0.1f;//f = float, f�� �������� �Ǽ��� double�� ó����
	double doubleNum = 10.2;

	long double longDoubleNum = 10.3;
	//���� ������� ������ => vc++ => long double 8byte�� ó��
	//ǥ���� ������ ������ => gcc, g++ => long double 16byte�� ó��

	printf("===== ������ ��� =====\n");
	printf("Char (%llu) : %c\n\n", sizeof(ch), ch);

	printf("===== ������ ��� =====\n");
	printf("short (%llu) : %10d\n", sizeof(shortNum), shortNum);
	printf("int (%llu) : %05d\n", sizeof(integerNum), integerNum);
	printf("long (%llu) : %ld\n", sizeof(longNum), longNum);
	printf("long long (%llu) : %lld\n\n", sizeof(longLongNum), longLongNum);
	//llu -> long long unsigned
	//unsigned -> ��ȣ�� ����(������ ǥ������ �ʴ�)
	//unsigned�� ������ ���� -> signed -> ��ȣ�� �ִ�
	//sizeof(ch) -> sizeof ������ () ���� ������(�ڷ�) Ȥ�� �ڷ����� ũ�⸦ ��Ÿ����

	printf("===== �Ǽ��� ��� =====\n");
	printf("Float (%llu) : %.15f\n", sizeof(floatingNum), floatingNum);//f�� .9���̸� �Ҽ��� 9�ڸ����� ǥ��
	printf("Double (%llu) : %lf\n", sizeof(doubleNum), doubleNum);
	printf("Long Double (%llu) : %f\n", sizeof(longDoubleNum), longDoubleNum);

	//�ε��Ҽ���
	//�ε�(floating ���ٴϴ�)
	//IEEE754���� ��ǻ�� -> �Ǽ��� ��� ������ �������� ����
	//�����Ҽ���
	//16bit ������ 16bit �Ҽ���
	//�Ҽ����� �� �� ǥ�� ��Ȯ�� ����
	//�ε��Ҽ��� -> �ֻ�����Ʈ(��ȣ)+-[1bit] ����(n)[8bit] ����(m)[23bit]
	//+- m * 2^n
	/*
	22.22
	
	22
	22 / 2 = 11 ... 0
	11 / 2 = 5 ... 1
	5 / 2 - 2 ... 1
	2 / 2 = 1 ... 0
	1 / 2 = 0 ... 1
	10110
	
	0.22
	0.22 * 2 = 0.44 -> 0
	0.44 * 2 = 0.88 -> 0
	0.88 * 2 = 1.76 -> 1
	0.76 * 2 = 1.52 -> 1
	0.52 * 2 = 1.04 -> 1 
	0.04 * 2 = 0.08 -> 0

	0.1 * 2 = 0.2 -> 0
	0.2 * 2 = 0.4 -> 0
	0.4 * 2 = 0.8 -> 0
	0.8 * 2 = 1.6 = 1
	0.6 * 2 = 1.2 = 1
	0.2 * 2 = 0.4 -> 0
	0.4 * 2 = 0.8 -> 0
	0.8 * 2 = 1.6 = 1
	0.6 * 2 = 1.2 = 1
	0.2 * 2 = 0.4 -> 0
	0.4 * 2 = 0.8 -> 0
	0.8 * 2 = 1.6 = 1
	0.6 * 2 = 1.2 = 1

	0.0001.100110011....

	1.1001100110011....

	IEEE
	Round-up
	0(��ȣ) 10011001100110011001100(����) 2^-4(����)
	0.1f
	0(��ȣ) 01111011(����) 10011001100110011001101(����)
	1.10011001100110011001101 * 2^-4
	= 0.000110011001100110011001101
	= 0.0625 + 0.03125 + ..... = 0.10000001490116119384765625
	*/
}

void DataRange()
{
	printf("char�� ���� : %d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char�� ���� : %u ~ %u\n\n", 0U, UCHAR_MAX);

	printf("short�� ���� : %d ~ %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short�� ���� : %u ~ %u\n\n", 0U, USHRT_MAX);

	printf("int�� ���� : %d ~ %d\n", INT_MIN, INT_MAX);
	printf("unsigned int�� ���� : %u ~ %u\n\n", 0U, UINT_MAX);

	printf("long�� ���� : %ld ~ %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long�� ���� : %lu ~ %lu\n\n", 0U, ULONG_MAX);

	printf("long long�� ���� : %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long�� ���� : %llu ~ %llu\n\n", 0U, ULLONG_MAX);

	printf("float�� ���� : %f ~ %f ~ %f\n\n", -FLT_MAX, FLT_MIN, FLT_MAX);
	printf("double�� ���� : %lf ~ %lf ~ %lf\n", -DBL_MAX, DBL_MIN, DBL_MAX);
}
