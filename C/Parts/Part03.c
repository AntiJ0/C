#include "stdafx.h"
#include "Part03.h"

void Part03()
{
	Operator();
}

void Operator()
{
	//논리 AND -> &&엠퍼샌드 ->	논리값 && 논리값 -> 둘다 참일 경우 -> 참 -> 아니라면 거짓
	//논리 OR -> 논리값 || 논리값	-> 둘다 거짓일 경우 -> 거짓 -> 아니라면 참
	//논리 NOT -> !논리값 -> 논리값의 반대값

	//비교연산자 ==, !=, >=, <=

	int num1 = 0, num2 = 0;
	
	printf("정수 2개 입력 :");
	scanf("%d %d", &num1, &num2);

	//증감연산자

	//증가연산자(++) + 감소연산자(--)
	//전위, 후위
	//단항연산자
	//++num
	//num++

	printf("\n===== 증감연산자 결과 =====\n");

	printf("증가연산자 전위 num1 : %d\n", ++num1);
	//전위연산자는 즉시 계산이 적용
	printf("중간값 확인 num1 : %d\n", num1);
	printf("증가연산자 후위 num1 : %d\n", num1++);
	//후위연산자는 현재 진행중인 행동을 실행한 후 계산을 적용
	printf("최종값 확인 num1 : %d\n", num1);

	printf("감소연산자 후위 num1 : %d\n", num2--);
	printf("중간값 확인 num1 : %d\n", num2);
	printf("감소연산자 전위 num1 : %d\n", --num2);
	printf("최종값 확인 num1 : %d\n", num2);

	printf("\n===== 비트 연산자 결과 =====\n");
	//비트연산자 -> 수를 비트 단위로 쪼개서 연산
	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
	//^ -> 비트 XOR연산자 -> 서로 같으면 거짓	
	printf("~%d = %d\n", num1, ~num1);
	//~ -> 비트 NOT연산자 -> 0과 1을 뒤바꿈
	//앞의 부호부분의 0들도 전부 1로 뒤바꿈
	//결과값 = 원래 수에서 부호를 바꾼 뒤 -1
	printf("%d << 2 = %d\n", num1, num1 << 2);
	printf("%d >> 2 = %d\n", num1, num1 >> 2);
	//비트 쉬프트 연산자
	//비트를 전부 화살표 방향으로 옮김
	//1010 << 2 = 10 1000, 10 1000 >> 3 = 0101

	printf("\n===== 조건 연산자 =====\n");
	printf("%d < %d ? : = %d", num1, num2, num1 < num2 ? num1 : num2);
	//(참 or 거짓) ? (참일 경우 결과값) : (거짓일 경우 결과값)
	//? 앞에 식이 필요한 것이 아닌 참 or 거짓이 있어야 함
}
