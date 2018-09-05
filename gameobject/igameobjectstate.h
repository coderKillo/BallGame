#ifndef IGAMEOBJECTSTATE_H
#define IGAMEOBJECTSTATE_H

class IGameObjectState
{
public :
    virtual ~IGameObjectState(){}
    //put all Func that depend on State
    virtual getTexture() = 0;
};

#endif // IGAMEOBJECTSTATE_H
