#include "ball.h"
#include "../component/graphicscomponent/ballgraphicscomponent.h"
#include "../component/physicscomponent/ballphysicscomponent.h"
#include "../component/inputcomponent/nullinputcomponent.h"

Ball::Ball()
    :GameObject(new NullInputComponent,
                               new BallPhysicsComponent,
                               new BallGraphicsComponent)
{
    this->setPos(100,100);
}
