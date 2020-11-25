#include "Bridge.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

OrangeJuice::OrangeJuice(AnimalizeImplement *imp)
{
	cout << "机器正在剥橙子.....";
	Sleep(1 * 1000);
	cout << "机器正在榨取橙汁.....";
	Sleep(1 * 1000);
	cout << "机器正在装杯......" << endl;
	Sleep(1 * 1000);
	this->_imp = imp;
}

OrangeJuice::~OrangeJuice()
{
	delete this->_imp;
	this->_imp = NULL;
}

void OrangeJuice::Operation()
{
	this->_imp->Operation();
}

MilkTea::MilkTea(AnimalizeImplement *imp)
{
	cout << "机器正在加牛奶.....";
	Sleep(1 * 1000);
	cout << "机器正在加红茶.....";
	Sleep(1 * 1000);
	cout << "机器正在搅拌均匀......" << endl;
	Sleep(1 * 1000);
	this->_imp = imp;
}

MilkTea::~MilkTea()
{
	delete this->_imp;
	this->_imp = NULL;
}

void MilkTea::Operation()
{
	this->_imp->Operation();
}

Coffee::Coffee(AnimalizeImplement *imp)
{
	cout << "机器研磨咖啡豆.....";
	Sleep(1 * 1000);
	cout << "机器正在冲兑咖啡.....";
	Sleep(1 * 1000);
	cout << "机器正在装杯......" << endl;
	Sleep(1 * 1000);
	this->_imp = imp;
}

Coffee::~Coffee()
{
	delete this->_imp;
	this->_imp = NULL;
}

void Coffee::Operation()
{
	cout << "机器正在纠结用百事可乐还是可口可乐.....";
	Sleep(4 * 1000);
	cout << "机器终于做出了决定.....";
	Sleep(1 * 1000);
	cout << "机器正在装杯......" << endl;
	Sleep(1 * 1000);
	this->_imp->Operation();
}

Colar::Colar(AnimalizeImplement *imp)
{
	this->_imp = imp;
}

Colar::~Colar()
{
	delete this->_imp;
	this->_imp = NULL;
}

void Colar::Operation()
{
	this->_imp->Operation();
}

void Suger::Operation()
{
	cout << "正在加糖......" << endl;
	Sleep(2 * 1000);
	cout << "大成功！你的饮料制作完毕啦，请在侧方窗口及时取走哦~" << endl << endl;
}

void IceCube::Operation()
{
	cout << "正在加冰块......" << endl;
	Sleep(2 * 1000);
	cout << "大成功！你的饮料制作完毕啦，请在侧方窗口及时取走哦~" << endl << endl;
}

void MilkCover::Operation()
{
	cout << "正在加奶盖......" << endl;
	Sleep(2 * 1000);
	cout << "大成功！你的饮料制作完毕啦，请在侧方窗口及时取走哦~" << endl << endl;
}

void None::Operation()
{
	cout << "大成功！你的饮料制作完毕啦，请在侧方窗口及时取走哦~" << endl << endl;
}

