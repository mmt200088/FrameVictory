#pragma once
#include<iostream>

using namespace std;
class Operation;
//物资
class Goods
{
public:
	string classname;
	string name;
	int num;
	int weight;
	Goods(string classname, string name, int num, int weight);
	Goods() {};
	void Accept(Operation* operation);
	string getClassname();//获取种类名称
	string getName();//获取名称
	int getNum();//获取数量
	int getWeight();//获取重量
};

