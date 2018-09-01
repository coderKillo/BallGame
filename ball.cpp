#include "ball.h"
#include "ballgraphicscomponent.h"
#include "ballphysicscomponent.h"
#include "nullinputcomponent.h"

Ball::Ball()
    :GameObject(new NullInputComponent,
                               new BallPhysicsComponent,
                               new BallGraphicsComponent)
{

}
