#pragma once
#include <iostream>
#include <vector>
#include "order.h"
#include "ShopAssitant.h"
#include <string>
using namespace std;

//�������ϵľ�������
class BandageCmd : public Order
{
public:
	BandageCmd(ShopAssitant* temp, int num) : Order(temp, num)
	{
		name = "����";
	}
	virtual void ExecuteOrder()
	{
		receiver->BuyBandage(order_num);
	}
};