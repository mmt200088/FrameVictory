#pragma once

#include<iostream>
#include<string>
#include<map>
#include"Dish.h"
#include"Menu.h"
#include"Operations.h"
#include<Windows.h>

using namespace std;

/* 解释器模式，类似于我们学习编译原理中语法分析过程，作用就是将一个个
 * 词组按照一定的语法规则进行解释，最终实现一种语言向另一种语言的转化。
 * 除了传统的编译器之外，解释器模式还可以实现计算器，即将运算表达式解析
 * 后得到结果。
 *
 * 解释器模式在项目中使用较少，它多用于框架和工具类的开发。
 *
 * 场景：这是服务大厅的小吃售卖区，每个动物在这里可以购买小吃来更好的享受比赛。
 * 我们使用解释器模式实现工作人员根据顾客的需求转换成对应的付款金额。
 *
 * 每个类的作用：
 * Dish:记录顾客提出的小吃名并在菜单中查找对应金额。
 * Menu:菜单，使用map记录小吃名和对应金额。
 * Operations:操作类，对顾客需要的商品转换成金额并求和
 * Expression:抽象解释器，具体操作由子类Dish和Operations实现
 *
 * 1853806 Wu Jiaqi
 */

class Interpreter {
public:
	//测试代码
	void test() {
		cout << "This is snack area." << endl;
		cout << "It is design with interpreter! " << endl;
		cout << "Please refer to the annotations and source code for the specific implemetation." << endl << endl;
		cout << "/* 解释器模式，类似于我们学习编译原理中语法分析过程，作用就是将一个个" << endl;
		cout << " * 词组按照一定的语法规则进行解释，最终实现一种语言向另一种语言的转化。" << endl;
		cout << " * 除了传统的编译器之外，解释器模式还可以实现计算器，即将运算表达式解析" << endl;
		cout << " * 后得到结果。" << endl;
		cout << " *" << endl;
		cout << " * 解释器模式在项目中使用较少，它多用于框架和工具类的开发。" << endl;
		cout << " *" << endl;
		cout << " * 场景：这是服务大厅的小吃售卖区，每个动物在这里可以购买小吃来更好的享受比赛。" << endl;
		cout << " * 我们使用解释器模式实现工作人员根据顾客的需求转换成对应的付款金额。" << endl;
		cout << " *" << endl;
		cout << " * 每个类的作用：" << endl;
		cout << " * Dish:记录顾客提出的小吃名并在菜单中查找对应金额。" << endl;
		cout << " * Menu:菜单，使用map记录小吃名和对应金额。" << endl;
		cout << " * Operations:操作类，对顾客需要的商品转换成金额并求和" << endl;
		cout << " * Expression:抽象解释器，具体操作由子类Dish和Operations实现" << endl;
		cout << " *" << endl;
		cout << " * 1853806 Wu Jiaqi" << endl;
		cout << " */" << endl;
		cout << "*************************************************************************************" << endl << endl << endl;
		Sleep(10000);
		system("cls");

		//调整字体颜色
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
		cout << "Waitress:I'm your sweety mouse —— NaNa." << endl;
		Sleep(1000);

		//创建菜单和小吃实例
		Menu* menu=new Menu();
		Dish* popcorn = new Dish("Popcorn");
		Dish* cola = new Dish("Cocacola");
		Dish* chips = new Dish("Potato Chips");
		
		//菜单插入操作
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
	ss:cout << "Waitress:OK,you can buy at most 3 items in one time, how many items do you want to buy？" << endl;
		
		//玩家进行选择，选择购买数量
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
		cout << "(System prompt)Please make your choice:(1 or 2 or 3)";
	    string s;
		cin >> s;
		cout << endl;

		//一件商品
		if (s == "1") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Maybe I'd better buy one item." << endl << endl;
			Sleep(3000);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		ll: cout << "Waitress:OK,what do you want,sir?(1:Popcorn, 2:Cocacola, 3:Potato Chips)" << endl;
			
			//玩家选择小吃类别
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "(System prompt)Please make your choice:(1 or 2 or 3)";
			string t;
			cin >> t;
			cout << endl;
			
			if (t == "1") {
				Operations* order = new Operations(popcorn);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//求和
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) << endl << endl;
				delete order;
			}
			
			else if (t == "2") {
				Operations* order = new Operations(cola);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//求和
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) << endl << endl;
				delete order;
			}

			else if (t == "3") {
				Operations* order = new Operations(chips);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//求和
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) << endl << endl;
				delete order;
			}

			//异常处理
			else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout << "Waitress:Sorry,we don't have other snacks." << endl;
				Sleep(3000);

				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
				cout << "Customer(you):So, I think I'll make another choice " << endl << endl;
				goto ll;
			}
		}

		//两件商品
		else if (s == "2") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Maybe I will buy two items." << endl << endl;
			Sleep(3000);

			//提供优惠套餐
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Waitress:OK,I'd like to recommend you two set menus." << endl;
			Sleep(1000);
			cout << "Waitress:One is our classic set menu——Popcorn and Cocacola, the other is a new set menu——Potato Chips and Cocacola" << endl;
			Sleep(1000);
			cout << "Waitress:Both of them can enjoy 10% discount." << endl << endl;
			Sleep(3000);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):That's fun! I will choose one." << endl;
			Sleep(3000);
			
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		tt:cout << "Waitress:Which one would you like, sir?(1:classic set menu, 2:new set menu)" << endl;
			
			//选择套餐
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			cout << "(System prompt)Please make your choice:(1 or 2)";
			string t;
			cin >> t;
			cout << endl;
			
			if (t == "1") {
				Operations* order = new Operations(popcorn, cola);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//求和
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) * 0.9 << endl << endl;
				delete order;
			}
			
			else if (t == "2") {
				Operations* order = new Operations(chips, cola);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				//求和
				cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) * 0.9 << endl << endl;
				delete order;
			}

			//异常处理
			else{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
				cout << "Waitress:Sorry,sir.I didn't hear you clearly." << endl;
				Sleep(1000);
				goto tt;
			}
		}

		//三件商品
		else if (s == "3") {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Maybe I will buy three items." << endl << endl;
			Sleep(3000);

			//提供优惠套餐
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Waitress:OK, I'd like to recommend you to buy all 3 items." << endl;
			Sleep(1000);
			cout << "Waitress:And we can give you 20% discount." << endl << endl;
			Sleep(3000);

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			cout << "Customer(you):Sure, please give me a piece." << endl << endl;
			
			//求和
			Operations* order = new Operations(chips, popcorn, cola);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Waitress:OK,let me see...the bill is total up to $" << order->interpret(menu) * 0.8 << endl << endl;
			delete order;
		}

		//异常处理
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