#pragma once
#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

//产品抽象类
class Tickets {
public:
	//展示票面信息，子类重写
	virtual void showTickets()=0;
	
	//获取门票价值
	int getValue() {
		return value;
	}
protected:
	string sports;//项目名称
	string time;//开始时间
	int value;//门票价值
};