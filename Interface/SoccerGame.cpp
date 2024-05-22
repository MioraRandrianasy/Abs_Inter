#include "SoccerGame.hpp"
#include <iostream>

void SoccerGame::start() {
    if (!isPaused) {
        std::cout << "The soccer match starts!" << std::endl;
    } else {
        std::cout << "Match already started." << std::endl;
    }
}

void SoccerGame::pause() {
    isPaused =!isPaused;
    std::cout << (isPaused? "Match paused." : "Match resumed.") << std::endl;
}

void SoccerGame::play() {
    if (isPaused) {
        std::cout << "Playing..." << std::endl;
    } else {
        std::cout << "Already playing." << std::endl;
    }
}

void SoccerGame::stop() {
    std::cout << "Stopping the match." << std::endl;
    isPaused = true;
}

void SoccerGame::movePlayer(int playerNumber) {
    std::cout << "Player " << playerNumber << " moves." << std::endl;
}
