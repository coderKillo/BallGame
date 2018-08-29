#ifndef DEFAULTPHYSICSCOMPONENT_H
#define DEFAULTPHYSICSCOMPONENT_H
#include "physiccomponent.h"

class DefaultPhysicsComponent: public PhysicsComponent
{
public:
    virtual void update(IGameObject& object, World& world) override;
};

#endif // DEFAULTPHYSICSCOMPONENT_H
