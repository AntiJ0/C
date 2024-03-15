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
	//컴퓨터 -> 데이터를 연산하고 저장하는 장치
	//연산장치
	//Central Process Unit(CPU, 중앙처리장치)
	//사람의 뇌, 소수정예
	//Graphics Process Unit(GPU, 그래픽처리장치)
	//단순하지만 수가 많음
	//저장장치
	//HDD, SSD0-보조기억장치
	//RAM, ROM(BIOS)-주기억장치
	//Random Access Memory
	//임의접근-순차접근이 아닌 특정한 주소로 바로 접근함
	//0(1) -> 가장 빠른 속도
	//bit -> 컴퓨터가 연산할 수 있는 가장 작은 단위 - 0 또는 1
	//1 byte = 8 bit => 경우의 수 2^8 = 256가지
	//int -> 4byte 
	char ch = 'A';
	//1 byte
	//정수 or 문자 1개를 담을때 사
	//컴퓨터는 'A'를 숫자로 인식
	short shortNum = 10;
	int integerNum = 20;
	long longNum = 30;
	long long longLongNum = 40;
	printf("===== 문자형 출력 =====\n");
	printf("Char (%llu) : %c\n\n", sizeof(ch), ch);

	printf("===== 정수형 출력 =====\n");
	printf("short (%llu) : %d\n", sizeof(shortNum), shortNum);
	printf("int (%llu) : %d\n", sizeof(integerNum), integerNum);
	printf("long (%llu) : %ld\n", sizeof(longNum), longNum);
	printf("long long (%llu) : %lld\n\n", sizeof(longLongNum), longLongNum);
	//llu -> long long unsigned
	//unsigned -> 부호가 없는(음수를 표현하지 않는)
	//unsigned를 붙이지 않음 -> signed -> 부호가 있는
	//sizeof(ch) -> sizeof 연산자 () 안의 데이터(자료) 혹은 자료형의 크기를 나타낸다
}
