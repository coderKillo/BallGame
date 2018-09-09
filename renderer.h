#ifndef RENDERER_H
#define RENDERER_H
#include <QGraphicsScene>
#include <QGraphicsView>

class Renderer: public QGraphicsScene
{
public:
    Renderer();
    ~Renderer();

private:
    QGraphicsView  m_view = nullptr;

    static const int WIDTH = 800;
    static const int HEIGHT = 600;
};
#endif // RENDERER_H
