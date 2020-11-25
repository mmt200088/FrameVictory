#pragma once
#include <iostream>
#include <vector>
#include "order.h"
#include<Windows.h>
using namespace std;
// 收银员类
class Clerk
{
public:
	Clerk() {
		order_sum = 0;
	}
	
	void SetOrder(Order* temp);//下订单操作
	
	void UndoOrder(int num);//撤回订单操作
 
	
	void Notify();// 通知执行
protected:
	vector<Order*> m_commandList;
	int order_sum;//订单总数
};
 

