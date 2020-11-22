#pragma once
#include "SportsDrinksDecorator.h"
//添加氯化钠继承自抽象类运动饮料装饰器
class NaCl :public SportsDrinksDecorator
{
public:
	void AddIngredients();
};


