#pragma once
#include <iostream>
#include <vector>
#include "order.h"
#include "ShopAssitant.h"
using namespace std;

//�������ϵľ�������
class DrinkCmd : public Order
{
public:
	
	DrinkCmd(ShopAssitant* temp,int num) : Order(temp,num) 
	{
		name = "����";
	}
	virtual void ExecuteOrder()
	{
		receiver->BuyDrink(order_num);
	}
 
};