#ifndef DEFAULTPHYSICSCOMPONENT_H
#define DEFAULTPHYSICSCOMPONENT_H
#include "physiccomponent.h"

class BallPhysicsComponent: public PhysicsComponent
{
public:
    virtual void update(IGameObject& object, IWorld& world) override;

private:
    const qreal G_FORCE = 100;
    const qreal TIMESTEP = 0.016;
};

#endif // DEFAULTPHYSICSCOMPONENT_H
