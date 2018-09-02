#include "world.h"
#include "ball.h"

typedef std::unique_ptr<IGameObject> IGameObjectPtr;
typedef std::vector<IGameObjectPtr> IGameObjectList;

World::World()
{
    m_objects.push_back(new Ball);
}

void World::updateGameObjects()
{
    for(const auto &object : m_objects)
    {
        object->update(*this);
    }
}

bool World::checkBorderCollision(QGraphicsPixmapItem *object)
{
    return false;
}

std::vector<IGameObject *> World::getDirtyObjects()
{
    std::vector<IGameObject*> vec{};

    for(const auto &object : m_objects)
    {
        if(object->getIsDirty())
        {
            vec.push_back(object);
        }
    }

    return std::move(vec);
}

void World::setBorder(QGraphicsRectItem *border)
{
    m_border = border;
}

