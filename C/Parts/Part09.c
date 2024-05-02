#include "stdafx.h"
#include "Part09.h"

void Part09()
{
    //Structure();
    //Union();
    Enumeration();
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

void Union()
{
    printf("����ü ũ�� : %zd\n", sizeof(Data));

    Data data = { 0 };
    data.intNum = 123456789;

    printf("\n===== Int �Ҵ� ��� =====\n");
    printf("Int : %d\n", data.intNum);
    printf("float : %f\n", data.fltNum);
    printf("double : %lf\n", data.dbNum);

    data.fltNum = 3.14f;

    printf("\n===== Float �Ҵ� ��� =====\n");
    printf("Int : %d\n", data.intNum);
    printf("float : %f\n", data.fltNum);
    printf("double : %lf\n", data.dbNum);

    data.dbNum = 3.141592;

    printf("\n===== Double �Ҵ� ��� =====\n");
    printf("Int : %d\n", data.intNum);
    printf("float : %f\n", data.fltNum);
    printf("double : %lf\n", data.dbNum);

}

void Enumeration()
{
    Status status = STATUS_NONE;
    Motion motion = MOTION_NONE;

    printf("===== ������ ��� =====\n");
    printf("Gold : %d\n", ITEM_GOLD);
    printf("Weapon : %d\n", ITEM_WEAPON);
    printf("Armor : %d\n", ITEM_ARMOR);

    ItemType itemType = ITEM_WEAPON;

    printf("\n===== ������ ��� =====\n");
    printf("ItemType is Gold : %s\n", itemType == ITEM_GOLD ? "True" : "False");
    printf("ItemType is Weapon : %s\n", itemType == ITEM_WEAPON ? "True" : "False");
    printf("ItemType is Armor : %s\n", itemType == ITEM_ARMOR ? "True" : "False");

    system("pause");

    if (itemType == ITEM_WEAPON)
    {
        WeaponType weaponType = WEAPON_NONE;

        do
        {
            system("cls");
            printf("===== ���� ��ü ���α׷� ===== \n\n");
            printf("1. �� 2. Ȱ 3. �� 4. ������ \n\n�޴� �Է� : ");
            scanf("%d", &weaponType);
            --weaponType;
            printf("\n");

            switch (weaponType)
            {
            case WEAPON_SWORD:
                printf("���� ���� : ��");
                break;
            case WEAPON_BOW:
                printf("���� ���� : Ȱ");
                break;
            case WEAPON_GUN:
                printf("���� ���� : ��");
                break;
            case WEAPON_MAX_VALUE:
                printf("���α׷��� �����մϴ�.");
                break;
            default:
                printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.");
                break;
            }

            printf("\n\n");
            system("pause");

        } while (weaponType != WEAPON_MAX_VALUE);
    }
}