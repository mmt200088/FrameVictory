#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<list>
#include "MenuComponent.h"
using namespace std;
class MenuItem : public MenuComponent
{
public:
	//���캯��
	MenuItem(string name, string place, string time, string description) :MenuComponent(name, place, time, description)
	{
		m_name = name;
		m_place = place;
		m_time = time;
		m_description = description;
	}
	virtual ~MenuItem() {}
	//��ӡ�˵�
	virtual void print()  
	{
		cout << "��Ŀ���ƣ�" << m_name << endl<<"ʱ�䣺" << m_time << " �ص㣺" << m_place << endl;
		cout << "���ܣ�" << m_description << endl<<endl;

	}
}; 