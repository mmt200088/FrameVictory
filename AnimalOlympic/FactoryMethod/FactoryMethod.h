#pragma once

#include<iostream>
#include<string>
#include"FootballTickets.h"
#include"FootballTicketsOffice.h"
#include"RunningTickets.h"
#include"RunTicketsOffice.h"
#include"SwimmingTickets.h"
#include"SwimTicketsOffice.h"
#include"Tickets.h"
#include"TicketsOffice.h"
#include<Windows.h>

using namespace std;

/* ����ģʽ�ֳ����⹹����ģʽ��ͨ�������Ʒ�����������Ʒ��һ�鹫���ӿڣ�
 * ��Ʒ���ฺ�����ɾ���ģ����в�ͬ���ԺͲ����Ķ��󡣶��幤������������
 * ������Ʒ�Ĺ����ӿڣ����������ฺ�𴴽�����Ĳ�Ʒ��
 *
 * ����ģʽ�ص���ǽ���Ʒ�����ʵ�����ӳٵ���������ȥʵ�֣�һ����������
 * ��������һ����Ʒ���ࡣ�����������²�Ʒʱ������չ��
 * 
 * ���������Ƿ����������Ʊ����ÿ��������������Թ����յı�����Ʊ��
 *
 * ÿ��������ã�
 * Tickets:������Ʊ������
 * FootballTickets:���������Ʊ�����ࣩ
 * RunningTickets:���ܱ�����Ʊ�����ࣩ
 * SwimmingTickets:��Ӿ������Ʊ�����ࣩ
 * TicketsOffice:��Ʊ�������������ࣩ
 * FootballTicketsOffice:���������Ʊ�������ࣩ
 * RunTicketsOffice:���ܱ�����Ʊ�������ࣩ
 * SwimTicketsOffice:��Ӿ������Ʊ�������ࣩ
 * 
 * 1853806 Wu Jiaqi
 */

class FactoryMethod {
public:
	//���Դ���
	void test() {
		cout << "This is tickets area." << endl;
		cout << "It is designed with factory method! " << endl;
		cout << "Please refer to the annotations and source code for the specific implemetation." << endl << endl;
		cout << "/* ����ģʽ�ֳ����⹹����ģʽ��ͨ�������Ʒ�����������Ʒ��һ�鹫���ӿڣ�" << endl;
		cout << " * ��Ʒ���ฺ�����ɾ���ģ����в�ͬ���ԺͲ����Ķ��󡣶��幤������������" << endl;
		cout << " * ������Ʒ�Ĺ����ӿڣ����������ฺ�𴴽�����Ĳ�Ʒ��" << endl;
		cout << " *" << endl;
		cout << " * ����ģʽ�ص���ǽ���Ʒ�����ʵ�����ӳٵ���������ȥʵ�֣�һ����������" << endl;
		cout << " * ��������һ����Ʒ���ࡣ�����������²�Ʒʱ������չ��";
		cout << " *" << endl;
		cout << " * ���������Ƿ����������Ʊ����ÿ��������������Թ����յı�����Ʊ��" << endl;
		cout << " *" << endl;
		cout << " * ÿ��������ã�" << endl;
		cout << " * Tickets:������Ʊ������" << endl;
		cout << " * FootballTickets : ���������Ʊ�����ࣩ" << endl;
		cout << " * RunningTickets : ���ܱ�����Ʊ�����ࣩ" << endl;
		cout << " * SwimmingTickets : ��Ӿ������Ʊ�����ࣩ" << endl;
		cout << " * TicketsOffice : ��Ʊ�������������ࣩ" << endl;
		cout << " * FootballTicketsOffice : ���������Ʊ�������ࣩ" << endl;
		cout << " * RunTicketsOffice : ���ܱ�����Ʊ�������ࣩ" << endl;
		cout << " * SwimTicketsOffice : ��Ӿ������Ʊ�������ࣩ" << endl;
		cout << " *" << endl;
		cout << " * 1853806 Wu Jiaqi" << endl;
		cout << " * / " << endl;
		cout << "*************************************************************************************" << endl << endl << endl;
		Sleep(10000);
		system("cls");

		//����������ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		cout << "# Background:" << endl;
		cout << "#   I design this scene with factory method because each ticket" << endl;
		cout << "# has different properties and operations.So it's suitable for" << endl;
		cout << "# factory method because I can define an abstract class -- Tickets," << endl;
		cout << "# and design some concrete classes to achieve different operations." << endl << endl;
		Sleep(6000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Tickets seller:Welcome to the ticket area!" << endl;
		Sleep(1000);
		cout << "Tickets seller:I'm your sweety cat ���� TingTing." << endl;
		Sleep(1000);
		cout << "Tickets seller:Here are today's all competitions, which one would you like?" << endl;
		cout << endl;
		Sleep(1000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
		cout << "* Swimming              10:00                  $100 *" << endl;
		cout << "* Running               16:00                  $ 30 *" << endl;
		cout << "* Football              19:00                  $150 *" << endl;
		cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl << endl;
		
		//���ѡ�������Ʊ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	ll: cout << "(System prompt)choose one:(1:Swimming, 2:Running, 3:Football, others: exit)";
		string s;
		cin >> s;
		
		//��Ӿ����
		if (s == "1") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):I want a swimming sports ticket." << endl << endl;
			sellswimtickets();
		}
		
		//���ܱ���
		else if (s == "2") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):I want a running sports ticket." << endl << endl;
			sellruntickets();
		}

		//�������
		else if (s == "3") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):I want a football sports ticket." << endl << endl;
			sellfootballtickets();
		}

		//�쳣����
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Sorry, I have no interest in these games." << endl << endl;
			Sleep(3000);
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Tickets seller:These tickets will sell out soon, are you sure you don't want to buy?";
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
			cout << "(System prompt)Please type in your choice:[y/n]";
			string ss;
			cin >> ss;
			
			if (ss == "y") {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				cout << "Customer(you):OK, you touched me. I think I'll choose one." << endl;
				goto ll;
			}
			
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				cout << "Customer(you):Sorry, I think I'll come back tomorrow." << endl << endl;
				Sleep(3000);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout << "Tickets seller:So,have a nice day." << endl << endl;
				Sleep(3000);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				cout << "Customer(you):You too��" << endl << endl;
				Sleep(3000);
			}
		}
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "Second scene is over." << endl;
		cout << "-------------------------------------------" << endl;
		Sleep(3000);
		system("cls");
	}

	//����������Ʊ
	void sellfootballtickets() {

		//��ʼ������
		TicketsOffice* footballticketoffice = new FootballTicketsOffice();

		//��ʼ����Ʊ
		Tickets* footballticket = footballticketoffice->sellTickets();
		footballticket->showTickets();
		delete footballticket;
		delete footballticketoffice;
	}

	//��������Ʊ
	void sellruntickets() {
		TicketsOffice* runticketoffice = new RunTicketsOffice();
		Tickets* runticket = runticketoffice->sellTickets();
		runticket->showTickets();
		delete runticket;
		delete runticketoffice;
	}

	//������Ӿ��Ʊ
	void sellswimtickets() {
		TicketsOffice* swimticketoffice = new SwimTicketsOffice();
		Tickets* swimticket = swimticketoffice->sellTickets();
		swimticket->showTickets();
		delete swimticket;
		delete swimticketoffice;
	}
};
