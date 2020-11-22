#pragma once
#include"Client.h"
#include<Windows.h>

/* �����ģʽ�����ڳ������иտ�ʼ�ȴ���������һ�����ʵ������������Ҫ�õ�
 * ĳ��ʵ��ʱ�����ط������룬����п���ʵ����ȡ������ʵ��������������٣�
 * ����Żض�����еȴ���һ�����롣�������Խ�ʡƵ������ʵ���Ŀ����������ڴ�
 * ��Ƭ����ʡ�ռ䡣
 *
 * �����ģʽ���������¼���������1.���ʵ��Ƶ��������2.ʵ�������̿����ϴ�
 * 3.ʵ����Ƶ�ʽϸߣ�4.����뽻����ʱ�����ޡ�
 *
 * ���������Ƿ�������ķ�װ�������ÿ�������������������˶����ǵķ�˿����
 * ����ʵ��Ƶ�����������ʹ�ö����ģʽ��
 *
 * ÿ��������ã�
 * FanCustome:��װʵ���࣬�����װ��š�
 * CustomeManager:��װ�����࣬ʹ��map������أ���¼��װʵ������Ӧ״̬����������黹ʱ�޸�״̬��
 * Client:��װʹ���࣬�ṩ���͹黹��װ�Ľӿ��Լ���ѯ��װ״̬�Ľӿڡ�
 *
 * 1853806 Wu Jiaqi
 */

class ObjectPool {
public:
	//���Դ���
	void test() {
		cout << "This is renting area." << endl;
		cout << "It is design with objectpool! " << endl;
		cout << "Please refer to the annotations and source code for the specific implemetation." << endl << endl;
		cout << "/* �����ģʽ�����ڳ������иտ�ʼ�ȴ���������һ�����ʵ������������Ҫ�õ�" << endl;
		cout << " * ĳ��ʵ��ʱ�����ط������룬����п���ʵ����ȡ������ʵ��������������٣�" << endl;
		cout << " * ����Żض�����еȴ���һ�����롣�������Խ�ʡƵ������ʵ���Ŀ����������ڴ�" << endl;
		cout << " * ��Ƭ����ʡ�ռ䡣" << endl;
		cout << " *" << endl;
		cout << " * �����ģʽ���������¼���������1.���ʵ��Ƶ��������2.ʵ�������̿����ϴ�" << endl;
		cout << " * 3.ʵ����Ƶ�ʽϸߣ�4.����뽻����ʱ�����ޡ�" << endl;
		cout << " *" << endl;
		cout << " * ���������Ƿ�������ķ�װ�������ÿ�������������������˶����ǵķ�˿����" << endl;
		cout << " * ����ʵ��Ƶ�����������ʹ�ö����ģʽ��" << endl;
		cout << " *" << endl;
		cout << " * ÿ��������ã�" << endl;
		cout << " * FanCustome:��װʵ���࣬�����װ��š�" << endl;
		cout << " * CustomeManager:��װ�����࣬ʹ��map������أ���¼��װʵ������Ӧ״̬����������黹ʱ�޸�״̬��" << endl;
		cout << " * Client:��װʹ���࣬�ṩ���͹黹��װ�Ľӿ��Լ���ѯ��װ״̬�Ľӿڡ�" << endl;
		cout << " *" << endl;
		cout << " * 1853806 Wu Jiaqi" << endl;
		cout << " */" << endl;
		cout << "*************************************************************************************" << endl << endl << endl;
		Sleep(10000);
		system("cls");

		//���±���
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		cout << "# Background:" << endl;
		cout << "# I design this scene with Objectpool because renting means that" << endl;
		cout << "# there is an upper limit of quantity.And each object can't be" << endl;
		cout << "# changed after constructed. And it also have two process -- rent" << endl;
		cout << "# and return.So it's suitable for objectpool." << endl << endl;
		Sleep(6000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Staff:Welcome to the renting area! You can rent your favorite costumes here!" << endl;
		Sleep(1000);
		cout << "Staff:I'm your faithful dog ���� LuLu." << endl;
		Sleep(1000);
		cout << "Staff:What can I do for you?" << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):I'd like to rent a costume, is there anyone available? " << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Staff:Let me check." << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "(Open the query system)" << endl << endl;
		Sleep(5000);
		cout << "(The system display)" << endl;

		//����ʹ����ʵ�������ýӿڡ�
		//������趨Ϊ��װȫ������������޸Ķ�����ж���״̬
		Client* client = new Client();
		for (int i = 0; i < 5; i++) {
			client->applyCustome();
		}

		//��ѯ����״̬
		client->show();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Staff:Sorry,all costumes have been rented. Please wait for a while." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):OK,I'll come back 30 minutes later." << endl << endl;
		Sleep(5000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "(30 minutes later)" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer:What's the situation now?" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Staff:Let me check." << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "(Open the query system)" << endl << endl;
		Sleep(5000);
		cout << "(The system display)" << endl;

		//�����趨��ʱ���п���ʵ��������Ҫִ��һ�λ��·�������
		client->popCustome();
		client->show();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Staff:You have come just at the right moment." << endl;
		Sleep(1000);
		cout << "Staff:There is one costume returned exactly." << endl;
		Sleep(1000);
		cout << "Staff:Let me register." << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "(Processing)" << endl << endl;
		
		//����н��·�����
		client->applyCustome();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Staff:Give you the costume.Return it as soon as you use up." << endl;
		Sleep(1000);
		cout << "Staff:Have a nice day." << endl << endl;
		Sleep(3000);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Thanks." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "Second scene is over." << endl;
		cout << "-------------------------------------------" << endl;
		Sleep(3000);
		system("cls");
		delete client;
	}
};