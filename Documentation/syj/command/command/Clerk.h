#pragma once
#include <iostream>
#include <vector>
#include "order.h"
#include<Windows.h>
using namespace std;
// ����Ա��
class Clerk
{
public:
	Clerk() {
		order_sum = 0;
	}
	//�¶�������
	void SetOrder(Order* temp);
	//���ض�������
	void UndoOrder(int num);
 
	// ִ֪ͨ��
	void Notify();
protected:
	vector<Order*> m_commandList;
	int order_sum;//��������
};
 
