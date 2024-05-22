#ifndef STRATEGYGAME_HPP
#define STRATEGYGAME_HPP

#include "GameInterface.hpp"

class StrategyGame : public GameInterface {
private:
    bool isPaused = false;

public:
    void start() override;
    void pause() override;
    void play() override;
    void stop() override;
    void makeDecision(int decisionType);
};

#endif
