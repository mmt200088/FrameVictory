#pragma once
#include "Operation.h"
#include"Porter.h"
//չʾ������Ϣ��visitor
class List :
    public Operation
{
public:
    List() {}
    virtual void visit(Goods* goods);
    void visit(Porter* porter);
};

