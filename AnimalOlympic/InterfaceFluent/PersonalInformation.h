#pragma once
#include <string>

using namespace std;

class PersonalInformation
{
protected:
	string name = "未填写";//姓名
	string gender = "未填写";//性别
	string birthday = "未填写";//出生日期
	string address = "未填写";//住址
	string telnumber = "未填写";//电话号码
public:
	void Setname();//填写姓名
	void Setgender();//填写性别
	void Setbirthday();//填写出生日期
	void Setaddress();//填写住址
	void Settelnumber();//填写电话号码
	void Show();//查看已填写信息
	bool Done();//检查信息是否填写完整
};

