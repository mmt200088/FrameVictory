#pragma once
#include<iostream>
#include "Goods.h"
using namespace std;
//ʳ��
class Food :
    public Goods
{
public:
    Food(string name, int num, int weight) :Goods("ʳ��", name, num, weight) {}

};

