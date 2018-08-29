#ifndef INPUTCOMPONENT_H
#define INPUTCOMPONENT_H
#include "igameobject.h"

class InputComponent
{
public:
    virtual ~InputComponent();
    virtual void update(IGameObject& object) = 0;
};

#endif // INPUTCOMPONENT_H
