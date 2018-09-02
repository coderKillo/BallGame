#include "ballgraphicscomponent.h"

BallGraphicsComponent::BallGraphicsComponent()
    :m_pixmap(QPixmap::fromImage(QImage(":/texture/Ball.png")))
{
    this->setPixmap(m_pixmap);
    this->setPos(100,100);
}

void BallGraphicsComponent::update(IGameObject &object, Renderer &renderer)
{
    if(!m_isDrawn)
    {
        renderer.addItem(this);
        m_isDrawn = true;
    }
}
