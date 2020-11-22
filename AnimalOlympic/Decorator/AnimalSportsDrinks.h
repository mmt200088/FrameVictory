#pragma once
#include "Decorator.h"
#include "SportsDrinks.h"
#include <string>

using namespace std;

//动物运动会的运动饮料继承自抽象类运动饮料
class AnimalSportsDrinks :public SportsDrinks
{
public:
	string Ingredients[100] = { "" };//成分表
	int num = 0;//成分种数
	void ShowIngredients();//查看运动饮料的成分表
	void MakeSportsDrinks();//按照成分表调配运动饮料
	AnimalSportsDrinks() 
	{
		//初始化运动饮料，仅含有水
		Ingredients[0] = "水";
		num = 1;
	}
};

