#ifndef NULLINPUTCOMPONENT_H
#define NULLINPUTCOMPONENT_H
#include "inputcomponent.h"

class NullInputComponent: public InputComponent
{
public:
    virtual void update(IGameObject& object) override{}
};

#endif // NULLINPUTCOMPONENT_H
