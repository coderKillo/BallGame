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

private:
    std::vector<IGameObject*> m_objects;
};

#endif // WORLD_H
