#pragma once
#include<iostream>
using namespace std;
class List;
//���˹�
class Porter
{
public:
	string name;
	int strength;
	Porter(string name, int strength);
	Porter() {}
	void Accept(List* list);
	string getName();//��ȡ����
	int getStrength();//��ȡ����
};

