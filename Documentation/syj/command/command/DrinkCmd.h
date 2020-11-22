#pragma once
#include <iostream>
#include <vector>
#include "order.h"
#include "ShopAssitant.h"
using namespace std;

//够买饮料的具体命令
class DrinkCmd : public Order
{
public:
	
	DrinkCmd(ShopAssitant* temp,int num) : Order(temp,num) 
	{
		name = "饮料";
	}
	virtual void ExecuteOrder()
	{
		receiver->BuyDrink(order_num);
	}
 
};