#include "stdafx.h"
#include "Part09.h"

void Part09()
{
    Structure();
}

void Structure()
{
    printf("Test 구조체 크기 : %lld\n", sizeof(struct Test));

    Player player1;
    player1.id = 1;
    player1.level = 1;
    player1.hp = 10;
    player1.atk = 2;

    Player player2 = { 2, 2, 25, 1 };

    printf("\n===== 각 플레이어 초기 정보 =====\n");
    PrintPlayerInfo(player1);
    PrintPlayerInfo(player2);

    Player players[] =
    {
        player1,
        player2,
        { 3, 2, 15, 2 },
        { 4, 1, 15, 1 }
    };

    const int numPlayers = sizeof(players) / sizeof(players[0]);

    printf("\n===== 각 플레이어 초기 정보(배열) =====\n");
    for (int i = 0; i < numPlayers; ++i)
        PrintPlayerInfo(players[i]);

    //while
    //LevelUp함수를 사용해서 레벨업 시킬 것
    printf("\n===== LevelUp 결과 =====\n");
    for (int i = 0; i < numPlayers; ++i)
        PrintPlayerInfo(players[i]);
}

void PrintPlayerInfo(Player player)
{
    printf("플레이어 %d 정보 [ Level : %d, HP : %d, ATK : %d ]\n", player.id, player.level, player.hp, player.atk);
}