#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "igameobject.h"
#include "graphicscomponent.h"
#include "inputcomponent.h"
#include "physiccomponent.h"

class GameObject: public IGameObject
{
public:
    GameObject(InputComponent* input,
                              PhysicsComponent* physics,
                              GraphicsComponent* graphics);
    virtual ~GameObject() {}
    virtual void update(World& world) override;
    virtual void render(Renderer& renderer) override;
private:
    PhysicsComponent* m_physics = nullptr;
    GraphicsComponent* m_graphics = nullptr;
    InputComponent* m_input = nullptr;
};

#endif // GAMEOBJECT_H
