#pragma once
#include <iostream>
#include <vector>
#include<Windows.h>
using namespace std;
class ShopAssitant
{
public:
	void BuyDrink(int num)
	{
		cout <<"���ڴ���"<<num<< "�Ŷ���---������Ʒ������" << endl;
		Sleep(2000);
	}
	void BuyFood(int num)
	{
		cout << "���ڴ���" << num << "�Ŷ���---������Ʒ����ʳ" << endl;
		Sleep(2000);
	}
	void BuyBandage(int num)
	{
		cout << "���ڴ���" << num << "�Ŷ���---������Ʒ������" << endl;
		Sleep(2000);
	}

};
