#pragma once
#include "Operation.h"
//�������������visitor
class Add :
    public Operation
{
public:
    Add() {}
    virtual void visit(Goods* goods);
};

