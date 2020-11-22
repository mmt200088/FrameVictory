#include "Decorator.h"
#include "AnimalSportsDrinks.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void AnimalSportsDrinks::ShowIngredients()
{
	cout << "该运动饮料将含有以下成分：" << endl;
	for (int i = 0; i < num; i++) 
	{
		cout << Ingredients[i] << endl;
		Sleep(1 * 1000);
	}
}

void AnimalSportsDrinks::MakeSportsDrinks()
{
	cout << "调配运动饮料中……" << endl;
	Sleep(2 * 1000);
	for (int i = 0; i < num; i++)
	{
		cout << "添加" << Ingredients[i] << "中……" << endl;
		Sleep(2 * 1000);
	}
	cout << "运动饮料调配完成！！！" << endl;
	Sleep(2 * 1000);
}
