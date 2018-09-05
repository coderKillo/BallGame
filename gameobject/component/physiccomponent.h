#ifndef PHYSICCOMPONENT_H
#define PHYSICCOMPONENT_H
#include "iworld.h"
#include "../igameobject.h"

class PhysicsComponent
{
public:
    virtual ~PhysicsComponent() {}
    virtual void update(IGameObject& object, IWorld& world) = 0;

protected:
    const qreal G_FORCE = 100;
    const qreal TIMESTEP = 0.016;
};

#endif // PHYSICCOMPONENT_H
