#ifndef WORLD_H
#define WORLD_H
#include <vector>
#include <memory>
#include "gameobject/igameobject.h"
#include "iworld.h"

struct Border
{
    enum BorderEnum
    {
        top = 0,
        bottom,
        right,
        left
    };
    Border(QRectF rect, qreal width)
    {
        top = new QGraphicsLineItem(QLineF(rect.topLeft(), rect.topRight()));
        bottom = new QGraphicsLineItem(QLineF(rect.bottomLeft(), rect.bottomRight()));
        right = new QGraphicsLineItem(QLineF(rect.topRight(), rect.bottomRight()));
        left = new QGraphicsLineItem(QLineF(rect.topLeft(), rect.bottomLeft()));

        auto pen = QPen(QBrush(Qt::black), width);
        top->setPen(pen);
        bottom->setPen(pen);
        right->setPen(pen);
        left->setPen(pen);
    }
    QGraphicsLineItem* top;
    QGraphicsLineItem* bottom;
    QGraphicsLineItem* right;
    QGraphicsLineItem* left;
};

class World: public IWorld
{
public:
    World();
    ~World();
    void updateGameObjects();

    QGraphicsItem* collideWithBorder(QGraphicsItem* object);

    std::vector<IGameObject*> getDirtyObjects();
    void setBorder(Border* border);

private:
    std::vector<IGameObject*> m_objects;
    Border* m_border = nullptr;
};

#endif // WORLD_H
