#pragma once

void Part11();

void FunctionPointer();
float GetAvr(int a, int b);
void FuncA();
void FuncB();
/*
�Լ������͹�ȯ�� (*�Լ��̸�(�Լ��ǸŰ�����))(�Լ��������ǸŰ�����);
*/
void (*FuncC(int funcType))();