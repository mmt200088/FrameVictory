#include<iostream>
#include<vector>
#include<string>
#include<list>
#include "MenuComponent.h"
#include<Windows.h>
#include "MenuItem.h"
void MenuItem::print()
{
	cout << "MenuItem:print:��Ŀ���ƣ�" << m_name << endl << "ʱ�䣺" << m_time << " �ص㣺" << m_place << endl;
	cout << "���ܣ�" << m_description << endl << endl;
	Sleep(500);
}