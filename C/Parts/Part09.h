#pragma once

void Part09();

//사용자 정의 자료형
//struct, union, enum
//구조체
/*
struct 구조체이름
{
    멤버변수1;
    멤버변수2;
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