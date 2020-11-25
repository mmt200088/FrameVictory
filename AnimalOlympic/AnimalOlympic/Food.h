#pragma once
#include<iostream>
#include "Goods.h"
using namespace std;
//食物
class Food :
    public Goods
{
public:
    Food(string name, int num, int weight) :Goods("食物", name, num, weight) {}

};

