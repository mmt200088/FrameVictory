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

/* 工厂模式又称虚拟构造器模式，通过定义产品父类来定义产品的一组公共接口，
 * 产品子类负责生成具体的，具有不同属性和操作的对象。定义工厂父类来负责
 * 创建产品的公共接口，而工厂子类负责创建具体的产品。
 *
 * 工厂模式特点就是将产品子类的实例化延迟到工厂子类去实现，一个工厂子类
 * 负责生产一个产品子类。这样在增加新产品时便于扩展。
 * 
 * 场景：这是服务大厅的售票区，每个动物在这里可以购买当日的比赛门票。
 *
 * 每个类的作用：
 * Tickets:比赛门票抽象类
 * FootballTickets:足球比赛门票（子类）
 * RunningTickets:长跑比赛门票（子类）
 * SwimmingTickets:游泳比赛门票（子类）
 * TicketsOffice:出票机（工厂抽象类）
 * FootballTicketsOffice:足球比赛出票机（子类）
 * RunTicketsOffice:长跑比赛出票机（子类）
 * SwimTicketsOffice:游泳比赛出票机（子类）
 * 
 * 1853806 Wu Jiaqi
 */

class FactoryMethod {
public:
	//测试代码
	void test() {
		cout << "This is tickets area." << endl;
		cout << "It is designed with factory method! " << endl;
		cout << "Please refer to the annotations and source code for the specific implemetation." << endl << endl;
		cout << "/* 工厂模式又称虚拟构造器模式，通过定义产品父类来定义产品的一组公共接口，" << endl;
		cout << " * 产品子类负责生成具体的，具有不同属性和操作的对象。定义工厂父类来负责" << endl;
		cout << " * 创建产品的公共接口，而工厂子类负责创建具体的产品。" << endl;
		cout << " *" << endl;
		cout << " * 工厂模式特点就是将产品子类的实例化延迟到工厂子类去实现，一个工厂子类" << endl;
		cout << " * 负责生产一个产品子类。这样在增加新产品时便于扩展。";
		cout << " *" << endl;
		cout << " * 场景：这是服务大厅的售票区，每个动物在这里可以购买当日的比赛门票。" << endl;
		cout << " *" << endl;
		cout << " * 每个类的作用：" << endl;
		cout << " * Tickets:比赛门票抽象类" << endl;
		cout << " * FootballTickets : 足球比赛门票（子类）" << endl;
		cout << " * RunningTickets : 长跑比赛门票（子类）" << endl;
		cout << " * SwimmingTickets : 游泳比赛门票（子类）" << endl;
		cout << " * TicketsOffice : 出票机（工厂抽象类）" << endl;
		cout << " * FootballTicketsOffice : 足球比赛出票机（子类）" << endl;
		cout << " * RunTicketsOffice : 长跑比赛出票机（子类）" << endl;
		cout << " * SwimTicketsOffice : 游泳比赛出票机（子类）" << endl;
		cout << " *" << endl;
		cout << " * 1853806 Wu Jiaqi" << endl;
		cout << " * / " << endl;
		cout << "*************************************************************************************" << endl << endl << endl;
		Sleep(10000);
		system("cls");

		//调整字体颜色
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
		cout << "Tickets seller:I'm your sweety cat —— TingTing." << endl;
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
		
		//玩家选择比赛门票
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
	ll: cout << "(System prompt)choose one:(1:Swimming, 2:Running, 3:Football, others: exit)";
		string s;
		cin >> s;
		
		//游泳比赛
		if (s == "1") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):I want a swimming sports ticket." << endl << endl;
			sellswimtickets();
		}
		
		//长跑比赛
		else if (s == "2") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):I want a running sports ticket." << endl << endl;
			sellruntickets();
		}

		//足球比赛
		else if (s == "3") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):I want a football sports ticket." << endl << endl;
			sellfootballtickets();
		}

		//异常处理
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
				cout << "Customer(you):You too！" << endl << endl;
				Sleep(3000);
			}
		}
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "Second scene is over." << endl;
		cout << "-------------------------------------------" << endl;
		Sleep(3000);
		system("cls");
	}

	//购买足球门票
	void sellfootballtickets() {

		//初始化工厂
		TicketsOffice* footballticketoffice = new FootballTicketsOffice();

		//初始化门票
		Tickets* footballticket = footballticketoffice->sellTickets();
		footballticket->showTickets();
		delete footballticket;
		delete footballticketoffice;
	}

	//购买长跑门票
	void sellruntickets() {
		TicketsOffice* runticketoffice = new RunTicketsOffice();
		Tickets* runticket = runticketoffice->sellTickets();
		runticket->showTickets();
		delete runticket;
		delete runticketoffice;
	}

	//购买游泳门票
	void sellswimtickets() {
		TicketsOffice* swimticketoffice = new SwimTicketsOffice();
		Tickets* swimticket = swimticketoffice->sellTickets();
		swimticket->showTickets();
		delete swimticket;
		delete swimticketoffice;
	}
};
