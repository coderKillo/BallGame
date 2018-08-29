#ifndef GAME_H
#define GAME_H
#include "renderer.h"
#include "world.h"

class Game
{
public:
    Game();
    bool isRunning();
    void updateGame();
    void setIntpolateFraction(float factor);
    void renderGameObjects();
    void renderGUI();
private:
    bool m_isRunning;
    Renderer* m_renderer = nullptr;
    World* m_world = nullptr;
};
#endif // GAME_H
