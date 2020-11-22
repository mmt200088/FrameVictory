#pragma once
#include <iostream>
#include <vector>
#include "order.h"
#include "ShopAssitant.h"
#include <string>
using namespace std;

//够买饮料的具体命令
class BandageCmd : public Order
{
public:
	BandageCmd(ShopAssitant* temp, int num) : Order(temp, num)
	{
		name = "绷带";
	}
	virtual void ExecuteOrder()
	{
		receiver->BuyBandage(order_num);
	}
};