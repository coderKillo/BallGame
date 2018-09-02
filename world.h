#ifndef WORLD_H
#define WORLD_H
#include <vector>
#include <memory>
#include "igameobject.h"
#include "iworld.h"

class World: public IWorld
{
public:
    World();
    void updateGameObjects();

    bool checkBorderCollision(QGraphicsPixmapItem* object);

    std::vector<IGameObject*> getDirtyObjects();
    void setBorder(QGraphicsRectItem* border);

private:
    std::vector<IGameObject*> m_objects;
    QGraphicsRectItem* m_border = nullptr;
};

#endif // WORLD_H
