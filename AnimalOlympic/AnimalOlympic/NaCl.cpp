#include "NaCl.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void NaCl::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "�Ȼ���";
	Drinks.num += 1;
	cout << "��ѡ������Ȼ��ƣ�����" << endl;
	Sleep(2 * 1000);
}