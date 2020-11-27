#include "Observer.h"
#include <iostream>

using namespace std;

void Observer::test() {

	ConcreteSubject *mySub = new ConcreteSubject();//田径比赛
	Player *lion = new Player("小狮子", 0);
	Player *tiger = new Player("小老虎", 0);
	Player *Bao = new Player("小猎豹", 0);
	Player *horse = new Player("小斑马", 0);

	cout << "Observer模式简介：\n";
	cout << "观察者模式（Observer Pattern)定义对象间的一种一对多的依赖关系。\n";
	cout << "当一个对象的状态发生改变时，所有依赖于它的对象都得到通知并自动刷新。\n";
	cout << "观察者模式可以理解为发布-订阅模式，即多个订阅者（观察者）向发布者（被观察者）订阅状态信息，当发布者更新状态时会将状态信息向它的订阅者发布信息。\n";
	cout << "发布者需要自己维护订阅者列表，可以注册或者注销对状态信息感兴趣或不感兴趣的订阅者。\n";
	cout << "在本实例中，参加某种比赛的小动物会通过智能手表“订阅”相应的比赛，实时监控比赛的状态变化。当比赛快开始时，智能手表会进行相应的提醒。\n\n\n";
	Sleep(2 * 1000);
	cout << "故事简介：\n";
	cout << "由于动物运动会项目的多样性，不同项目的比赛场地往往距离很远，动物运动员到达赛场也需要一定的时间。\n";
	Sleep(2 * 1000);
	cout << "所以，保证参赛的小动物能在比赛正式开始前到达场地，也是一个不小的问题。\n";
	Sleep(2 * 1000);
	cout << "这届的动物运动会与往届不同，赛事委员会引入了“黑科技”——滴滴手表！\n";
	Sleep(2 * 1000);
	cout << "选手们只需要带上滴滴手表，在比赛开始前30分钟，手表就会自动提醒选手，给他们足够的时间到达赛场。\n";
	Sleep(2 * 1000);
	cout << "身为赛事委员会科技部的部长，请你来帮助我们将滴滴手表引入我们的跳高项目吧！（提示，参加该项目的小动物有小狮子、小老虎、小猎豹和小斑马）\n";
	Sleep(2 * 1000);
	cout << "*************************************************\n"
		<< "你可以进行以下操作：\n"
		<< "A：把调跳高比赛的滴滴手表先发给小动物们\n"
		<< "B：询问小动物是否已经拿到了滴滴手表\n"
		<< "C：看看大家是不是都已经收到了手表！\n"
		<< "D：田径赛还有30分钟开始！通知选手及时参赛！\n"
		<< "Q：退出测试！\n"
		<< "*************************************************\n";

	int mm = 1;
	int ifBCD = 0;
	while (mm == 1)
	{
		cout << "\n接下来，请通过输入A、B、C、D来选择您想要做的事情：\n";
		char M;
		cin >> M;
		switch (M)
		{
		case 'A':
		{
			cout << "正在将手表分发给小动物们，请稍等.\n";
			Sleep(2 * 1000);
			cout << "正在将手表分发给小动物们，请稍等..\n";
			Sleep(2 * 1000);
			cout << "正在将手表分发给小动物们，请稍等...\n";
			Sleep(2 * 1000);
			mySub->Attach(lion);
			mySub->Attach(tiger);
			mySub->Attach(Bao);
			mySub->Attach(horse);
			cout << "小动物们已经成功收到滴滴手表啦！正在时刻关注比赛动态！\n";
			ifBCD = 1;
			break;
		}

		case 'B':
		{
			if (ifBCD == 0) { cout << "手表还没发给小动物们呢！请先分发手表！"; break; };
			string yourName;
			cout << "请输入你想要查询的小动物的名字：";
			cin >> yourName;
			if (yourName == "小狮子" || "小老虎" || "小猎豹" || "小斑马") {
				mySub->CheckAPlayer(yourName);
			}
			else {
				cout << "您输入的小动物并没有参加赛跑项目哦！\n";
			}
			break;
		}

		case 'C':
		{
			if (ifBCD == 0) { cout << "手表还没发给小动物们呢！请先分发手表！"; break; };
			mySub->GiveAllPlayers();
			break;
		}
		case 'D':
		{
			if (ifBCD == 0) { cout << "手表还没发给小动物们呢！请先分发手表！"; break; };
			mySub->ChangeState();
			break;
		}
		case 'Q':
		{
			mm = 2;
			break;
		}
		default: {
			cout << "您的动作过于前卫，有点脱离我们的故事线！请您在ABCD中选择一个！\n";
			break;
		}

		}

	}


};