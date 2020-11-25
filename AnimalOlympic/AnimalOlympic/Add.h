#pragma once
#include "Operation.h"
//添加物资数量的visitor
class Add :
    public Operation
{
public:
    Add() {}
    virtual void visit(Goods* goods);
};

