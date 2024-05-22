#ifndef COMBATGAME_HPP
#define COMBATGAME_HPP

#include "GameInterface.hpp"

class CombatGame : public GameInterface {
private:
    bool isPaused = false;

public:
    void start() override;
    void pause() override;
    void play() override;
    void stop() override;
    void attack(int attackerId, int defenderId);
};

#endif
