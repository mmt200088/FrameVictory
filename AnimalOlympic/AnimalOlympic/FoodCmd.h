#pragma once
#include <iostream>
#include <vector>
#include "order.h"
 #include <string>
#include "ShopAssitant.h"
using namespace std;

//������ʳ�ľ�������
class FoodCmd : public Order
{
public:
	FoodCmd(ShopAssitant* temp, int num) : Order(temp, num)
	{
		name = "��ʳ";
	}
	virtual void ExecuteOrder()
	{
		receiver->BuyFood(order_num);
	}
};
