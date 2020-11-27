#include<string>
#include <windows.h>
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
#include"Decorator.h"
#include"AbstractFactory.h"
#include"InterfaceFluent.h"
#include"Bridge.h"
#include"Multiton.h"
#include"Builder.h"
#include"Mediator.h"
#include"Adapter.h"
#include"Myprototype.h"
#include"SingletonMemento.h"
#include"StaticFactoryMethod.h"
#include"ChainsOfResponsibilityPattern.hpp"
#include"ReplaceTempWithQueryPattern.hpp"
#include"SpecificationPattern.hpp"
#include"IteratorPattern.hpp"
#include"Animation.h"
#include"GuidenceAll.h"
#include"HideDelegate.h"
#include"PrivateClassDataDemo.h"
#include"DataAccessDemo.h"
using namespace std;
void main()
{

	Proxy* myPro = new Proxy();//xjt 动物委员会 挖洞锦标赛的故事 A                                                 1
	Observer* myObs = new Observer();//xjt 跳高 智能手表 A                                                         1
	Register* myRes = new  Register();//xjt 田径场登记 A                                                           1
	Flyweight* myFly = new Flyweight();//hyo 海报生产工厂 C                                                        1    
	BusinessDelegate* myBus = new BusinessDelegate();//hyo 观众服务中心 B                                          1
	state* mySta = new state();//hyo 场地维护 B                                                                    1
	CClient* myCli = new CClient();//lxp 物资管理系统 visitor、facade、interception filter B                       1
	ServiceHall* mySev = new ServiceHall();//wjq 运动会服务大厅 D  FactoryMethod Interpreter ObjectPool            1
	command* myAnd = new command();//syj 运动会小卖部 C                                                            1
	composite* mySit = new composite();//syj 赛事导航 A                                                            1
	FrontController* myFro = new FrontController();//syj 运动员服务中心 B                                          1
	InterfaceFluent* myInt = new InterfaceFluent();//hdl 运动会入场登记 A                                          1
	AbstractFactory* myAbs = new AbstractFactory();//hdl 运动会护具生产 C                                          1
	Decorator* myDec = new Decorator();//hdl 运动饮料调配 C                                                        1
	Bridge* myBri = new Bridge();//yqx 自动饮料贩卖机 跑步时补充能量 B                                             1
	Builder* myBui = new Builder();//yqx 动物食堂 可以吃东西 B Builder Separate Query from Modifier                1
	Multiton* myMul = new Multiton();//yqx 闭幕式抽奖 A                                                            1
	Mediator* myMed = new Mediator();//zmz 体操比赛现场 A                                                          1
	Adapter* myAda = new Adapter();//zmz 开幕式上献唱一曲 A                                                        1
	StaticFactoryMethod* mySfm = new StaticFactoryMethod();//zxm 发参赛证 A                                        1
	Myprototype* myTyp = new Myprototype();//zxm 奖牌打造 C                                                        1
	SingletonMemento* mySin = new SingletonMemento();//zxm 台球比赛 A                                              1
	ChainsOfResponsibilityPattern* myCha = new ChainsOfResponsibilityPattern();//ht 动物医院 D                     1
	IteratorPattern* myIte = new IteratorPattern();//ht 排队进场 D                                                 1
	ReplaceTempWithQueryPattern* myRep = new ReplaceTempWithQueryPattern();//ht 动物付钱 D                         1
	SpecificationPattern* mySpe = new SpecificationPattern();//ht 获奖评估 D                                       1
	HideDelegate* myHid = new HideDelegate();//lxp
	PrivateClassData* myPri = new PrivateClassData();
	DataAccess* myDat = new DataAccess();

	Animation* myAnimation = new Animation();//动画
	GuidenceAll* myALL = new GuidenceAll();//菜单

	string log[100];//存储访问记录

	//正式测试
	myAnimation->Start();//放开机动画

	int ifOut = 0;
	string type;
	int number;
	string ifout;//是否跳出
	while (ifOut == 0) {	
		Sleep(1000);
		system("cls");
		myALL->Start();//菜单！
		cin.clear();
		cout << "知道您已经迫不及待了要参与到运动会中了！快告诉我您想体验运动会的哪个部分吧！（请输入主题号(A/B/C/D)）:\n";
		cin >> type;
		cout << "您想体验哪个场景呢？快告诉我吧！（请输入场景号(请输入场景前的数字)）:\n";
		cin >> number;
		if (type=="A"&&number==1) {
			myAda->test();//开幕式献唱
		}
		else if (type=="A"&&number==2) {
			myInt->test();//入场
		}
		else if (type == "A" && number == 3) {
			mySit->test();//导航
		}
		else if (type == "A" && number == 4) {
			mySfm->test();//参赛证
		}
		else if (type == "A" && number == 5) {
			myRes->test();//田径
		}
		else if (type == "A" && number == 6) {
			myObs->test();//跳高
		}
		else if (type == "A" && number == 7) {
			mySin->test();//台球
		}
		else if (type == "A" && number == 8) {

			myMed->test();//体操
		}
		else if (type == "A" && number == 9) {
			myPro->test();//挖洞
		}
		else if (type == "A" && number == 10) {
			myPri->test();//举重
		}
		else if (type == "A" && number == 11) {
			myMul->test();//闭幕式
		}
		else if (type == "B" && number == 1) {
			myCli->test();// 物资管理
		}
		else if (type == "B" && number == 2) {
			mySta->test();// 赛场维护
		}
		else if (type == "B" && number == 3) {
			myBus->test();// 观众服务中心
		}
		else if (type == "B" && number == 4) {
			myFro->test();// 运动员服务中心
		}
		else if (type == "B" && number == 5) {
			myBui->test();// 动物食堂
		}
		else if (type == "B" && number == 6) {
			myBri->test();// 自助饮料
		}
		else if (type == "B" && number == 7) {
			myHid->test();// 后勤下属部门
		}
		else if (type == "C" && number == 1) {
			myAnd->test();//小卖部
		}
		else if (type == "C" && number == 2) {
			myFly->test();//海报生产
		}
		else if (type == "C" && number == 3) {
			myAbs->test();//护具生产
		}
		else if (type == "C" && number == 4) {
			myDec->test();//专业饮料调配
		}
		else if (type == "C" && number == 5) {
			myTyp->test();//奖牌打造
		}
		else if (type == "C" && number == 6) {
			myDat->test();//信息系统支持
		}
		else if (type == "D" && number == 1) {
			mySev->test();//Service Center
		}
		else if (type == "D" && number == 2) {
			myCha->test();//Hospital
		}
		else if (type == "D" && number == 3) {
			myIte->test();//排队进场
		}
		else if (type == "D" && number == 4) {
			myRep->test();//付钱
		}
		else if (type == "D" && number == 5) {
			mySpe->test();//获奖评估
		}
		else {
			cout << "您想要探索的场景暂时还没有在运动会中出现哦！请重新探索吧！";
			continue;
		}

		cout << "该场景体验完毕啦！请问您是否希望继续体验下一个场景呢？(请输入y/n)\n";
		cin >> ifout;
		if (ifout == "n") {
     		ifOut = 1;//退出程序
		};

	//switch 
	}

	myAnimation->End();

	system("pause");

}

