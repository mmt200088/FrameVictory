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
	BandageCmd(ShopAssitant* temp, int num) : Order(temp, num) //���캯��
	{
		name = "����";
	}
	virtual void ExecuteOrder() //ִ�о�������
	{
		receiver->BuyBandage(order_num);
	}
};