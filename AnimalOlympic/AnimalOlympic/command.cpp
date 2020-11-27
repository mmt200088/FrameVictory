#include <iostream>
#include <vector>
#include "order.h"
#include "BandageCmd.h"
#include "Clerk.h"
#include "DrinkCmd.h"
#include "FoodCmd.h"
#include "PosterCmd.h"
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
	cout << "实现模式：Command " << endl;
	Sleep(1000);
	cout << "模式介绍：" << endl;
	cout << "命令模式（Command）是一种行为模式，请求以命令的形式包裹在对象中，并传给调用对象。调用对象寻找可以处理该命令的合适的对象，并把该命令传给相应的对象，该对象执行命令。在某些场合需要对行为进行记录、撤销或重做、事务等处理时，我们如果用无法抵御变化的紧耦合模式是不合适的，所以我们需要使用命令模式。" << endl;
	cout << "命令模式的基本结构如下：" << endl;

	cout << "	Command：定义命令的接口，声明执行的方法。" << endl;

	cout << "	ConcreteCommand： 具体的命令， 实现命令接口；通常会持有接收者，并调用接收者的功能来完成命令要执行的操作。" << endl;
	cout << "	Receiver：接收者，真正执行命令的对象。任何类都可能成为一个接收者，只要它能够实现命令要求实现的相应功能。" << endl;
	cout << "	Invoker：要求命令对象执行请求，通常会持有命令对象，可以持有很多的命令对象。这个是客户端真正触发命令并要求命令执行相应操作的地方，也就是说相当于使用命令对象的入口。" << endl;
	cout << "	Client： 创建具体的命令对象，并且设置命令对象的接收者。注意这个不是我们常规意义上的客户端，而是在组装命令对象和接收者，或许，把这个Client称为装配者会更好理解，因为真正使用命令的客户端是从Invoker来触发执行。" << endl;
	Sleep(1000);
	cout << "实现场景：运动会小卖铺" << endl;
    cout << "          我们设置了体育场小卖部，运动员和观众可以在小卖部购买需要的物品，比如零食、饮料、应援物、创口贴绷带等等，因为来购买的小动物可能很多，而且有的小动物会来店铺里面买，有些小动物会希望小卖部把他们需要的物品送到他们手中，为避免产生混乱，每一个顾客会生成一个购物清单，客户把他们的需求写在清单上，这样店员就可以按顺序实现需求，小动物们也可以方便的撤销~" << endl;
	cout << "--------------------------------------------" << endl;
	Sleep(2000);
	cout << "-----------欢迎来到运动会小卖铺-------------" << endl;
	cout << "        商品：饮料   零食  绷带  横幅海报" << endl;
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
	 cout << "小兔子来到店里，想要一杯冰可乐" << endl;
	Sleep(500);
	girl->SetOrder(order1);
	cout << "--------------------------------------------" << endl;
	Sleep(1000);
	cout << "小鹿来到店里，想要一包百事薯片" << endl;
	Sleep(500);
	girl->SetOrder(order2);
	cout << "--------------------------------------------" << endl;
	Sleep(1000);
	cout << "小熊不小心摔伤啦，他来到店里，想要一包绷带" << endl;
	Sleep(500);
    girl->SetOrder(order3);
	cout << "--------------------------------------------" << endl;
	Sleep(1000);
	//撤销订单 可以撤销指定订单编号的订单
	cout << "小鹿突然不想吃薯片了，想让收银员撤掉她的订单" << endl;
	Sleep(500);
	girl->UndoOrder(2);
	cout << "--------------------------------------------" << endl;
	Sleep(1000);
	// 收银员通知后台店员处理订单
	girl->Notify();
}
