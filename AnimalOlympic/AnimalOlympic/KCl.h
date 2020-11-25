#pragma once
#include "SportsDrinksDecorator.h"
//添加氯化钾继承自抽象类运动饮料装饰器
class KCl :public SportsDrinksDecorator
{
public:
	void AddIngredients();
};


