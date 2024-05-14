#include "stdafx.h"
#include "Part07.h"

void Part07()
{
	Array();
	//TwoDimensionalArray();
	//String();
}

void Array()
{
	/*
	배열 -> 데이터의 나열
	메모리 상에서 연속된 동일한 자료형을 가진 데이터의 집합

	변수 선언
	자료형 변수이름;

	배열 선언
	자료형 배열이름[배열길이];


	*/

	int arr[5];
	//[] -> 인덱스 연산자
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	printf("===== 배열 1 원소 =====\n");
	printf("%d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4]);

	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//배열 길이 = 배열 전체 길이 / 원소 1개 크기

	const int size2 = sizeof(arr2) / sizeof(arr2[0]);
	//const -> 변수를 상수로 바꿈

	printf("\n\n===== 배열 2 원소 =====\n");
	for (int i = 0; i < size2; ++i)
	{	
		if(i >= size2 - 1)
			printf("%d", arr2[i]);
		else
			printf("%d, ", arr2[i]);
	}

	//NULL -> 0x00000000
	//1900년 1월 1일 0시 0분 0초 
	srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;

	printf("\n\n===== 랜덤한 수 10개 출력 =====\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", rand() % 100 + 1);
	}

	if (rand() % 100 + 1 <= 3)
		printf("당첨!\n");
	else
		printf("꽝\n");

	/*
	rand -> 0 ~ 32767 까지의 정수를 반환
	seed(시드) -> 시드값
	마인크래프트 -> 시드값(맵)
	*/

	int arr3[100];

	for (int i = 0; i < 100; ++i)
		arr3[i] = rand() % 100 + 1;

	printf("\n\n===== 랜덤한 수 100개 배열에 담아서 출력 =====\n");
	for (int i = 0; i < 100; ++i)
		printf("%d, ", arr3[i]);

	//1. 유저한테 10개의 수를 입력받아서 입력받은 순서대로 출력하기(배열을 써서)
	//2. 주사위 100번 굴려서 1 ~ 6까지 각각 몇번 나왔는지 결과 출력
	int arr4[6] = { 0 };
	//컴파일러가 입력된 값이 없는 변수들의 값을 자동으로 0으로 초기화시킴

	int arr5[] = { 1, 2, 3, 4, 5 };


	printf("\n");
}

