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

void Union()
{
    printf("공용체 크기 : %zd\n", sizeof(Data));

    Data data = { 0 };
    data.intNum = 123456789;

    printf("\n===== Int 할당 결과 =====\n");
    printf("Int : %d\n", data.intNum);
    printf("float : %f\n", data.fltNum);
    printf("double : %lf\n", data.dbNum);

    data.fltNum = 3.14f;

    printf("\n===== Float 할당 결과 =====\n");
    printf("Int : %d\n", data.intNum);
    printf("float : %f\n", data.fltNum);
    printf("double : %lf\n", data.dbNum);

    data.dbNum = 3.141592;

    printf("\n===== Double 할당 결과 =====\n");
    printf("Int : %d\n", data.intNum);
    printf("float : %f\n", data.fltNum);
    printf("double : %lf\n", data.dbNum);

}

void Enumeration()
{
    Status status = STATUS_NONE;
    Motion motion = MOTION_NONE;

    printf("===== 열거형 상수 =====\n");
    printf("Gold : %d\n", ITEM_GOLD);
    printf("Weapon : %d\n", ITEM_WEAPON);
    printf("Armor : %d\n", ITEM_ARMOR);

    ItemType itemType = ITEM_WEAPON;

    printf("\n===== 열거형 상수 =====\n");
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
            printf("===== 무기 교체 프로그램 ===== \n\n");
            printf("1. 검 2. 활 3. 총 4. 나가기 \n\n메뉴 입력 : ");
            scanf("%d", &weaponType);
            --weaponType;
            printf("\n");

            switch (weaponType)
            {
            case WEAPON_SWORD:
                printf("현재 무기 : 검");
                break;
            case WEAPON_BOW:
                printf("현재 무기 : 활");
                break;
            case WEAPON_GUN:
                printf("현재 무기 : 총");
                break;
            case WEAPON_MAX_VALUE:
                printf("프로그램을 종료합니다.");
                break;
            default:
                printf("잘못 입력하셨습니다. 다시 입력해주세요.");
                break;
            }

            printf("\n\n");
            system("pause");

        } while (weaponType != WEAPON_MAX_VALUE);
    }
}