#ifndef GRAPHICSCOMPONENT_H
#define GRAPHICSCOMPONENT_H

#include <QGraphicsPixmapItem>
#include "renderer.h"
#include "igameobject.h"

class GraphicsComponent:  public QGraphicsPixmapItem
{
public:
    virtual ~GraphicsComponent() {}
    virtual void update(IGameObject& object, Renderer& renderer) = 0;
};

#endif // GRAPHICSCOMPONENT_H