void TwoDimensionalArray()
{
	/*
	2차원 배열
	행렬
	4 x 4
	[4][4]
	*/
	int matrix[2][2];
	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[1][0] = 3;
	matrix[1][1] = 4;
	//[y][x]
	//row-major(행 우선) c/c++/objective-c/pascal
	//col-major(열 우선) fortran/s-plus/r

	printf("===== 2차원 배열 1 원소 =====\n");
	printf("%d, %d\n%d, %d\n\n", matrix[0][0], matrix[0][1], matrix[1][0], matrix[1][1]);

	int matrix2[2][2] =
	{
		{ 1, 2 },
		{ 3, 4 }
	};

	int row = sizeof(matrix2) / sizeof(matrix2[0]);
	int col = sizeof(matrix2[0]) / sizeof(matrix2[0][0]);

	printf("===== 2차원 배열 2 원소 =====\n");
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (j == col - 1)
				printf("%d", matrix2[i][j]);
			else
				printf("%d, ", matrix2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int matrix3[2][2] = { 1, 2, 3, 4 };

	printf("===== 2차원 배열 3 원소 =====\n");
	printf("%d, %d\n%d, %d\n\n", matrix3[0][0], matrix3[0][1], matrix3[1][0], matrix3[1][1]);

	int matrix4[2][2] =
	{
		{ 1 },
		{ 3 },
	};

	printf("===== 2차원 배열 4 원소 =====\n");
	printf("%d, %d\n%d, %d\n\n", matrix4[0][0], matrix4[0][1], matrix4[1][0], matrix4[1][1]);

	int matrix5[2][2] = { 1, 2 };

	printf("===== 2차원 배열 5 원소 =====\n");
	printf("%d, %d\n%d, %d\n\n", matrix5[0][0], matrix5[0][1], matrix5[1][0], matrix5[1][1]);

	/*
	학생 1 - 국영수사과
	학생 2 - 국영수사과
	학생 3 - 국영수사과
	학생 4 - 국영수사과

	점수 출력 이후 총점, 평균 출력
	*/

	int matrix6[][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
}

void String()
{
	/*
	문자의 배열, 문자열

	*/
	char chs[5] = { 'A', 'B', 'C', 'D', 'E' };
	char string[6] = { 'A', 'B', 'C', 'D', 'E', '\0' };
	char string2[15] = "abcde";//큰따음표에 들어가면 자동으로 끝에 NULL문자가 추가됨

	printf("===== 문자열 =====\n");
	printf("문자열 1 : %s\n", string);
	printf("문자열 2 : %s\n", string2);

	strcpy(string, "Hello");
	strcat(string2, "World");
	//concatenate -> 사슬처럼 잇다, 연결하다

	printf("\n===== 문자열 함수 결과 =====\n");
	printf("문자열 1 (%zd) : %s\n", strlen(string), string);
	printf("문자열 2 (%zd) : %s\n", strlen(string2), string2);
	//strlen -> string length -> 문자열의 길이
	//문자열의 크기가 아닌 단순한 문자의 길이를 나타냄 - sizeof와 다름
	//%zd -> 부호가 없는 8바이트 정수형을 받을 때 사용

	char str1[] = "aaabc";
	char str2[] = "aaac";
	//strcmp -> string compare
	//두 문자열에서 앞에서부터 같은 문자까지는 무시하고 가장 먼저 서로 다른 문자가 나온 시점에서 해당 문자의 아스키코드를 비교함
	//앞이 더 작으면 -1, 더 같으면 0, 크면 1이 출력됨
	printf("문자열 1, 2 비교 : %d\n\n", strcmp(string, string2));

	//strchr -> string character
	//특정한 문자를 찾고 그 문자의 주소값을 반환하는 함수
	//주소값을 찾지 못했을 경우(해당 문자가 포함되지 않을 경우) NULL 문자를 반환함
	//strstr -> string string
	//strchr과 동일하게 작동하지만 문자 1개 이상을 찾을 수 있음
	printf("문자열 1의 T문자 포함 여부 : %d\n", strchr(string, 'T') != NULL);	
	printf("문자열 2의 World문자 포함 여부 : %d\n", strstr(string2, "World") != NULL);
	
	//_strrev -> string reverse
	//문자열의 문자를 반전시킴
	printf("\n문자열 1 반전 : %s\n", _strrev(string));
	//_strlwr -> string lowercase
	//문자열의 문자를 소문자로 변환
	printf("문자열 1 소문자로 변환 : %s\n", _strlwr(string));
	//_strupr -> string uppercase
	//문자열의 문자를 대문자로 변환
	printf("문자열 2 대문자로 변환 : %s\n\n", _strupr(string2));

	char str[20] = "";
	printf("문자열 1 입력 : ");
	scanf("%s%*c", str);
	//getchar();
	//버퍼에서 문자 하나를 빼냄

	char ch = '\0';
	printf("\n문자 입력 : ");
	scanf("%c%*s", &ch);
	//getchar 없이는 %c가 개행문자를 인식하여 scanf를 제대로 실행하지 못함

	char str3[10] = "";
	printf("\n문자열 2 입력 : ");
	scanf("%s", &str3);

	printf("\n문자열 1 : %s, 문자 : %c, 문자열 2 : %s\n", str, ch, str3);
	getchar();

	printf("\n문자열 1 입력 : ");
	scanf("%[^\n]s", string);
	//[^\n] -> 개행문자 전까지 모든 문자를 입력받음
	//%[*][width][modifiers]type 에서 modifiers에 해당됨
	//[a-z] a에서z까지 입력받음
	//[A-z] 모든 알파벳을 입력받음

	printf("\n문자열 2 입력 : ");
	scanf("%s", string2);

	printf("\n===== 문자열 입력 결과 =====\n");
	printf("문자열 1 : %s\n", string);
	printf("문자열 2 : %s\n", string2);

	/*
	이름 :
	나이 : 정수로 입력받기
	성별 : %c로 입력받기(M or W)
	주소 : 띄어쓰기 포함
	게임 개발자가 되고 싶은 이유 : 띄어쓰기 포함
	한줄마다 화면 지우고 다시 입력
	마지막 입력 받은후 화면 지우고 입력한 정보 전부 출력
	*/
}