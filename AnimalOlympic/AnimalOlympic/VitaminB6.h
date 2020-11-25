#pragma once
#include "SportsDrinksDecorator.h"
//添加维生素B6继承自抽象类运动饮料装饰器
class VitaminB6 :public SportsDrinksDecorator
{
public:
	void AddIngredients();
};


