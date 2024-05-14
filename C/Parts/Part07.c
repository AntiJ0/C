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
	�迭 -> �������� ����
	�޸� �󿡼� ���ӵ� ������ �ڷ����� ���� �������� ����

	���� ����
	�ڷ��� �����̸�;

	�迭 ����
	�ڷ��� �迭�̸�[�迭����];


	*/

	int arr[5];
	//[] -> �ε��� ������
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	printf("===== �迭 1 ���� =====\n");
	printf("%d, %d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3], arr[4]);

	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//�迭 ���� = �迭 ��ü ���� / ���� 1�� ũ��

	const int size2 = sizeof(arr2) / sizeof(arr2[0]);
	//const -> ������ ����� �ٲ�

	printf("\n\n===== �迭 2 ���� =====\n");
	for (int i = 0; i < size2; ++i)
	{	
		if(i >= size2 - 1)
			printf("%d", arr2[i]);
		else
			printf("%d, ", arr2[i]);
	}

	//NULL -> 0x00000000
	//1900�� 1�� 1�� 0�� 0�� 0�� 
	srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;

	printf("\n\n===== ������ �� 10�� ��� =====\n");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", rand() % 100 + 1);
	}

	if (rand() % 100 + 1 <= 3)
		printf("��÷!\n");
	else
		printf("��\n");

	/*
	rand -> 0 ~ 32767 ������ ������ ��ȯ
	seed(�õ�) -> �õ尪
	����ũ����Ʈ -> �õ尪(��)
	*/

	int arr3[100];

	for (int i = 0; i < 100; ++i)
		arr3[i] = rand() % 100 + 1;

	printf("\n\n===== ������ �� 100�� �迭�� ��Ƽ� ��� =====\n");
	for (int i = 0; i < 100; ++i)
		printf("%d, ", arr3[i]);

	//1. �������� 10���� ���� �Է¹޾Ƽ� �Է¹��� ������� ����ϱ�(�迭�� �Ἥ)
	//2. �ֻ��� 100�� ������ 1 ~ 6���� ���� ��� ���Դ��� ��� ���
	int arr4[6] = { 0 };
	//�����Ϸ��� �Էµ� ���� ���� �������� ���� �ڵ����� 0���� �ʱ�ȭ��Ŵ

	int arr5[] = { 1, 2, 3, 4, 5 };


	printf("\n");
}

