#pragma once
#include <iostream>
#include <vector>
#include "order.h"
#include "ShopAssitant.h"
#include <string>
using namespace std;

//�������ϵľ�������
class PosterCmd : public Order
{
public:
	PosterCmd(ShopAssitant* temp, int num) : Order(temp, num) //���캯��
	{
		name = "�������";
	}
	virtual void ExecuteOrder() //ִ�о�������
	{
		receiver->BuyBandage(order_num);
	}
};