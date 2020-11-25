#pragma once
#include "SportsDrinksDecorator.h"
//添加葡萄糖继承自抽象类运动饮料装饰器
class GLC :public SportsDrinksDecorator
{
public:
	void AddIngredients();
};


