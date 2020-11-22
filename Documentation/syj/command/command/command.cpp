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
 
 /**Command模式
    使用场景：运动会小卖部
    实现说明：一共有四个角色：接受者角色（Receiver）、命令角色（Command）、具体命令角色（ConcreteCommand）、
	         调用者角色（Invoker）接收者角色为小卖部的店员（ShopAssistant），用于最终接受并处理小动物的订
	         单，命令角色为抽象类，在这个场景下是订单（Order），是声明对订单操作的接口，具体命令角色为具体的订
	         单（ConcreteOrder），把请求命令对象化，是具体的订单，包含各种具体的操作，调用者角色为收银员
		    （Clerk），用于接收小动物们的订单，并且调用具体的命令。
**/


//测试函数
 
void command::test()
{
	cout << "实现模式：Command 实现场景：运动会小卖部" << endl;
	Sleep(2000);
	cout << "-----------欢迎来到运动会小卖铺-------------" << endl;
	cout << "        商品：饮料   零食    绷带  " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "-----------你可以在收银员处下单-------------" << endl;
	cout << "--------------------------------------------" << endl;
	Sleep(1000);
	// 店里添加小卖铺的店员
	ShopAssitant* assitant = new ShopAssitant();
	vector<Order*> commandList;
	int order_quantity = 0;//表示一共收到的订单总数 可以表示订单编号
	order_quantity++;
	Order* order1 = new DrinkCmd(assitant, order_quantity); //创建具体命令并绑定接收者，将处理购买饮料订单的指令传给店员
	order_quantity++;
	Order* order2 = new FoodCmd(assitant, order_quantity);//创建具体命令并绑定接收者，将处理购买零食订单的指令传给店员
	order_quantity++;
	Order* order3 = new BandageCmd(assitant, order_quantity);//创建具体命令并绑定接收者，将处理购买绷带订单的指令传给店员
	Clerk* girl = new Clerk();
     
	//下单 把命令加到请求队列中
	girl->SetOrder(order1);
	Sleep(1000);
	girl->SetOrder(order2);
	Sleep(1000);
    girl->SetOrder(order3);
	Sleep(1000);
	//撤销订单 可以撤销指定订单编号的订单
	girl->UndoOrder(2);
	Sleep(1000);
	// 收银员通知后台店员处理订单
	girl->Notify();
	system("pause");

}
