#pragma once
class SportsDrinks
{
public:
	//所有运动饮料都应能查看成分表，并按照成分表进行调配
	virtual void ShowIngredients() = 0;//查看运动饮料的成分表
	virtual void MakeSportsDrinks() = 0;//按照成分表调配运动饮料
};
