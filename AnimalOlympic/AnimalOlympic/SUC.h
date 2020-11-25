#pragma once
#include "SportsDrinksDecorator.h"
//添加蔗糖继承自抽象类运动饮料装饰器
class SUC :public SportsDrinksDecorator 
{
public:
	void AddIngredients();
};

