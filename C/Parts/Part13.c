#include "stdafx.h"
#include "Part13.h"

void Part13()
{
	TextIO();
}

void TextIO()
{
	/*
	��Ʈ�� ���� ���
	w(rite) -> ���Ⱑ ������ ��Ʈ���� ����
	r
	a

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
}
