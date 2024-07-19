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
	스트림 생성 모드
	w(rite) -> 쓰기가 가능한 스트림을 연다
	r(ead) -> 읽기가 가능한 스트림을 연다
	a(dd)
	w+ -> 쓰기와 읽기가 모두 가능한 스트림을 연다
	r+ -> w+와 같은 기능을 하지만, 파일이 존재하지 않는다면 스트림을 열지 못한다
	a+ -> 이어쓰면서 읽기가 가능한 스트림을 연다

	데이터 입출력 모드
	t(ext) -> 텍스트 형태
	b(inary) -> 이진 데이터 형태

	두 모드의 앞 알파벳을 하나씩 합쳐서 입력
	*/

	FILE* wStream = fopen("01.txt", "wt");

	if (wStream != NULL)
	{
		//fprintf(wStream, "Hello World!\n");
		for (int i = 0; i < 10; ++i)
			fputs("Hello World!\n", wStream);
		//기존에 01.txt파일이 있었다면 그 파일의 데이터를 전부 덮어씌움

		fseek(wStream, 0, SEEK_SET);
		fputs("Olleh", wStream);

		fseek(wStream, 2, SEEK_CUR);
		fputs("O", wStream);

		fseek(wStream, -3, SEEK_END);
		fputs("s", wStream);
		
		fclose(wStream);
		//동적할당과 비슷하게 스트림을 열면 닫아야함
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