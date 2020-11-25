#pragma once
#include "Goods.h"
//设备
class Equipment :
    public Goods
{
public:
    Equipment(string name, int num, int weight) :Goods("设备", name, num, weight) {}
};

