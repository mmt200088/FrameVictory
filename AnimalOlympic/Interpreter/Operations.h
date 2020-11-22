#pragma once
#include<iostream>
#include<string>
#include<map>
#include"Dish.h"
#include"Menu.h"
#include"Expression.h"

using namespace std;

class Operations:public Expression {
public:
	//���캯��
	Operations(Dish* s1) {
		e1 = s1;
		e2 = new Dish("t");
		e3 = new Dish("s");
	}

	//��д
	Operations(Dish* s1, Dish* s2) {
		e1 = s1;
		e2 = s2;
		e3 = new Dish("p");
	}

	//��д
	Operations(Dish* s1, Dish* s2, Dish* s3) {
		e1 = s1;
		e2 = s2;
		e3 = s3;
	}

	//��ÿ��С�Խ�����
	int interpret(Menu* menu) {
		return e1->interpret(menu) + e2->interpret(menu) + e3->interpret(menu);
	}

private:
	Dish *e1, *e2, *e3;
};