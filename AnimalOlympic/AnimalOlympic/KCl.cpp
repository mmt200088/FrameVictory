#include "KCl.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void KCl::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "氯化钾";
	Drinks.num += 1;
	cout << "已选择添加氯化钾！！！" << endl;
	Sleep(2 * 1000);
}