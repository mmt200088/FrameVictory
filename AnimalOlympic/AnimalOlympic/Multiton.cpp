#include <iostream>
#include <vector>
#include <stdlib.h> 
#include<stdio.h>
#include <time.h> 
#include"Multiton.h"
#include<Windows.h>
#include<string>
#define LIMIT 5

using namespace std;
std::vector<LotteryBall *> LotteryBall::LotteryBallList;
int LotteryBall::limit = LotteryBall::SetSize();
int LotteryBall::currentIndex = 0;

LotteryBall::LotteryBall()
{
	srand((unsigned)time(NULL));
	Sleep(4*1000);
	number = (rand() % 10);//实例化一个小球，模拟抽奖过程
}

int LotteryBall::GetNumber()
{
	return number;
}

int LotteryBall::SetSize()
{
	LotteryBall::LotteryBallList.resize(LIMIT);//设置抽取球数
	for (int i = 0; i < LIMIT; i++)
	{
		LotteryBall::LotteryBallList[i] = NULL;//抽奖之前的状态
	}
	return LIMIT;
}

void Multiton::test()
{
	string ID;
	string number="";
	char str[10];
	int num;
	cout << "Multition设计模式简介：" << endl;
	cout << "多例模式Multiton是单例模式singelton的扩展,多例类可以有多个自己的实例，" << endl
		<< "多例类必须自己创建，管理自己的实例，每个实例可以有不同的属性" << endl <<
		"多例类能够向外界提供自己的实例。一般的多例模式都默认为有上限的，叫做上限多例模式。" << endl;
	cout << endl;
	cout << "场景简介:" << endl;
	cout << "在动物运动会开始之前，主办方就已经为动物们策划好了一个惊喜，由于每一位运动员以及" << endl
		<< "运动会的工作人员都有一个五位数的编号，主办方准备在运动会临近闭幕之时，抽取五位" << endl
		<< "幸运数字，对应编号的小动物将获得神秘大奖，同时将成为下一届人类运动会的吉祥物！" << endl
		<< "主办方准备好了相等数目的印有0~9不同数字的抽奖球，届时将通过抽奖机一个一个球的摇出" << endl
		<< "最终的中奖号码，每一个抽出的小球既是抽奖球多例的一个实例，共有5个实例" << endl;
	cout << endl << endl;

	Sleep(3 * 1000);
	cout << "运动会已经接近尾声，马上就要闭幕式了，主办方突然放出消息说要抽奖：" << endl
		<< "主办方将会使用抽奖机依次抽出五枚小球，如果小动物编号与五枚小球号码对应则中奖！" << endl;
	Sleep(2 * 1000);
	cout<< "中奖的小动物将会获得神秘大奖和成为下一次人类运动会吉祥物的机会！" << endl;
	Sleep(3 * 1000);
	cout << "听到这则消息，小动物们都沸腾了起来，纷纷去现场见证开奖......" << endl << endl;
	Sleep(2 * 1000);
	cout << "你赶紧来到了开奖舞台，只见上方的抽奖机里放着数不胜数的小球,马上就要开奖了......" << endl
		 <<"你赶紧看看了看自己的编号，是：" << endl;
	cin >> ID;
	Sleep(2 * 1000);
	cout << "机器发出一声嗡鸣，在万众瞩目之下，开奖开始了......" << endl;
	cout << "摇奖中......" << endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "第一个小球摇出来了，上面的号码是:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num << "！" << endl;
	cout<<"摇奖中......"<<endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "第二个小球摇出来了，上面的号码是:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num <<"！"<< endl;
	cout << "摇奖中......" << endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "第三个小球摇出来了，上面的号码是:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num << "！" << endl;
	cout << "摇奖中......" << endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "第四个小球摇出来了，上面的号码是:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num <<"!"<< endl;
	cout << "摇奖中......" << endl;

	num = LotteryBall::getInstance()->GetNumber();
	cout << "第五个小球摇出来了，上面的号码是:" ;
	sprintf_s(str, "%d", num);
	number.append(str);
	cout << num << "！" << endl;
	cout << endl << "中奖编号是："<<number << endl;
	if (number == ID)
		cout << "恭喜你中奖啦，下一届人类运动会的吉祥物就决定是你啦！" << endl;
	else
		cout << "真遗憾没有中奖呢，不过开奖的过程真是紧张又刺激呢~" << endl << endl;
}

