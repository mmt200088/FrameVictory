#pragma once
#include <iostream>
#include <vector>
#include "order.h"
 #include <string>
#include "ShopAssitant.h"
using namespace std;

//够买零食的具体命令
class FoodCmd : public Order
{
public:
	FoodCmd(ShopAssitant* temp, int num) : Order(temp, num)
	{
		name = "零食";
	}
	virtual void ExecuteOrder()
	{
		receiver->BuyFood(order_num);
	}
};
