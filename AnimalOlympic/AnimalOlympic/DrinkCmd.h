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
	
	DrinkCmd(ShopAssitant* temp,int num) : Order(temp,num)  //���캯��
	{
		name = "����";
	}
	virtual void ExecuteOrder()//ִ�о�������
	{
		receiver->BuyDrink(order_num);
	}
 
};