#pragma once
#include<iostream>
using namespace std;
#include"Food.h"
#include"Equipment.h"
#include"Tool.h"
#include"Goods.h"
//设计模式visitor
class Operation {
public:
	virtual ~Operation() {}
	virtual void visit(Goods* goods) {}
	Operation() {}
};