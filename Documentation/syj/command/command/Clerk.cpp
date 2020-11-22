#include <iostream>
#include <vector>
#include "order.h"
#include<Windows.h>
#include "Clerk.h"
using namespace std;
void Clerk::SetOrder(Order* temp)
{
	order_sum++;
	m_commandList.push_back(temp);
	cout << "增加订单-----订单编号：" << temp->order_num << "  购买物品：" << temp->name << endl;
}

void Clerk::UndoOrder(int num)
{
	vector<Order*>::iterator it;
	for (it = m_commandList.begin(); it != m_commandList.end(); ++it)
	{
		if ((*it)->order_num == num) {
			cout << "撤销订单编号为" << num << "的订单" << endl;
			it = m_commandList.erase(it);
			break;
		}

	}

}
//收银员通知后台的店员们执行订单
void Clerk::Notify()
{
	cout << "正在通知后台店员执行订单………………" << endl;
	Sleep(1000);
	vector<Order*>::iterator it;
	for (it = m_commandList.begin(); it != m_commandList.end(); ++it)
	{
		(*it)->ExecuteOrder();
	}
}