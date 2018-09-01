#ifndef BALLGRAPHICSCOMPONENT_H
#define BALLGRAPHICSCOMPONENT_H
#include "graphicscomponent.h"
#include "QGraphicsPixmapItem"
#include <memory>

class BallGraphicsComponent: public GraphicsComponent, public QGraphicsPixmapItem
{
public:
    BallGraphicsComponent();
    virtual void update(IGameObject& object, Renderer& renderer) override;
private:
    QPixmap m_pixmap;
};

#endif // BALLGRAPHICSCOMPONENT_H
