#pragma once
# include<iostream>
#include<string>
#include<map>
#include"Menu.h"
#include"Expression.h"

using namespace std;

class Dish:public Expression{
public:
	string dishname;//С����

	//Ĭ�Ϲ��캯��
	Dish() {

	}

	//��д
	Dish(string name) {
		dishname = name;
	}

	//�������ִӲ˵��л�ȡ���
	int interpret(Menu* menu) {
		return menu->getValue(dishname);
	}
};