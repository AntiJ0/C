#include "stdafx.h"
#include <limits.h>
#include <float.h>
#include"Part02.h"

void Part02()
{
	DataSize();
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
	//���� or ���� 1���� ������ ��
	//��ǻ�ʹ� 'A'�� ���ڷ� �ν�
	short shortNum = 10;
	int integerNum = 20;
	long longNum = 30;
	long long longLongNum = 40;
	printf("===== ������ ��� =====\n");
	printf("Char (%llu) : %c\n\n", sizeof(ch), ch);

	printf("===== ������ ��� =====\n");
	printf("short (%llu) : %d\n", sizeof(shortNum), shortNum);
	printf("int (%llu) : %d\n", sizeof(integerNum), integerNum);
	printf("long (%llu) : %ld\n", sizeof(longNum), longNum);
	printf("long long (%llu) : %lld\n\n", sizeof(longLongNum), longLongNum);
	//llu -> long long unsigned
	//unsigned -> ��ȣ�� ����(������ ǥ������ �ʴ�)
	//unsigned�� ������ ���� -> signed -> ��ȣ�� �ִ�
	//sizeof(ch) -> sizeof ������ () ���� ������(�ڷ�) Ȥ�� �ڷ����� ũ�⸦ ��Ÿ����
}
