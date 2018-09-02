#include "ballphysicscomponent.h"

void BallPhysicsComponent::update(IGameObject &object, IWorld &world)
{
    //apply gForce
    object.setDy(object.getDy() + G_FORCE * TIMESTEP);

    //apply movement
    object.setX(object.getX() + object.getDx() * TIMESTEP);
    object.setY(object.getY() + object.getDy() * TIMESTEP);

    // do Collision

    auto list =
}
