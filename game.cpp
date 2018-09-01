#include "game.h"
#include "ui_mainwindow.h"
#include <iostream>

Game::Game()
    :m_isRunning(true)
    ,m_renderer(new Renderer)
    ,m_world(new World)
    ,m_timer(new QTimer)
{
    //start Timer
    connect(m_timer, SIGNAL(timeout()), this, SLOT(updateGame()));
    m_timer->start(16);
}

bool Game::isRunning()
{
    return m_isRunning;
}

void Game::updateGame()
{

}
