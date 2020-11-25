#include "NaCl.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void NaCl::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "氯化钠";
	Drinks.num += 1;
	cout << "已选择添加氯化钠！！！" << endl;
	Sleep(2 * 1000);
}