#pragma once
//�ߺ��� ����� �������ִ� ����

#define _CRT_SECURE_NO_WARNINGS

//����� ǥ�� ��� <>�� ����(�� ���� ����)
#include <stdio.h>
//stdio.h-> Standard Input Output(ǥ�������) ���
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <assert.h>

#pragma warning(disable : 6031)

#define SAFE_FREE(p) if (p) { free(p); p = NULL; }