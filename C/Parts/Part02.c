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
	//정수 or 문자 1개를 담을때 사용
	//컴퓨터는 'A'를 숫자로 인식
	short shortNum = 10;
	int integerNum = 20;
	long longNum = 30;
	long long longLongNum = 40;

	float floatingNum = 0.1f;//f = float, f가 붙지않은 실수는 double로 처리됨
	double doubleNum = 10.2;

	long double longDoubleNum = 10.3;
	//현재 사용중인 컴파일 => vc++ => long double 8byte로 처리
	//표준을 따르는 컴파일 => gcc, g++ => long double 16byte로 처리

	printf("===== 문자형 출력 =====\n");
	printf("Char (%llu) : %c\n\n", sizeof(ch), ch);

	printf("===== 정수형 출력 =====\n");
	printf("short (%llu) : %10d\n", sizeof(shortNum), shortNum);
	printf("int (%llu) : %05d\n", sizeof(integerNum), integerNum);
	printf("long (%llu) : %ld\n", sizeof(longNum), longNum);
	printf("long long (%llu) : %lld\n\n", sizeof(longLongNum), longLongNum);
	//llu -> long long unsigned
	//unsigned -> 부호가 없는(음수를 표현하지 않는)
	//unsigned를 붙이지 않음 -> signed -> 부호가 있는
	//sizeof(ch) -> sizeof 연산자 () 안의 데이터(자료) 혹은 자료형의 크기를 나타낸다

	printf("===== 실수형 출력 =====\n");
	printf("Float (%llu) : %.15f\n", sizeof(floatingNum), floatingNum);//f앞 .9붙이면 소수점 9자리까지 표현
	printf("Double (%llu) : %lf\n", sizeof(doubleNum), doubleNum);
	printf("Long Double (%llu) : %f\n", sizeof(longDoubleNum), longDoubleNum);

	//부동소수점
	//부동(floating 떠다니는)
	//IEEE754에서 컴퓨터 -> 실수를 어떻게 저장할 것인지를 지정
	//고정소수점
	//16bit 정수부 16bit 소수부
	//소수점이 긴 수 표현 정확도 낮음
	//부동소수점 -> 최상위비트(부호)+-[1bit] 지수(n)[8bit] 가수(m)[23bit]
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
	0(부호) 10011001100110011001100(가수) 2^-4(지수)
	0.1f
	0(부호) 01111011(지수) 10011001100110011001101(가수)
	1.10011001100110011001101 * 2^-4
	= 0.000110011001100110011001101
	= 0.0625 + 0.03125 + ..... = 0.10000001490116119384765625
	*/
}

void DataRange()
{
	printf("char의 범위 : %d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char의 범위 : %u ~ %u\n\n", 0U, UCHAR_MAX);

	printf("short의 범위 : %d ~ %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short의 범위 : %u ~ %u\n\n", 0U, USHRT_MAX);

	printf("int의 범위 : %d ~ %d\n", INT_MIN, INT_MAX);
	printf("unsigned int의 범위 : %u ~ %u\n\n", 0U, UINT_MAX);

	printf("long의 범위 : %ld ~ %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long의 범위 : %lu ~ %lu\n\n", 0U, ULONG_MAX);

	printf("long long의 범위 : %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long의 범위 : %llu ~ %llu\n\n", 0U, ULLONG_MAX);

	printf("float의 범위 : %f ~ %f ~ %f\n\n", -FLT_MAX, FLT_MIN, FLT_MAX);
	printf("double의 범위 : %lf ~ %lf ~ %lf\n", -DBL_MAX, DBL_MIN, DBL_MAX);
}
