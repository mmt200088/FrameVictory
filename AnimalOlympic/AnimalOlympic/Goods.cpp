#include<iostream>
#include "Goods.h"
using namespace std;
#include"Operation.h"

Goods::Goods(string classname, string name, int num, int weight) {
	this->classname = classname;
	this->name = name;
	this->num = num;
	this->weight = weight;
}

void Goods::Accept(Operation* operation) {
	operation->visit(this);
}

string Goods::getClassname() {
	return classname;
}

string Goods::getName() {
	return name;
}

int Goods::getNum() {
	return num;
}

int Goods::getWeight() {
	return weight;
}