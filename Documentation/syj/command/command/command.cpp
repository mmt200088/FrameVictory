#include <iostream>
#include <vector>
#include "order.h"
#include "BandageCmd.h"
#include "Clerk.h"
#include "DrinkCmd.h"
#include "FoodCmd.h"
#include "ShopAssitant.h"
#include <Windows.h>
#include "command.h"
using namespace std;
 
 /**Commandģʽ
    ʹ�ó������˶���С����
    ʵ��˵����һ�����ĸ���ɫ�������߽�ɫ��Receiver���������ɫ��Command�������������ɫ��ConcreteCommand����
	         �����߽�ɫ��Invoker�������߽�ɫΪС�����ĵ�Ա��ShopAssistant�����������ս��ܲ�����С����Ķ�
	         ���������ɫΪ�����࣬������������Ƕ�����Order�����������Զ��������Ľӿڣ����������ɫΪ����Ķ�
	         ����ConcreteOrder����������������󻯣��Ǿ���Ķ������������־���Ĳ����������߽�ɫΪ����Ա
		    ��Clerk�������ڽ���С�����ǵĶ��������ҵ��þ�������
**/


//���Ժ���
 
void command::test()
{
	cout << "ʵ��ģʽ��Command ʵ�ֳ������˶���С����" << endl;
	Sleep(2000);
	cout << "-----------��ӭ�����˶���С����-------------" << endl;
	cout << "        ��Ʒ������   ��ʳ    ����  " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "-----------�����������Ա���µ�-------------" << endl;
	cout << "--------------------------------------------" << endl;
	Sleep(1000);
	// �������С���̵ĵ�Ա
	ShopAssitant* assitant = new ShopAssitant();
	vector<Order*> commandList;
	int order_quantity = 0;//��ʾһ���յ��Ķ������� ���Ա�ʾ�������
	order_quantity++;
	Order* order1 = new DrinkCmd(assitant, order_quantity); //������������󶨽����ߣ������������϶�����ָ�����Ա
	order_quantity++;
	Order* order2 = new FoodCmd(assitant, order_quantity);//������������󶨽����ߣ�����������ʳ������ָ�����Ա
	order_quantity++;
	Order* order3 = new BandageCmd(assitant, order_quantity);//������������󶨽����ߣ������������������ָ�����Ա
	Clerk* girl = new Clerk();
     
	//�µ� ������ӵ����������
	girl->SetOrder(order1);
	Sleep(1000);
	girl->SetOrder(order2);
	Sleep(1000);
    girl->SetOrder(order3);
	Sleep(1000);
	//�������� ���Գ���ָ��������ŵĶ���
	girl->UndoOrder(2);
	Sleep(1000);
	// ����Ա֪ͨ��̨��Ա������
	girl->Notify();
	system("pause");

}
