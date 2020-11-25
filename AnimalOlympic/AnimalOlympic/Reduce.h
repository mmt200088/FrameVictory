#pragma once
#include "Operation.h"
//减少物资数量的visitor
class Reduce :
    public Operation
{
public:
    Reduce() {}
    virtual void visit(Goods* goods);
};

