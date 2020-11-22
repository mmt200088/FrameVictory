#include "VitaminB6.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void VitaminB6::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "维生素B6";
	Drinks.num += 1;
	cout << "已选择添加维生素B6！！！" << endl;
	Sleep(2 * 1000);
}