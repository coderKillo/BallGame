#include "ballgraphicscomponent.h"
#include <iostream>

BallGraphicsComponent::BallGraphicsComponent()
    :m_pixmap(QPixmap::fromImage(QImage(":/texture/Ball.png")))
{
}

void BallGraphicsComponent::update(IGameObject &object, Renderer &renderer)
{
}

void BallGraphicsComponent::paint(IGameObject &object, QPainter *painter)
{
    painter->drawPixmap(-50, -50 , m_pixmap);
}
