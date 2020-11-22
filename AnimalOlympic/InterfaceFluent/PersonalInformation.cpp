#include "PersonalInformation.h"
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void PersonalInformation::Setname()
{
	cout << "请输入您的姓名：" << endl;
	cin >> name;
	getchar();
	cout << "您的姓名为：" << name << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Setgender()
{
	cout << "请输入您的性别：" << endl;
	cin >> gender;
	getchar();
	cout << "您的性别为：" << gender << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Setbirthday()
{
	cout << "请输入您的出生日期：" << endl;
	cin >> birthday;
	getchar();
	cout << "您的出生日期为：" << birthday << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Setaddress()
{
	cout << "请输入您的住址：" << endl;
	cin >> address;
	getchar();
	cout << "您的住址为：" << address << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Settelnumber()
{
	cout << "请输入您的电话号码：" << endl;
	cin >> telnumber;
	getchar();
	cout << "您的电话号码为：" << telnumber << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Show()
{
	cout << "您的姓名为：" << name << endl;
	Sleep(1 * 1000);
	cout << "您的性别为：" << gender << endl;
	Sleep(1 * 1000);
	cout << "您的出生日期为：" << birthday << endl;
	Sleep(1 * 1000);
	cout << "您的住址为：" << address << endl;
	Sleep(1 * 1000);
	cout << "您的电话号码为：" << telnumber << endl;
	Sleep(1 * 1000);
}

bool PersonalInformation::Done()
{
	if (name == "未填写" || gender == "未填写" || birthday == "未填写" || address == "未填写" || telnumber == "未填写") 
	{
		return false;
	}
	return true;
}
