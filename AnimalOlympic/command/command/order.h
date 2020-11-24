#pragma once
#include <iostream>
#include <vector>
 #include <string>
#include "ShopAssitant.h"
using namespace std;
class Order
{
public:
	Order(ShopAssitant* temp,int num) {
		receiver = temp;
		order_num = num;
	}
	int order_num;//订单编号 每个订单只有唯一的一个编号
	string name;
	virtual void ExecuteOrder() = 0;

protected:
	ShopAssitant* receiver;
};