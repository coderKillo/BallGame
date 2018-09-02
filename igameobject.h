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

    qreal getDx() const{
        return m_dx;
        }
    void setDx(qreal dx){
        m_dx = dx;
        }

    qreal getDy() const{
        return m_dy;
        }

    void setDy(qreal dy){
        m_dy = dy;
        }

    qreal getX() const{
        return m_x;
        }
    void setX(qreal x){
        m_x = x;
        }

    qreal getY() const{
        return m_y;
        }
    void setY(qreal y){
        m_y = y;
        }

    bool getIsDirty() const{
        return m_isDirty;
    }

    void setIsDirty(bool v){
        m_isDirty = v;
    }

protected:
    qreal m_dx = 0;
    qreal m_dy = 0;
    qreal m_x = 0;
    qreal m_y = 0;
    bool m_isDirty = true;
};
#endif // IGAMEOBJECT_H
