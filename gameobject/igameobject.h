#ifndef IGAMEOBJECT_H
#define IGAMEOBJECT_H

#include <QGraphicsItem>
#include <memory>
#include "iworld.h"
#include "igameobjectstate.h"
#include "renderer.h"

class IGameObject: public QGraphicsItem
{
public:
    virtual ~IGameObject() {}
    virtual void update(IWorld& world) = 0;
    virtual void render(Renderer& renderer) = 0;

    IGameObjectState* getState() const
    {
        return currentState.get();
    }

    void setState(std::unique_ptr<IGameObjectState> &&state)
    {
        if(state)
        {
            currentState = std::move(state);
        }
    }

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

    bool getIsDirty() const{
        return m_isDirty;
    }

    void setIsDirty(bool v){
        m_isDirty = v;
    }

protected:
    std::unique_ptr<IGameObjectState> currentState;
    qreal m_dx = 0;
    qreal m_dy = 0;
    bool m_isDirty = true;
};
#endif // IGAMEOBJECT_H
