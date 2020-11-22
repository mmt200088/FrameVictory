#pragma once
#include "Operation.h"
#include"Porter.h"
//展示物资信息的visitor
class List :
    public Operation
{
public:
    List() {}
    virtual void visit(Goods* goods);
    void visit(Porter* porter);
};

