#pragma once
#include "Operation.h"
//��������������visitor
class Reduce :
    public Operation
{
public:
    Reduce() {}
    virtual void visit(Goods* goods);
};

