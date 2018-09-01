#include "world.h"
#include "ball.h"

typedef std::unique_ptr<IGameObject> IGameObjectPtr;
typedef std::vector<IGameObjectPtr> IGameObjectList;

World::World()
{
    m_objects.push_back(new Ball);
}

