#ifndef BALLGRAPHICSCOMPONENT_H
#define BALLGRAPHICSCOMPONENT_H
#include "../graphicscomponent.h"
#include <memory>

class BallGraphicsComponent: public GraphicsComponent
{
public:
    BallGraphicsComponent();
    virtual void update(IGameObject& object, Renderer& renderer) override;
    virtual void paint(IGameObject &object, QPainter *painter) override;
private:
    QPixmap m_pixmap;
    bool m_isDrawn = false;
};

#endif // BALLGRAPHICSCOMPONENT_H
