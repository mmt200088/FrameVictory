#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<list>
#include "MenuComponent.h"
#include<Windows.h>
using namespace std;
class MenuItem : public MenuComponent
{
public:
	//构造函数
	MenuItem(string name, string place, string time, string description) :MenuComponent(name, place, time, description)
	{
		m_name = name;
		m_place = place;
		m_time = time;
		m_description = description;
	}
	virtual ~MenuItem() {}
	//打印菜单
	virtual void print()  
	{
		cout << "项目名称：" << m_name << endl<<"时间：" << m_time << " 地点：" << m_place << endl;
		cout << "介绍：" << m_description << endl<<endl;
		Sleep(500);
	}
}; 