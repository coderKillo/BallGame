#include "world.h"
#include "gameobject/object/ball.h"

typedef std::unique_ptr<IGameObject> IGameObjectPtr;
typedef std::vector<IGameObjectPtr> IGameObjectList;

World::World()
{
    m_objects.push_back(new Ball);
}

World::~World()
{

    delete m_border;
}

void World::updateGameObjects()
{
    for(const auto &object : m_objects)
    {
        object->update(*this);
    }
}

QGraphicsItem* World::collideWithBorder(QGraphicsItem *object)
{
    if(object->collidesWithItem(m_border->top))
    {
        return m_border->top;
    }
    if(object->collidesWithItem(m_border->bottom))
    {
        return m_border->bottom;
    }
    if(object->collidesWithItem(m_border->right))
    {
        return m_border->right;
    }
    if(object->collidesWithItem(m_border->left))
    {
        return m_border->left;
    }
    return nullptr;
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

void World::setBorder(Border *border)
{
    m_border = border;
}

