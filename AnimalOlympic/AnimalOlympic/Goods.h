#pragma once
#include<iostream>

using namespace std;
class Operation;
//����
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
	string getClassname();//��ȡ��������
	string getName();//��ȡ����
	int getNum();//��ȡ����
	int getWeight();//��ȡ����
};

