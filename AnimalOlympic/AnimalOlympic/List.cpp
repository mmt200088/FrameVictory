#include "List.h"
#include<iostream>
using namespace std;

void List::visit(Goods* goods) {
	cout << "种类：" << goods->getClassname() << "，名称：" << goods->getName() << "，数量：" << goods->getNum() << "，重量：" << goods->getWeight() << endl;
}

void List::visit(Porter* porter) {
	cout  << "名称：" << porter->getName() << "，力量：" << porter->getStrength() << endl;
}