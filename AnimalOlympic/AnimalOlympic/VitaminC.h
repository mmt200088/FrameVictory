#pragma once
#include "SportsDrinksDecorator.h"
//添加维生素C继承自抽象类运动饮料装饰器
class VitaminC :public SportsDrinksDecorator
{
public:
	void AddIngredients();
};


