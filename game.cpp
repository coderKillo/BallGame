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

    drawBorder();
}

Game::~Game()
{
    delete m_renderer;
    delete m_world;
    delete m_timer;
}

bool Game::isRunning()
{
    return m_isRunning;
}

void Game::updateGame()
{
    m_world->updateGameObjects();
    auto visableObj = m_world->getDirtyObjects();

    for(auto &obj : visableObj)
    {
        m_renderer->addItem(obj);
        obj->setIsDirty(false);
    }
}

void Game::drawBorder()
{
    //TODO: make border 4 lines instat of rect
    auto border = new Border(m_renderer->sceneRect(), 10);

    m_renderer->addItem(border->top);
    m_renderer->addItem(border->bottom);
    m_renderer->addItem(border->right);
    m_renderer->addItem(border->left);

    m_world->setBorder(border);
}
