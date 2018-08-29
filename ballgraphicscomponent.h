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
    std::unique_ptr<QGraphicsPixmapItem> m_graphicItem;
};

#endif // BALLGRAPHICSCOMPONENT_H
