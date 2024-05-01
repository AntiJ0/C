#include "stdafx.h"
#include "Part09.h"

void Part09()
{
    Structure();
}

void Structure()
{
    printf("Test ����ü ũ�� : %lld\n", sizeof(struct Test));

    Player player1;
    player1.id = 1;
    player1.level = 1;
    player1.hp = 10;
    player1.atk = 2;

    Player player2 = { 2, 2, 25, 1 };

    printf("\n===== �� �÷��̾� �ʱ� ���� =====\n");
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

    printf("\n===== �� �÷��̾� �ʱ� ����(�迭) =====\n");
    for (int i = 0; i < numPlayers; ++i)
        PrintPlayerInfo(players[i]);

    //while
    //LevelUp�Լ��� ����ؼ� ������ ��ų ��
    printf("\n===== LevelUp ��� =====\n");
    for (int i = 0; i < numPlayers; ++i)
        PrintPlayerInfo(players[i]);
}

void PrintPlayerInfo(Player player)
{
    printf("�÷��̾� %d ���� [ Level : %d, HP : %d, ATK : %d ]\n", player.id, player.level, player.hp, player.atk);
}