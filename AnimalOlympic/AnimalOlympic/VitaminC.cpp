#include "VitaminC.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void VitaminC::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "ά����C";
	Drinks.num += 1;
	cout << "��ѡ�����ά����C������" << endl;
	Sleep(2 * 1000);
}