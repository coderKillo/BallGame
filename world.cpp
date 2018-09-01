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

std::vector<IGameObject *> World::getVisableObjects()
{
    std::vector<IGameObject*> vec{};

    for(const auto &object : m_objects)
    {
        if(object->getVisability())
        {
            vec.push_back(object);
        }
    }

    return std::move(vec);
}

