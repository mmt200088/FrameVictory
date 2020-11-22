#include "InterfaceFluent.h"
#include "PersonalInformation.h"
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void InterfaceFluent::test()
{
	cout << "#######################################################################" << endl
		<< "欢迎来到场景：动物运动会进场信息登记" << endl
		<< "本场景使用的设计模式为：InterfaceFluent流接口" << endl
		<< "设计模式介绍：在软件工程中，流接口模式（Fluent Interface）是指实现一种" << endl
		<< "面向对象的、能提高代码可读性的 API 的方法，其目的就是可以编写具有自然" << endl
		<< "语言一样可读性的代码。Fluent Interface提供易于阅读，流畅的接口，通常模" << endl
		<< "仿领域特定的语言。使用此模式会产生几乎可以像人类语言一样阅读的代码。" << endl
		<< "设计模式在场景中的应用：最近正值新冠肺炎高发时期，出于安全考虑，每位进" << endl
		<< "场的观众都要登记基本的个人信息，以方便进行风险控制。" << endl
		;
	cout << endl << endl;
	Sleep(5 * 1000);
	cout << "历经千辛万苦，你终于抢到了动物运动会的观赛券。运动会当天，你来到了现" << endl
		<< "场，在正式进场之前，由于防控疫情的规定，你需要如实地登记自己的个人信息" << endl
		<< "包括：姓名、性别、出生日期、住址、电话号码。" << endl
		;
	bool end = false;
	//填写个人信息
	PersonalInformation info;
	while (!end) {
		cout << endl << "请选择你的操作：" << endl
			<< "1、填写姓名——请输入1" << endl
			<< "2、填写性别——请输入2" << endl
			<< "3、填写出生日期——请输入3" << endl
			<< "4、填写住址——请输入4" << endl
			<< "5、填写电话号码——请输入5" << endl
			<< "6、查看已填写信息——请输入6" << endl
			<< "7、完成填写并退出——请输入7" << endl
			;
		string str;
		getline(cin, str);
		switch (str[0]) {
		case'1':
			info.Setname();
			break;
		case'2':
			info.Setgender();
			break;
		case'3':
			info.Setbirthday();
			break;
		case'4':
			info.Setaddress();
			break;
		case'5':
			info.Settelnumber();
			break;
		case'6':
			info.Show();
			break;
		case'7':
			if (info.Done()) 
			{
				end = true;
				cout << "感谢您的填写！！！" << endl;
				Sleep(2 * 1000);
				info.Show();
			}			
			else 
			{
				cout << "请填写所有信息！！！" << endl;
				Sleep(2 * 1000);
				info.Show();
			}
			break;
		default:cout << "请输入1、2、3、4、5、6、7！！！" << endl;
			Sleep(1 * 1000);
			break;
		}
	}
}
