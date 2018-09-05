#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include "igameobject.h"
#include "component/graphicscomponent.h"
#include "component/inputcomponent.h"
#include "component/physiccomponent.h"

class GameObject: public IGameObject
{
public:
    GameObject(InputComponent* input,
                              PhysicsComponent* physics,
                              GraphicsComponent* graphics);
    ~GameObject();
    virtual void update(IWorld& world) override;
    virtual void render(Renderer& renderer) override;
protected:
    PhysicsComponent* m_physics = nullptr;
    GraphicsComponent* m_graphics = nullptr;
    InputComponent* m_input = nullptr;

    // QGraphicsItem interface
public:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif // GAMEOBJECT_H
