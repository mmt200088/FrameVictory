#include "SUC.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void SUC::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "’·Ã«";
	Drinks.num += 1;
	cout << "“——°‘ÒÃÌº”’·Ã«£°£°£°" << endl;
	Sleep(2 * 1000);
}
