#include "gameobject.h"
#include <iostream>

GameObject::GameObject(InputComponent *input, PhysicsComponent *physics, GraphicsComponent *graphics)
    :m_physics(physics)
    ,m_graphics(graphics)
    ,m_input(input)
{

}

GameObject::~GameObject()
{
    delete m_input;
    delete m_physics;
    delete m_graphics;
}

void GameObject::update(IWorld &world)
{
    m_input->update(*this);
    m_physics->update(*this, world);
}

void GameObject::render(Renderer &renderer)
{
    m_graphics->update(*this, renderer);
}

QRectF GameObject::boundingRect() const
{
    return QRectF(-51, -51, 101, 101);
}

void GameObject::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    m_graphics->paint(*this, painter);
}
