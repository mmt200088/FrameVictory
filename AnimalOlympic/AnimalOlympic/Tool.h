#pragma once
#include "Goods.h"
//道具
class Tool :
    public Goods
{
public:
    Tool(string name, int num, int weight) :Goods("道具", name, num, weight) {}
};

