#include "gameobject.h"

GameObject::GameObject(InputComponent *input, PhysicsComponent *physics, GraphicsComponent *graphics)
    :m_physics(physics)
    ,m_graphics(graphics)
    ,m_input(input)
{

}

void GameObject::update(World &world)
{
    m_input->update(*this);
    m_physics->update(*this, world);
}

void GameObject::render(Renderer &renderer)
{
    m_graphics->update(*this, renderer);
}