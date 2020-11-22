#pragma once

#include<iostream>
#include<string>
#include<map>
#include"Dish.h"
#include"Menu.h"
#include"Operations.h"
#include<Windows.h>

using namespace std;

/* ������ģʽ������������ѧϰ����ԭ�����﷨�������̣����þ��ǽ�һ����
 * ���鰴��һ�����﷨������н��ͣ�����ʵ��һ����������һ�����Ե�ת����
 * ���˴�ͳ�ı�����֮�⣬������ģʽ������ʵ�ּ�����������������ʽ����
 * ��õ������
 *
 * ������ģʽ����Ŀ��ʹ�ý��٣��������ڿ�ܺ͹�����Ŀ�����
 *
 * ���������Ƿ��������С����������ÿ��������������Թ���С�������õ����ܱ�����
 * ����ʹ�ý�����ģʽʵ�ֹ�����Ա���ݹ˿͵�����ת���ɶ�Ӧ�ĸ����
 *
 * ÿ��������ã�
 * Dish:��¼�˿������С�������ڲ˵��в��Ҷ�Ӧ��
 * Menu:�˵���ʹ��map��¼С�����Ͷ�Ӧ��
 * Operations:�����࣬�Թ˿���Ҫ����Ʒת���ɽ����
 * Expression:������������������������Dish��Operationsʵ��
 *
 * 1853806 Wu Jiaqi
 */

