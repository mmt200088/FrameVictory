#include "Decorator.h"
#include "AnimalSportsDrinks.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void AnimalSportsDrinks::ShowIngredients()
{
	cout << "���˶����Ͻ��������³ɷ֣�" << endl;
	for (int i = 0; i < num; i++) 
	{
		cout << Ingredients[i] << endl;
		Sleep(1 * 1000);
	}
}

void AnimalSportsDrinks::MakeSportsDrinks()
{
	cout << "�����˶������С���" << endl;
	Sleep(2 * 1000);
	for (int i = 0; i < num; i++)
	{
		cout << "���" << Ingredients[i] << "�С���" << endl;
		Sleep(2 * 1000);
	}
	cout << "�˶����ϵ�����ɣ�����" << endl;
	Sleep(2 * 1000);
}
