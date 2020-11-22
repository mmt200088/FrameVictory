#pragma once
#include<iostream>
using namespace std;
class List;
//搬运工
class Porter
{
public:
	string name;
	int strength;
	Porter(string name, int strength);
	Porter() {}
	void Accept(List* list);
	string getName();//获取名称
	int getStrength();//获取力量
};