void TwoDimensionalArray()
{
	/*
	2���� �迭
	���
	4 x 4
	[4][4]
	*/
	int matrix[2][2];
	matrix[0][0] = 1;
	matrix[0][1] = 2;
	matrix[1][0] = 3;
	matrix[1][1] = 4;
	//[y][x]
	//row-major(�� �켱) c/c++/objective-c/pascal
	//col-major(�� �켱) fortran/s-plus/r

	printf("===== 2���� �迭 1 ���� =====\n");
	printf("%d, %d\n%d, %d\n\n", matrix[0][0], matrix[0][1], matrix[1][0], matrix[1][1]);

	int matrix2[2][2] =
	{
		{ 1, 2 },
		{ 3, 4 }
	};

	int row = sizeof(matrix2) / sizeof(matrix2[0]);
	int col = sizeof(matrix2[0]) / sizeof(matrix2[0][0]);

	printf("===== 2���� �迭 2 ���� =====\n");
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

	printf("===== 2���� �迭 3 ���� =====\n");
	printf("%d, %d\n%d, %d\n\n", matrix3[0][0], matrix3[0][1], matrix3[1][0], matrix3[1][1]);

	int matrix4[2][2] =
	{
		{ 1 },
		{ 3 },
	};

	printf("===== 2���� �迭 4 ���� =====\n");
	printf("%d, %d\n%d, %d\n\n", matrix4[0][0], matrix4[0][1], matrix4[1][0], matrix4[1][1]);

	int matrix5[2][2] = { 1, 2 };

	printf("===== 2���� �迭 5 ���� =====\n");
	printf("%d, %d\n%d, %d\n\n", matrix5[0][0], matrix5[0][1], matrix5[1][0], matrix5[1][1]);

	/*
	�л� 1 - ���������
	�л� 2 - ���������
	�л� 3 - ���������
	�л� 4 - ���������

	���� ��� ���� ����, ��� ���
	*/

	int matrix6[][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
}

void String()
{
	/*
	������ �迭, ���ڿ�

	*/
	char chs[5] = { 'A', 'B', 'C', 'D', 'E' };
	char string[6] = { 'A', 'B', 'C', 'D', 'E', '\0' };
	char string2[15] = "abcde";//ū����ǥ�� ���� �ڵ����� ���� NULL���ڰ� �߰���

	printf("===== ���ڿ� =====\n");
	printf("���ڿ� 1 : %s\n", string);
	printf("���ڿ� 2 : %s\n", string2);

	strcpy(string, "Hello");
	strcat(string2, "World");
	//concatenate -> �罽ó�� �մ�, �����ϴ�

	printf("\n===== ���ڿ� �Լ� ��� =====\n");
	printf("���ڿ� 1 (%zd) : %s\n", strlen(string), string);
	printf("���ڿ� 2 (%zd) : %s\n", strlen(string2), string2);
	//strlen -> string length -> ���ڿ��� ����
	//���ڿ��� ũ�Ⱑ �ƴ� �ܼ��� ������ ���̸� ��Ÿ�� - sizeof�� �ٸ�
	//%zd -> ��ȣ�� ���� 8����Ʈ �������� ���� �� ���

	char str1[] = "aaabc";
	char str2[] = "aaac";
	//strcmp -> string compare
	//�� ���ڿ����� �տ������� ���� ���ڱ����� �����ϰ� ���� ���� ���� �ٸ� ���ڰ� ���� �������� �ش� ������ �ƽ�Ű�ڵ带 ����
	//���� �� ������ -1, �� ������ 0, ũ�� 1�� ��µ�
	printf("���ڿ� 1, 2 �� : %d\n\n", strcmp(string, string2));

	//strchr -> string character
	//Ư���� ���ڸ� ã�� �� ������ �ּҰ��� ��ȯ�ϴ� �Լ�
	//�ּҰ��� ã�� ������ ���(�ش� ���ڰ� ���Ե��� ���� ���) NULL ���ڸ� ��ȯ��
	//strstr -> string string
	//strchr�� �����ϰ� �۵������� ���� 1�� �̻��� ã�� �� ����
	printf("���ڿ� 1�� T���� ���� ���� : %d\n", strchr(string, 'T') != NULL);	
	printf("���ڿ� 2�� World���� ���� ���� : %d\n", strstr(string2, "World") != NULL);
	
	//_strrev -> string reverse
	//���ڿ��� ���ڸ� ������Ŵ
	printf("\n���ڿ� 1 ���� : %s\n", _strrev(string));
	//_strlwr -> string lowercase
	//���ڿ��� ���ڸ� �ҹ��ڷ� ��ȯ
	printf("���ڿ� 1 �ҹ��ڷ� ��ȯ : %s\n", _strlwr(string));
	//_strupr -> string uppercase
	//���ڿ��� ���ڸ� �빮�ڷ� ��ȯ
	printf("���ڿ� 2 �빮�ڷ� ��ȯ : %s\n\n", _strupr(string2));

	char str[20] = "";
	printf("���ڿ� 1 �Է� : ");
	scanf("%s%*c", str);
	//getchar();
	//���ۿ��� ���� �ϳ��� ����

	char ch = '\0';
	printf("\n���� �Է� : ");
	scanf("%c%*s", &ch);
	//getchar ���̴� %c�� ���๮�ڸ� �ν��Ͽ� scanf�� ����� �������� ����

	char str3[10] = "";
	printf("\n���ڿ� 2 �Է� : ");
	scanf("%s", &str3);

	printf("\n���ڿ� 1 : %s, ���� : %c, ���ڿ� 2 : %s\n", str, ch, str3);
	getchar();

	printf("\n���ڿ� 1 �Է� : ");
	scanf("%[^\n]s", string);
	//[^\n] -> ���๮�� ������ ��� ���ڸ� �Է¹���
	//%[*][width][modifiers]type ���� modifiers�� �ش��
	//[a-z] a����z���� �Է¹���
	//[A-z] ��� ���ĺ��� �Է¹���

	printf("\n���ڿ� 2 �Է� : ");
	scanf("%s", string2);

	printf("\n===== ���ڿ� �Է� ��� =====\n");
	printf("���ڿ� 1 : %s\n", string);
	printf("���ڿ� 2 : %s\n", string2);

	/*
	�̸� :
	���� : ������ �Է¹ޱ�
	���� : %c�� �Է¹ޱ�(M or W)
	�ּ� : ���� ����
	���� �����ڰ� �ǰ� ���� ���� : ���� ����
	���ٸ��� ȭ�� ����� �ٽ� �Է�
	������ �Է� ������ ȭ�� ����� �Է��� ���� ���� ���
	*/
}