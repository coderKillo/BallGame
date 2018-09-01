#ifndef IGAMEOBJECT_H
#define IGAMEOBJECT_H
#include "iworld.h"
#include "renderer.h"

class IGameObject
{
public:
    virtual ~IGameObject() {}
    virtual void update(IWorld& world) = 0;
    virtual void render(Renderer& renderer) = 0;

    int getDx() const{
        return m_dx;
        }
    void setDx(int dx){
        m_dx = dx;
        }

    int getDy() const{
        return m_dy;
        }

    void setDy(int dy){
        m_dy = dy;
        }

    int getX() const{
        return m_x;
        }
    void setX(int x){
        m_x = x;
        }

    int getY() const{
        return m_y;
        }
    void setY(int y){
        m_y = y;
        }

    bool getVisability() const{
        return m_isVisable;
    }

    void setVisability(bool v){
        m_isVisable = v;
    }

protected:
    int m_dx = 0;
    int m_dy = 0;
    int m_x = 0;
    int m_y = 0;
    bool m_isVisable = true;
};
#endif // IGAMEOBJECT_H
