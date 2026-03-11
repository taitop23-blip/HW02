// Main.cpp

#include <string>
#include <iostream>
#include "player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Monster.h"

int main()
{
    std::string jobs[] = { "전사", "마도사" };
    int job_choice = 0;
    std::string nickname;

    Player* player = nullptr;

    std::cout << "* 닉네임을 입력해주세요: ";
    std::cin >> nickname;

    std::cout << "\n<전직 시스템>" << std::endl;
    std::cout << nickname << "님, 환영합니다!" << std::endl;
    std::cout << "* 원하시는 직업을 선택해주세요." << std::endl;

    for (int i = 0; i < 2; i++) {
        std::cout << (i + 1) << ". " << jobs[i] << std::endl;
    }

    std::cout << "선택: ";
    std::cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;

    default:
        std::cout << "잘못된 입력입니다." << std::endl;
        return 1; 
    }

    std::cout << "\n--- 전직 완료 ---" << std::endl;
    player->printPlayerStatus();




    std::cout << "\n[ 앗! 몬스터가 습격했다! ]" << std::endl;

    Monster* treeSpirit = new Monster("타락한 나무정령", 200, 15);
    treeSpirit->printMonsterStatus();

    int action_choice = 0;
    while (true)
    {
        std::cout << "\n[ 무엇을 하시겠습니까? ]" << std::endl;
        std::cout << "1. 공격하기  2. 상태창 보기  3. 게임 종료" << std::endl;
        std::cout << "선택: ";
        std::cin >> action_choice;

        if (action_choice == 1) {
            player->attack();
            treeSpirit->TakeDamage(player->getPower());

            if (treeSpirit->getHP() <= 0) {
                std::cout << "\n*** 타락한 나무정령을 물리쳤습니다! 전투 승리! ***" << std::endl;
                break; 
            }

            std::cout << "\n[ 타락한 나무정령의 반격! 꽃가루 뿌리기!! ]" << std::endl;
            player->TakeDamage(treeSpirit->getAttackPower());

            if (player->getHP() <= 0) {
                std::cout << "\n*** 플레이어가 쓰러졌습니다... 게임 오버. ***" << std::endl;
                break;
            }
        }
        else if (action_choice == 2) {
            player->printPlayerStatus();
            treeSpirit->printMonsterStatus();
        }
        else if (action_choice == 3) {
            std::cout << "게임을 종료합니다. 수고하셨습니다!" << std::endl;
            break;
        }
        else {
            std::cout << "잘못된 입력입니다. 다시 선택해주세요." << std::endl;
        }
    }














    if (player != nullptr) 
    {
        delete player;
    }



    return 0;
}
