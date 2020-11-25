// AnimalOlympic.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Proxy.h"
#include"Observer.h"
#include"Register.h"
#include"Flyweight.h"
#include"BusinessDelegate.h"
#include"State.h"
#include"CClient.h"
#include"ServiceHall.h"
#include"composite.h"
#include"command.h"
#include"FrontController.h"
int main()
{
	Proxy *myPro = new Proxy();//xjt
	Observer *myObs = new Observer();//xjt
	Register* myRes = new  Register();//xjt
	Flyweight* myFly = new Flyweight();//hyo
	BusinessDelegate* myBus = new BusinessDelegate();//hyo
	state* mySta = new state();//hyo
	CClient* myCli = new CClient();//lxp 后勤管理系统
	ServiceHall* mySev = new ServiceHall();//wjq 运动会服务大厅
	command* myAnd = new command();//syj 运动会小卖部
	composite* mySit = new composite();//syj 赛事导航
	FrontController* myFro = new FrontController();//syj 运动会服务中心
	mySev->test();//
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
