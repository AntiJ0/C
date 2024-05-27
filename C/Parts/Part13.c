#include "stdafx.h"
#include "Part13.h"

void Part13()
{
	TextIO();
}

void TextIO()
{
	/*
	스트림 생성 모드
	w(rite) -> 쓰기가 가능한 스트림을 연다
	r
	a

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
}
