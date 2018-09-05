#include "ballphysicscomponent.h"
#include <iostream>

void BallPhysicsComponent::update(IGameObject &object, IWorld &world)
{
    //apply gForce
    object.setDy(object.getDy() + G_FORCE * TIMESTEP);

    //apply movement
    object.setX(object.x() + object.getDx() * TIMESTEP);
    object.setY(object.y() + object.getDy() * TIMESTEP);

    // TODO: Collision
}
