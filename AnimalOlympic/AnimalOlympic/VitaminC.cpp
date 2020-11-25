#include "VitaminC.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void VitaminC::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "维生素C";
	Drinks.num += 1;
	cout << "已选择添加维生素C！！！" << endl;
	Sleep(2 * 1000);
}