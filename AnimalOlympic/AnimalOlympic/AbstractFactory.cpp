#include "AbstractFactory.h"
#include "FengFactory.h"
#include "LongFactory.h"
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void AbstractFactory::test() 
{
	cout << "#####################################################################" << endl
		<< "欢迎来到场景：动物运动会护具生产" << endl
		<< "本场景使用的设计模式为：AbstractFactory抽象工厂" << endl
		<< "设计模式介绍：抽象工厂模式提供一个创建一系列相关或相互依赖对象的接口," << endl
		<< "而无须指定它们具体的类；具体的工厂负责实现具体的产品实例。这就能够使" << endl
		<< "用抽象的接口来创建一组相关产品，而不需要知道或关心实际生产出的具体产" << endl
		<< "品是什么，这样就可以从具体产品中被解耦。" << endl
		<< "设计模式在场景中的应用：运动会的部分项目具有一定的危险性，出于保护运" << endl
		<< "动员的目的，运动员可按照自身需求或比赛规定佩戴护具。现在需要有工厂生" << endl
		<< "产不同种类（部位）、不同大小的护具，以满足需求。" << endl
		<< "现有对应不同动物的各种具体工厂，如：龙工厂、凤凰工厂。还有对应不同部" << endl
		<< "位的抽象护具种类，如：滑雪镜、自行车头盔。通过向具体工厂下订单，即可" << endl
		<< "生产出具体的护具，如：龙的滑雪镜、凤凰的自行车头盔。" << endl
		;
	cout << endl << endl;
	Sleep(5 * 1000);
	cout << "你是动物运动会的后勤负责之一，现在你需要为部分运动员订购护具。你需" << endl
		<< "要为龙和凤凰分别订购滑雪镜、自行车头盔、护膝。你只需要向某个工厂发出" << endl
		<< "订单，工厂便会生产出对应的护具。" << endl
		;
	bool end = false;
	//创建龙工厂
	LongFactory Long;
	//创建凤凰工厂
	FengFactory Feng;
	while (!end) {
		cout << endl << "请选择你的操作：" << endl
			<< "1、订购龙的滑雪镜——请输入1" << endl
			<< "2、订购龙的自行车头盔——请输入2" << endl
			<< "3、订购龙的护膝——请输入3" << endl
			<< "4、订购凤凰的滑雪镜——请输入4" << endl
			<< "5、订购凤凰的自行车头盔——请输入5" << endl
			<< "6、订购凤凰的护膝——请输入6" << endl
			<< "7、退出——请输入7" << endl
			;
		string str;
		getline(cin, str);
		switch (str[0]) {
		case'1':
			Long.CreateGoggle();
			break;
		case'2':
			Long.CreateHelmet();
			break;
		case'3':
			Long.CreateKneecap();
			break;
		case'4':
			Feng.CreateGoggle();
			break;
		case'5':
			Feng.CreateHelmet();
			break;
		case'6':
			Feng.CreateKneecap();
			break;
		case'7':
			end = true;
			break;
		default:cout << "请输入1、2、3、4、5、6、7！！！" << endl;
			Sleep(1 * 1000);
			break;
		}
	}
}