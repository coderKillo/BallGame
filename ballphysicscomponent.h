#ifndef DEFAULTPHYSICSCOMPONENT_H
#define DEFAULTPHYSICSCOMPONENT_H
#include "physiccomponent.h"

class BallPhysicsComponent: public PhysicsComponent
{
public:
    virtual void update(IGameObject& object, IWorld& world) override;
};

#endif // DEFAULTPHYSICSCOMPONENT_H
