#pragma once
#include "Decorator.h"
#include "SportsDrinks.h"
#include <string>

using namespace std;

//�����˶�����˶����ϼ̳��Գ������˶�����
class AnimalSportsDrinks :public SportsDrinks
{
public:
	string Ingredients[100] = { "" };//�ɷֱ�
	int num = 0;//�ɷ�����
	void ShowIngredients();//�鿴�˶����ϵĳɷֱ�
	void MakeSportsDrinks();//���ճɷֱ�����˶�����
	AnimalSportsDrinks() 
	{
		//��ʼ���˶����ϣ�������ˮ
		Ingredients[0] = "ˮ";
		num = 1;
	}
};

