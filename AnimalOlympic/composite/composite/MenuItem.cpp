#include<iostream>
#include<vector>
#include<string>
#include<list>
#include "MenuComponent.h"
#include<Windows.h>
#include "MenuItem.h"
void MenuItem::print()
{
	cout << "MenuItem:print:项目名称：" << m_name << endl << "时间：" << m_time << " 地点：" << m_place << endl;
	cout << "介绍：" << m_description << endl << endl;
	Sleep(500);
}