#include "SUC.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void SUC::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "����";
	Drinks.num += 1;
	cout << "��ѡ��������ǣ�����" << endl;
	Sleep(2 * 1000);
}
