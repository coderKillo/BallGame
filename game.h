#ifndef GAME_H
#define GAME_H
#include <QMainWindow>
#include "renderer.h"
#include "world.h"
#include "QTimer"

class Game: public QObject
{
    Q_OBJECT
public:
    Game();
    ~Game();
    bool isRunning();

public slots:
    void updateGame();

private:
    void drawBorder();

    bool m_isRunning;
    Renderer* m_renderer = nullptr;
    World* m_world = nullptr;
    QTimer* m_timer = nullptr;
};
#endif // GAME_H
