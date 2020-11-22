#include "GLC.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void GLC::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "ÆÏÌÑÌÇ";
	Drinks.num += 1;
	cout << "ÒÑÑ¡ÔñÌí¼ÓÆÏÌÑÌÇ£¡£¡£¡" << endl;
	Sleep(2 * 1000);
}