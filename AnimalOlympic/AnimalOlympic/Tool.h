#pragma once
#include "Goods.h"
//����
class Tool :
    public Goods
{
public:
    Tool(string name, int num, int weight) :Goods("����", name, num, weight) {}
};

