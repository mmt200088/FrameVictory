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
	int order_num;//������� ÿ������ֻ��Ψһ��һ�����
	string name;
	virtual void ExecuteOrder() = 0;

protected:
	ShopAssitant* receiver;
};