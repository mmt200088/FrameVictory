#pragma once
# include<iostream>
#include<string>
#include<map>
#include"Menu.h"
#include"Expression.h"

using namespace std;

class Dish:public Expression{
public:
	string dishname;//小吃名

	//默认构造函数
	Dish() {

	}

	//重写
	Dish(string name) {
		dishname = name;
	}

	//根据名字从菜单中获取金额
	int interpret(Menu* menu) {
		return menu->getValue(dishname);
	}
};