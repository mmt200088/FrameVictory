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
		cout <<"正在处理"<<num<< "号订单---购买物品：饮料" << endl;
		Sleep(2000);
	}
	void BuyFood(int num)
	{
		cout << "正在处理" << num << "号订单---购买物品：零食" << endl;
		Sleep(2000);
	}
	void BuyBandage(int num)
	{
		cout << "正在处理" << num << "号订单---购买物品：绷带" << endl;
		Sleep(2000);
	}

};
