#include <iostream>
#include "SoccerGame.hpp"
#include "CombatGame.hpp"
#include "StrategyGame.hpp"

int main() {
    int choice;
    std::cout << "Choose the type of game:\n";
    std::cout << "1. Soccer\n";
    std::cout << "2. Combat\n";
    std::cout << "3. Strategy\n";
    std::cin >> choice;

    GameInterface* game;
    switch(choice) {
        case 1:
            game = new SoccerGame();
            break;
        case 2:
            game = new CombatGame();
            break;
        case 3:
            game = new StrategyGame();
            break;
        default:
            std::cout << "Invalid option.\n";
            return 1;
    }

    while(true) {
        std::cout << "\nCommand:\n";
        std::cout << "1. Start\n";
        std::cout << "2. Pause\n";
        std::cout << "3. Play\n";
        std::cout << "4. Stop\n";
        std::cin >> choice;

        switch(choice) {
            case 1:
                game->start();
                break;
            case 2:
                game->pause();
                break;
            case 3:
                game->play();
                break;
            case 4:
                game->stop();
                break;
            default:
                std::cout << "Invalid command.\n";
        }
    }

    delete game;
    return 0;
}
