#pragma once
#include <iostream>
#include <vector>
#include "order.h"
#include "ShopAssitant.h"
#include <string>
using namespace std;

//够买饮料的具体命令
class PosterCmd : public Order
{
public:
	PosterCmd(ShopAssitant* temp, int num) : Order(temp, num) //构造函数
	{
		name = "横幅海报";
	}
	virtual void ExecuteOrder() //执行具体命令
	{
		receiver->BuyBandage(order_num);
	}
};