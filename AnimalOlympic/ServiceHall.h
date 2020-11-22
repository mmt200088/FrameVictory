#pragma once
#include<FactoryMethod.h>
#include<Interpreter.h>
#include<ObjectPool.h>
#include<Windows.h>

/* 场景介绍：这是运动会服务大厅，顾客进门后会有机器人接待，机器人会介绍
 * 服务大厅的三个功能——门票购买，小吃购买，服装租借。由于剧情设置，用户
 * 目前每天只能体验一种功能。整个故事分为三幕，其中包含许多与用户交互的
 * 场景。希望您用心体验。
 *
 * 这三个场景对应我负责的三个设计模式：
 * 1.门票购买 —— Factory Method
 * 2.小吃购买 —— Interpreter
 * 3.服装租借 —— Objectpool
 *
 * 每个设计模式的原理与实现请移步与设计模式同名的头文件，我在其中提供了详尽的注释。
 *
 * 1853806 Wu Jiaqi
 */

class ServiceHall {
public:
	//测试代码
	void test() {
		cout << "This is animal olympic games project." << endl;
		cout << "And these scenes are designed by Wujiaqi." << endl << endl;
		cout << "/* 场景介绍：这是运动会服务大厅，顾客进门后会有机器人接待，机器人会介绍" << endl;
		cout << " * 服务大厅的三个功能——门票购买，小吃购买，服装租借。由于剧情设置，用户" << endl;
		cout << " * 目前每天只能体验一种功能。整个故事分为三幕，其中包含许多与用户交互的" << endl;
		cout << " * 场景。希望您用心体验。" << endl;
		cout << " *" << endl;
		cout << " * 这三个场景对应我负责的三个设计模式：" << endl;
		cout << " * 1.门票购买 —— Factory Method" << endl;
		cout << " * 2.小吃购买 —— Interpreter" << endl;
		cout << " * 3.服装租借 —— Objectpool" << endl;
		cout << " *" << endl;
		cout << " * 每个设计模式的原理与实现请移步与设计模式同名的头文件，我在其中提供了详尽的注释。" << endl;
		cout << " *" << endl;
		cout << " * 1853806 Wu Jiaqi" << endl;
		cout << " */" << endl;
		cout << "*********************************************" << endl << endl << endl;
		Sleep(10000);
		system("cls");

		//修改字体颜色
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		cout << "# Background:" << endl;
		cout << "#   I design a comprehensive service hall for sports meeting." << endl;
		cout << "# And it is constructed for the audience.In this hall, I set " << endl;
		cout << "# three functional areas for animals. Each of them corresponds" << endl;
		cout << "# to a design pattern. Next,you will act as a customer to test." << endl;
		cout << "#   Let's start your journey!" << endl << endl;
		cout << "# Roles:" << endl;
		cout << "#   Green  —— You" << endl;
		cout << "#   Red    —— NPC" << endl;
		cout << "#   White  —— Narrator" << endl;
		cout << "#   Yellow —— Static items" << endl << endl;
		Sleep(6000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(Open the door and go in)" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:Welcome to the service hall of Olympic games." << endl;
		Sleep(1000);
		cout << "Robot:We will serve you faithfully." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Well,what services do you have?" << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:In service hall, you have 3 choices." << endl;
		Sleep(1000);
		cout << "Robot:Please look at our service panel." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(look up at the panel curiously)" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "************************************************************" << endl;
		cout << "* 1.Buy tickets for today's game(Factory Method)           *" << endl;
		cout << "* 2.Buy snacks to enjoy the game(Interpreter)              *" << endl;
		cout << "* 3.Rent fan's costumes for your favorite team(ObjectPool) *" << endl;
		cout << "************************************************************" << endl << endl;
		Sleep(5000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:Which one do you want to choose?" << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Emmm...let me think." << endl;
		
		//玩家选择场景（设计模式）
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(System prompt)Please make your choice(1:Pattern 1, 2:Pattern 2, 3:Pattern 3)";
		string s;
		cin >> s;

		//场景1
		if (s == "1") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Well,I think I'll buy tickets first." << endl << endl;
			Sleep(3000);
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Robot:OK,you can go with me." << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
			cout << "First scene is over." << endl;
			cout << "-------------------------------------------" << endl;
			Sleep(3000);
			system("cls");

			//创建对应设计模式的实例
			FactoryMethod factory;
			factory.test();
		}

		//场景2
		else if (s == "2") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Well,I think I'll buy snacks first.I'm really hungry now." << endl << endl;
			Sleep(3000);
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Robot:OK,you can go with me." << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
			cout << "First scene is over." << endl;
			cout << "-------------------------------------------" << endl;
			Sleep(3000);
			system("cls");
			
			//创建对应设计模式的实例
			Interpreter in;
			in.test();
		}

		//场景3
		else if (s == "3") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Well,I think I'll rent costumes first.I'm a big fan of Mr.Ma." << endl << endl;
			Sleep(3000);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Robot:OK,you can go with me." << endl << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
			cout << "First scene is over." << endl;
			cout << "-------------------------------------------" << endl;
			Sleep(3000);
			system("cls");

			//创建对应设计模式的实例
			ObjectPool obj;
			obj.test();
		}

		//异常输入，耗子尾汁
		else {
			cout << endl;
			cout << "(System prompt)ERROR!ERROR!ERROR!" << endl;
			cout << "(System prompt)You will exit in 3 seconds!" << endl;;
			Sleep(3000);
			return;
		}

		//结束场景
		cout << "(evening)" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:You've had a great day just by looking at your state." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Yes, I told you, I watched a wonderful match today..." << endl << endl;
		Sleep(5000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(1 hour later)" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Robot:Well,the service hall is closing." << endl;
		Sleep(1000);
		cout << "Robot:Maybe you'll come back tomorrow." << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):Thanks for your service today.I hope tomorrow will come soon." << endl;
		Sleep(1000);
		cout << "Customer(you):Bye!" << endl << endl;
		Sleep(3000);
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "End(To be continued...)" << endl;
		cout << "-------------------------------------------" << endl;
	}

};