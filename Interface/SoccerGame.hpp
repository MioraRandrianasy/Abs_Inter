#ifndef SOCCERGAME_HPP
#define SOCCERGAME_HPP

#include "GameInterface.hpp"

class SoccerGame : public GameInterface {
private:
    bool isPaused = false;

public:
    void start() override;
    void pause() override;
    void play() override;
    void stop() override;
    void movePlayer(int playerNumber);
};

#endif 
