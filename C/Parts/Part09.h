#pragma once

void Part09();

//����� ���� �ڷ���
//struct, union, enum
//����ü
/*
struct ����ü�̸�
{
    �������1;
    �������2;
}

int playerAttack
int playerHp

struct Player
{
    int atk;
    int hp;
}
*/
struct Test
{
    int a;
    int c;
    double b;
};

typedef struct Player
{
    int id;
    int level;
    int hp;
    int atk;
} Player;

void Structure();
void PrintPlayerInfo(Player player);