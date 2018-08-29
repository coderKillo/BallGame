#ifndef GRAPHICSCOMPONENT_H
#define GRAPHICSCOMPONENT_H
#include "renderer.h"
#include "igameobject.h"

class GraphicsComponent
{
public:
    virtual ~GraphicsComponent() {}
    virtual void update(IGameObject& object, Renderer& renderer) = 0;
};

#endif // GRAPHICSCOMPONENT_H
