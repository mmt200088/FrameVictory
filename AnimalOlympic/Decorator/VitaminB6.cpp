#include "VitaminB6.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void VitaminB6::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "ά����B6";
	Drinks.num += 1;
	cout << "��ѡ�����ά����B6������" << endl;
	Sleep(2 * 1000);
}