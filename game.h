#ifndef GAME_H
#define GAME_H
#include <QMainWindow>
#include "world.h"
#include "QTimer"

//TODO: move include to cpp and forward decl class.
class Renderer;

class Game: public QObject
{
    Q_OBJECT
public:
    Game();
    ~Game();
    bool isRunning() const;

Q_SLOT    void updateGame();

private:
    void drawBorder();

    bool m_isRunning;
    //TODO: make unqiue ptr
    Renderer* m_renderer = nullptr;
    World* m_world = nullptr;
    QTimer* m_timer = nullptr;
};
#endif // GAME_H
