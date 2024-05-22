#ifndef GAMEINTERFACE_HPP
#define GAMEINTERFACE_HPP

class GameInterface {
public:
    virtual ~GameInterface() = default;
    virtual void start() = 0;
    virtual void pause() = 0;
    virtual void play() = 0;
    virtual void stop() = 0;
};

#endif