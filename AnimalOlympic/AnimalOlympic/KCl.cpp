#include "KCl.h"
#include "Decorator.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void KCl::AddIngredients()
{
	Drinks.Ingredients[Drinks.num] = "�Ȼ���";
	Drinks.num += 1;
	cout << "��ѡ������Ȼ��أ�����" << endl;
	Sleep(2 * 1000);
}