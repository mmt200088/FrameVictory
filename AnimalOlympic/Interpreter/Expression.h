#pragma once
#include<iostream>
#include"Menu.h"

using namespace std;

//�����࣬�ṩ�ӿ�
class Expression {
public:
	virtual int interpret(Menu* menu) = 0;
};