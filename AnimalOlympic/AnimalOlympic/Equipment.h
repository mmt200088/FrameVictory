#pragma once
#include "Goods.h"
//�豸
class Equipment :
    public Goods
{
public:
    Equipment(string name, int num, int weight) :Goods("�豸", name, num, weight) {}
};

