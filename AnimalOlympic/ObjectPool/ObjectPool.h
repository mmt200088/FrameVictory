#pragma once
#include"Client.h"
#include<Windows.h>

/* 对象池模式，即在程序运行刚开始先创建并保存一组类的实例，当程序需要用到
 * 某个实例时向对象池发起申请，如果有空闲实例就取出，当实例用完后无需销毁，
 * 将其放回对象池中等待下一次申请。这样可以节省频繁创建实例的开销。减少内存
 * 碎片，节省空间。
 *
 * 对象池模式常用于以下几个场景：1.类的实例频繁交互；2.实例化过程开销较大；
 * 3.实例化频率较高；4.类参与交互的时间有限。
 *
 * 场景：这是服务大厅的服装租借区，每个动物在这里可以租借运动明星的粉丝服。
 * 由于实例频繁交互，因此使用对象池模式。
 *
 * 每个类的作用：
 * FanCustome:服装实体类，保存服装编号。
 * CustomeManager:服装管理类，使用map（对象池）记录服装实例及对应状态，并在租借或归还时修改状态。
 * Client:服装使用类，提供租借和归还服装的接口以及查询服装状态的接口。
 *
 * 1853806 Wu Jiaqi
 */

class ObjectPool {
public:
	//测试代码
	void test() {
		cout << "This is renting area." << endl;
		cout << "It is design with objectpool! " << endl;
		cout << "Please refer to the annotations and source code for the specific implemetation." << endl << endl;
		cout << "/* 对象池模式，即在程序运行刚开始先创建并保存一组类的实例，当程序需要用到" << endl;
		cout << " * 某个实例时向对象池发起申请，如果有空闲实例就取出，当实例用完后无需销毁，" << endl;
		cout << " * 将其放回对象池中等待下一次申请。这样可以节省频繁创建实例的开销。减少内存" << endl;
		cout << " * 碎片，节省空间。" << endl;
		cout << " *" << endl;
		cout << " * 对象池模式常用于以下几个场景：1.类的实例频繁交互；2.实例化过程开销较大；" << endl;
		cout << " * 3.实例化频率较高；4.类参与交互的时间有限。" << endl;
		cout << " *" << endl;
		cout << " * 场景：这是服务大厅的服装租借区，每个动物在这里可以租借运动明星的粉丝服。" << endl;
		cout << " * 由于实例频繁交互，因此使用对象池模式。" << endl;
		cout << " *" << endl;
		cout << " * 每个类的作用：" << endl;
		cout << " * FanCustome:服装实体类，保存服装编号。" << endl;
		cout << " * CustomeManager:服装管理类，使用map（对象池）记录服装实例及对应状态，并在租借或归还时修改状态。" << endl;
		cout << " * Client:服装使用类，提供租借和归还服装的接口以及查询服装状态的接口。" << endl;
		cout << " *" << endl;
		cout << " * 1853806 Wu Jiaqi" << endl;
		cout << " */" << endl;
		cout << "*************************************************************************************" << endl << endl << endl;
		Sleep(10000);
		system("cls");

		//故事背景
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
		cout << "Staff:I'm your faithful dog —— LuLu." << endl;
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

		//创建使用类实例，调用接口。
		//因故事设定为服装全借出，所以先修改对象池中对象状态
		Client* client = new Client();
		for (int i = 0; i < 5; i++) {
			client->applyCustome();
		}

		//查询对象状态
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

		//故事设定此时已有空闲实例，所以要执行一次还衣服操作。
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
		
		//你进行借衣服操作
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