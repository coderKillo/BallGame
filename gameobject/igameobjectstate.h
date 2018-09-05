#ifndef IGAMEOBJECTSTATE_H
#define IGAMEOBJECTSTATE_H

#include <QImage>

class IGameObjectState
{
public :
    virtual ~IGameObjectState(){}
    //put all Func that depend on State
    virtual QImage* getTexture() = 0;
};

#endif // IGAMEOBJECTSTATE_H