void Bridge::test()
{
	AnimalizeImplement* suger = new Suger();
	AnimalizeImplement* iceCube = new IceCube();
	AnimalizeImplement* milkCover = new MilkCover();
	AnimalizeImplement* none = new None();
	char type;
	char op;
	bool buy = true;
	cout << "Buridge设计模式简介：" << endl;
	cout << "将抽象部份与它的实现部份分离，使它们都可以独立地变化:" << endl <<
		"简单粗暴的说，就是抽象对外提供调用的接口；对外隐瞒实现部分，" << endl <<
		"在抽象中引用实现部分，从而实现抽象对实现部分的调用，而抽象中引用的" << endl <<
		"实现部分可以在今后的开发过程中，切换成别的实现部分。" << endl;
	cout << endl << endl;
	cout << "场景简介：" << endl;
	cout << "动物的栖息和生存离不开水，在运动会中也不例外, 为了保证动物们在高强度" << endl <<
		"高水平的比赛中保持良好的竞技状态，我们的运动场提供了许多自动贩卖饮料的制作机，" << endl <<
		"保证小动物们能够及时补充水分，由于不同动物的饮料偏好不同，因此我们不仅支持它们" << endl <<
		"能够选择饮料的种类，还能根据自己的个性添加一些饮料伴侣,为了能够使得饮料种类以及其"<<endl<<
		"个性化定制能够不断扩充,使用Bridge设计模式是一个十分契合问题的选择。" << endl;
	cout << endl << endl;
	cout << endl << endl;
	Sleep(3 * 1000);
	cout << "动物足球比赛的中场休息期间，你作为足球比赛的裁判，已经持续奔跑了45分钟了，" << endl;
	Sleep(2 * 1000);
	cout << "正当你口渴难耐的时候，看到了赛场边上有一个自动饮料制作机" << endl;
	Sleep(2 * 1000);
	cout<<"看到它你啪一下就站起来了，很快啊~" << endl;
	Sleep(2 * 1000);
	cout<<
		"你三步并作两步便到了售货机跟前，上去就是一个投币：" << endl;
	Sleep(2 * 1000);
	while(buy==true)
	{ 
	cout << "Ding~~~自动饮料制作机提示你选择饮料的种类：" << endl << endl;

	cout << "A：橙汁" << endl;
	cout << "B：奶茶" << endl;
	cout << "C：咖啡" << endl;
	cout << "D：可乐" << endl;
	cin >> type;
	switch (type)
	{
	case 'A':
	{
		cout << "请选择你喜欢的饮料伴侣(输入错误那就默认什么都不给加了哦~）:" << endl;
		cout << "a:冰糖\nb:冰块\nc:奶盖\nd:什么都不加" << endl;
		cin >> op;
		switch (op)
		{
		case'a': {Drink* drink = new OrangeJuice(suger); drink->Operation(); drink->~Drink(); break; }
		case'b': {Drink* drink = new OrangeJuice(iceCube); drink->Operation(); drink->~Drink(); break; }
		case'c':{Drink* drink = new OrangeJuice(milkCover); drink->Operation(); drink->~Drink(); break;}
		default: {Drink* drink = new OrangeJuice(none); drink->Operation(); drink->~Drink(); }
		}
		buy = false;
		break;
	}
	case 'B':
	{
		cout << "请选择你喜欢的饮料伴侣(输入错误那就默认什么都不给加了哦~）:" << endl;
		cout << "a:冰糖\nb:冰块\nc:奶盖\nd:什么都不加" << endl;
		cin >> op;
		switch (op)
		{
		case'a': {Drink* drink = new MilkTea(suger); drink->Operation(); drink->~Drink(); break; }
		case'b': {Drink* drink = new MilkTea(iceCube); drink->Operation(); drink->~Drink(); break; }
		case'c': {Drink* drink = new MilkTea(milkCover); drink->Operation(); drink->~Drink(); break; }
		default: {Drink* drink = new MilkTea(none); drink->Operation(); drink->~Drink(); }
		}
		buy = false;
		break;
	}
	case 'C':
	{
		cout << "请选择你喜欢的饮料伴侣(输入错误那就默认什么都不给加了哦~）:" << endl;
		cout << "a:冰糖\nb:冰块\nc:奶盖\nd:什么都不加" << endl;
		cin >> op;
		switch (op)
		{
		case'a': {Drink* drink = new Coffee(suger); drink->Operation(); drink->~Drink(); break; }
		case'b': {Drink* drink = new Coffee(iceCube); drink->Operation(); drink->~Drink(); break; }
		case'c': {Drink* drink = new Coffee(milkCover); drink->Operation(); drink->~Drink(); break; }
		default: {Drink* drink = new Coffee(none); drink->Operation(); drink->~Drink(); }
		}
		buy = false;
		break;
	}
	case 'D':
	{
		cout << "请选择你喜欢的饮料伴侣(输入错误那就默认什么都不给加了哦~）:" << endl;
		cout << "a:冰糖\nb:冰块\nc:奶盖\nd:什么都不加" << endl;
		cin >> op;
		switch (op)
		{
		case'a': {Drink* drink = new Colar(suger); drink->Operation(); drink->~Drink(); break; }
		case'b': {Drink* drink = new Colar(iceCube); drink->Operation(); drink->~Drink(); break; }
		case'c': {Drink* drink = new Colar(milkCover); drink->Operation(); drink->~Drink(); break; }
		default: {Drink* drink = new Colar(none); drink->Operation(); drink->~Drink(); }
		}
		buy = false;
		break;
	}
	default: {
		cout << "请输入正确的饮料种类编号哦~" << endl;
	}
	}
	}
	cout << "在买到了自己心仪的饮料后，你赶紧回去准备投入下半场的裁判工作中去了" << endl << endl;
	system("pause");
}
