#pragma once
#include<iostream>
#include"Menu.h"

using namespace std;

//抽象类，提供接口
class Expression {
public:
	virtual int interpret(Menu* menu) = 0;
};