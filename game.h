#ifndef GAME_H
#define GAME_H
#include "world.h"
#include "renderer.h"
#include <QMainWindow>
#include <QTimer>
#include <memory>

class Game: public QObject
{
    Q_OBJECT
public:
    Game();
    ~Game() {}
    bool isRunning() const;

Q_SLOT    void updateGame();

private:
    void drawBorder();

    bool m_isRunning;

    std::unique_ptr<Renderer> m_renderer;
    std::unique_ptr<World> m_world;
    QTimer* m_timer = nullptr;
};
#endif // GAME_H
