#ifndef PHYSICCOMPONENT_H
#define PHYSICCOMPONENT_H
#include "world.h"
#include "igameobject.h"

class PhysicsComponent
{
public:
    virtual ~PhysicsComponent() {}
    virtual void update(IGameObject& object, World& world) = 0;
};

#endif // PHYSICCOMPONENT_H
