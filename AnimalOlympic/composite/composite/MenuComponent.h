#ifndef MenuComponentH
#define MenuComponentH
#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
class MenuComponent
{
public:
	string m_name;//体育项目名称
	string m_place;//体育项目地点
	string m_time;//体育项目时间
	string m_description;//体育项目描述
	MenuComponent(string name, string place, string time, string description)
	{


	}

	virtual ~MenuComponent() {}
	//添加体育项目的函数
	virtual void Add(MenuComponent *pCom) {}
	//移除体育项目的函数
	virtual void Remove(MenuComponent *pCom) {}
	//显示体育项目的函数
	virtual void Show(int depth) {}
	//打印体育项目
	virtual void print() {}

};
#endif