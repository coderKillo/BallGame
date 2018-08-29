#include "game.h"

Game::Game()
    :m_isRunning(true)
{
    m_renderer = new Renderer();
    m_world = new World();
}

bool Game::isRunning()
{
    return m_isRunning;
}

void Game::updateGame()
{

}

void Game::setIntpolateFraction(float factor)
{

}

void Game::renderGameObjects()
{

}

void Game::renderGUI()
{

}
