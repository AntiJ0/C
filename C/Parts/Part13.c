#include "stdafx.h"
#include "Part13.h"

void Part13()
{
	//TextIO();
	BinaryIO();
}

void TextIO()
{
	/*
	��Ʈ�� ���� ���
	w(rite) -> ���Ⱑ ������ ��Ʈ���� ����
	r(ead) -> �бⰡ ������ ��Ʈ���� ����
	a(dd)
	w+ -> ����� �бⰡ ��� ������ ��Ʈ���� ����
	r+ -> w+�� ���� ����� ������, ������ �������� �ʴ´ٸ� ��Ʈ���� ���� ���Ѵ�
	a+ -> �̾�鼭 �бⰡ ������ ��Ʈ���� ����

	������ ����� ���
	t(ext) -> �ؽ�Ʈ ����
	b(inary) -> ���� ������ ����

	�� ����� �� ���ĺ��� �ϳ��� ���ļ� �Է�
	*/

	FILE* wStream = fopen("01.txt", "wt");

	if (wStream != NULL)
	{
		//fprintf(wStream, "Hello World!\n");
		for (int i = 0; i < 10; ++i)
			fputs("Hello World!\n", wStream);
		//������ 01.txt������ �־��ٸ� �� ������ �����͸� ���� �����

		fseek(wStream, 0, SEEK_SET);
		fputs("Olleh", wStream);

		fseek(wStream, 2, SEEK_CUR);
		fputs("O", wStream);

		fseek(wStream, -3, SEEK_END);
		fputs("s", wStream);
		
		fclose(wStream);
		//�����Ҵ�� ����ϰ� ��Ʈ���� ���� �ݾƾ���
	}
	else
	{
		printf("write Stream Open Error\n");

		return;
	}

	FILE* rStream = fopen("01.txt", "rt");

	if (rStream != NULL)
	{
		char string[100] = "";

		while (fgets(string, sizeof(string), rStream) != NULL)
			printf("%s", string);

		fclose(rStream);
	}
	else
	{
		printf("Read Stream Open Error!\n");

		return;
	}

	printf("\n");

	FILE* wrStream = fopen("04.txt", "w+t");
	
	if (wrStream != NULL)
	{
		for (int i = 0; i < 10; ++i)
			fputs("Hello World!\n", wrStream);

		fseek(wrStream, 0, SEEK_SET);

		char string[100] = "";

		while (fgets(string, sizeof(string), wrStream) != NULL)
			printf("%s", string);

		fclose(wrStream);
	}
	else
	{
		printf("Write Read Stream Open Error!\n");

		return;
	}


}

void BinaryIO()
{
	FILE* wStream = fopen("01.bin", "wb");

	char buffer[20] = { "Hello, World!\n" };
	size_t elemCount = strlen(buffer);
	size_t repeatCount = 10;

	if (wStream != NULL)
	{
		for (int i = 0; i < repeatCount; ++i)
			fwrite(buffer, sizeof(buffer[0]), elemCount, wStream);

		int arr[20] = { 0 };
		const int len = sizeof(arr) / sizeof(arr[0]);

		for (int i = 0; i < len; ++i)
			arr[i] = i + 1;

		fwrite(arr, sizeof(arr[0]), len, wStream);

		fclose(wStream);
	}
	else
	{
		printf("Write Stream Open Error!\n");

		return;
	}

	FILE* rStream = fopen("01.bin", "rb");

	if (rStream != NULL)
	{
		char string[200] = "";
		fread(string, sizeof(string[0]), elemCount * repeatCount, rStream);
		printf("%s\n", string);

		int arr[20] = { 0 };
		const int len = sizeof(arr) / sizeof(arr[0]);

		fread(arr, sizeof(arr[0]), len, rStream);

		for (int i = 0; i < len; ++i)
			printf("%d ", arr[i]);

		printf("\n");

		fclose(rStream);
	}
	else
	{
		printf("Read Stream Open Error!\n");

		return;
	}
}