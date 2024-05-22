#include "StrategyGame.hpp"
#include <iostream>

void StrategyGame::start() {
    if (!isPaused) {
        std::cout << "The strategy game starts!" << std::endl;
    } else {
        std::cout << "Game already started." << std::endl;
    }
}

void StrategyGame::pause() {
    isPaused =!isPaused;
    std::cout << (isPaused? "Game paused." : "Game resumed.") << std::endl;
}

void StrategyGame::play() {
    if (isPaused) {
        std::cout << "Playing..." << std::endl;
    } else {
        std::cout << "Already playing." << std::endl;
    }
}

void StrategyGame::stop() {
    std::cout << "Stopping the strategy game." << std::endl;
    isPaused = true;
}

void StrategyGame::makeDecision(int decisionType) {
    std::cout << "Making decision " << decisionType << " in the strategy game." << std::endl;
}
