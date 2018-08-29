#ifndef IGAMEOBJECT_H
#define IGAMEOBJECT_H
#include "world.h"
#include "renderer.h"

class IGameObject
{
public:
    virtual ~IGameObject() {}
    virtual void update(World& world) = 0;
    virtual void render(Renderer& renderer) = 0;

    int getDx() const;
    void setDx(int dx);

    int getDy() const;
    void setDy(int dy);

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

private:
    int m_dx = 0;
    int m_dy = 0;
    int m_x = 0;
    int m_y = 0;
};

int IGameObject::getDx() const
{
return m_dx;
}

void IGameObject::setDx(int dx)
{
m_dx = dx;
}

int IGameObject::getDy() const
{
return m_dy;
}

void IGameObject::setDy(int dy)
{
m_dy = dy;
}

int IGameObject::getX() const
{
return m_x;
}

void IGameObject::setX(int x)
{
m_x = x;
}

int IGameObject::getY() const
{
return m_y;
}

void IGameObject::setY(int y)
{
m_y = y;
}
#endif // IGAMEOBJECT_H
