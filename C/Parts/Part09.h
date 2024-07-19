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

typedef union Data
{
    int intNum;
    float fltNum;
    double dbNum;
} Data;

void Union();

typedef enum Color
{
    COLOR_NONE = -1,
    COLOR_RED,
    COLOR_GREEN = 10,
    COLOR_BLUE,
    COLOR_MAX_VALUE
} Color;

typedef enum Status
{
    STATUS_NONE,
    STATUS_ALIVE,
    STATUS_DEAD,
    STATUS_MAX_VALUE
} Status;

typedef enum Motion
{
    MOTION_NONE,
    MOTION_IDLE,
    MOTION_WALKING,
    MOTION_RUNNING,
    MOTION_MAX_VALUE
} Motion;

typedef enum ItemType
{
    ITEM_NONE = -1,
    ITEM_GOLD,
    ITEM_WEAPON,
    ITEM_ARMOR,
    ITEM_MAX_VALUE
} ItemType;

typedef enum WeaponType
{
    WEAPON_NONE = -1,
    WEAPON_SWORD,
    WEAPON_BOW,
    WEAPON_GUN,
    WEAPON_MAX_VALUE
} WeaponType;

void Enumeration();