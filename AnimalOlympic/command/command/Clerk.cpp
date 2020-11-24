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
	Sleep(1500);
	cout << "Clerk��SetOrder�����Ӷ���-----������ţ�" << temp->order_num << "  ������Ʒ��" << temp->name << endl;
}

void Clerk::UndoOrder(int num)
{
	vector<Order*>::iterator it;
	for (it = m_commandList.begin(); it != m_commandList.end(); ++it)
	{
		if ((*it)->order_num == num) {
			Sleep(1500);
			cout << "Clerk��UndoOrder�������������Ϊ" << num << "�Ķ���" << endl;
			it = m_commandList.erase(it);
			break;
		}

	}

}
//����Ա֪ͨ��̨�ĵ�Ա��ִ�ж���
void Clerk::Notify()
{
	cout << "Clerk��Notify������֪ͨ��̨��Աִ�ж���������������" << endl;
	Sleep(1000);
	vector<Order*>::iterator it;
	for (it = m_commandList.begin(); it != m_commandList.end(); ++it)
	{
		(*it)->ExecuteOrder();
	}
}