#include "CombatGame.hpp"
#include <iostream>

void CombatGame::start() {
    if (!isPaused) {
        std::cout << "The combat game starts!" << std::endl;
    } else {
        std::cout << "Game already started." << std::endl;
    }
}

void CombatGame::pause() {
    isPaused =!isPaused;
    std::cout << (isPaused? "Game paused." : "Game resumed.") << std::endl;
}

void CombatGame::play() {
    if (isPaused) {
        std::cout << "Playing..." << std::endl;
    } else {
        std::cout << "Already playing." << std::endl;
    }
}

void CombatGame::stop() {
    std::cout << "Stopping the combat game." << std::endl;
    isPaused = true;
}

void CombatGame::attack(int attackerId, int defenderId) {
    std::cout << "Attacker " << attackerId << " attacks defender " << defenderId << "." << std::endl;
}