class Interpreter {
public:
	//���Դ���
	void test() {
		cout << "This is snack area." << endl;
		cout << "It is design with interpreter! " << endl;
		cout << "Please refer to the annotations and source code for the specific implemetation." << endl << endl;
		cout << "/* ������ģʽ������������ѧϰ����ԭ�����﷨�������̣����þ��ǽ�һ����" << endl;
		cout << " * ���鰴��һ�����﷨������н��ͣ�����ʵ��һ����������һ�����Ե�ת����" << endl;
		cout << " * ���˴�ͳ�ı�����֮�⣬������ģʽ������ʵ�ּ�����������������ʽ����" << endl;
		cout << " * ��õ������" << endl;
		cout << " *" << endl;
		cout << " * ������ģʽ����Ŀ��ʹ�ý��٣��������ڿ�ܺ͹�����Ŀ�����" << endl;
		cout << " *" << endl;
		cout << " * ���������Ƿ��������С����������ÿ��������������Թ���С�������õ����ܱ�����" << endl;
		cout << " * ����ʹ�ý�����ģʽʵ�ֹ�����Ա���ݹ˿͵�����ת���ɶ�Ӧ�ĸ����" << endl;
		cout << " *" << endl;
		cout << " * ÿ��������ã�" << endl;
		cout << " * Dish:��¼�˿������С�������ڲ˵��в��Ҷ�Ӧ��" << endl;
		cout << " * Menu:�˵���ʹ��map��¼С�����Ͷ�Ӧ��" << endl;
		cout << " * Operations:�����࣬�Թ˿���Ҫ����Ʒת���ɽ����" << endl;
		cout << " * Expression:������������������������Dish��Operationsʵ��" << endl;
		cout << " *" << endl;
		cout << " * 1853806 Wu Jiaqi" << endl;
		cout << " */" << endl;
		cout << "*************************************************************************************" << endl << endl << endl;
		Sleep(10000);
		system("cls");

		//����������ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		cout << "# Background:" << endl;
		cout << "# I design this scene with interpreter because the waitress will" << endl;
		cout << "# calculate the total money when a customer tells her what he wants." << endl;
		cout << "# And this scene is just like a compile -- change one language into " << endl;
		cout << "# another language.So it's suitable for interpreter." << endl << endl;
		Sleep(6000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Waitress:Welcome to the snack area! You can order your favorite snack here!" << endl;
		Sleep(1000);
		cout << "Waitress:I'm your sweety mouse ���� NaNa." << endl;
		Sleep(1000);

		//�����˵���С��ʵ��
		Menu* menu=new Menu();
		Dish* popcorn = new Dish("Popcorn");
		Dish* cola = new Dish("Cocacola");
		Dish* chips = new Dish("Potato Chips");
		
		//�˵��������
		menu->addDishNum("Popcorn", 10);
		menu->addDishNum("Cocacola", 5);
		menu->addDishNum("Potato Chips", 8);
		cout << "Waitress:Here is the menu." << endl << endl;
		Sleep(1000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "*********************************" << endl;
		cout << "* Popcorn                   $10 *" << endl;
		cout << "* Cocacola                  $5  *" << endl;
		cout << "* Potato Chips              $8  *" << endl;
		cout << "*********************************" << endl << endl;
		Sleep(5000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Waitress:What do you want,sir?(1:Popcorn, 2:Cocacola, 3:Potato Chips)" << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Maybe I want more than 1 item." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	ss:cout << "Waitress:OK,you can buy at most 3 items in one time, how many items do you want to buy��" << endl;
		
		//��ҽ���ѡ��ѡ��������
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "(System prompt)Please make your choice:(1 or 2 or 3)";
	    string s;
		cin >> s;
		cout << endl;

		//һ����Ʒ
		if (s == "1") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Maybe I'd better buy one item." << endl << endl;
			Sleep(3000);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		ll: cout << "Waitress:OK,what do you want,sir?(1:Popcorn, 2:Cocacola, 3:Potato Chips)" << endl;
			
			//���ѡ��С�����
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "(System prompt)Please make your choice:(1 or 2 or 3)";
			string t;
			cin >> t;
			cout << endl;
			
			if (t == "1") {
				Operations* order = new Operations(popcorn);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//���
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) << endl << endl;
				delete order;
			}
			
			else if (t == "2") {
				Operations* order = new Operations(cola);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//���
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) << endl << endl;
				delete order;
			}

			else if (t == "3") {
				Operations* order = new Operations(chips);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//���
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) << endl << endl;
				delete order;
			}

			//�쳣����
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout << "Waitress:Sorry,we don't have other snacks." << endl;
				Sleep(3000);

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				cout << "Customer(you):So, I think I'll make another choice " << endl << endl;
				goto ll;
			}
		}

		//������Ʒ
		else if (s == "2") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Maybe I will buy two items." << endl << endl;
			Sleep(3000);

			//�ṩ�Ż��ײ�
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Waitress:OK,I'd like to recommend you two set menus." << endl;
			Sleep(1000);
			cout << "Waitress:One is our classic set menu����Popcorn and Cocacola, the other is a new set menu����Potato Chips and Cocacola" << endl;
			Sleep(1000);
			cout << "Waitress:Both of them can enjoy 10% discount." << endl << endl;
			Sleep(3000);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):That's fun! I will choose one." << endl;
			Sleep(3000);
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		tt:cout << "Waitress:Which one would you like, sir?(1:classic set menu, 2:new set menu)" << endl;
			
			//ѡ���ײ�
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "(System prompt)Please make your choice:(1 or 2)";
			string t;
			cin >> t;
			cout << endl;
			
			if (t == "1") {
				Operations* order = new Operations(popcorn, cola);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//���
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) * 0.9 << endl << endl;
				delete order;
			}
			
			else if (t == "2") {
				Operations* order = new Operations(chips, cola);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//���
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) * 0.9 << endl << endl;
				delete order;
			}

			//�쳣����
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout << "Waitress:Sorry,sir.I didn't hear you clearly." << endl;
				Sleep(1000);
				goto tt;
			}
		}

		//������Ʒ
		else if (s == "3") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Maybe I will buy three items." << endl << endl;
			Sleep(3000);

			//�ṩ�Ż��ײ�
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Waitress:OK, I'd like to recommend you to buy all 3 items." << endl;
			Sleep(1000);
			cout << "Waitress:And we can give you 20% discount." << endl << endl;
			Sleep(3000);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Sure, please give me a piece." << endl << endl;
			
			//���
			Operations* order = new Operations(chips, popcorn, cola);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) * 0.8 << endl << endl;
			delete order;
		}

		//�쳣����
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Waitress:Sorry,I can't understand what you say." << endl;
			Sleep(1000);
			goto ss;
		}

		Sleep(3000);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Here is the money." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "(Check the money)" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Waitress:OK,please wait for a while." << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        cout << "(Preparing)" << endl;
		Sleep(5000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Waitress:Here is your meal. Hope you to enjoy." << endl << endl;
		Sleep(1000);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Thank you!" << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "Second scene is over." << endl;
		cout << "-------------------------------------------" << endl;
		Sleep(3000);
		system("cls");
	}
};