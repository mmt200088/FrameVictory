#include "List.h"
#include<iostream>
using namespace std;

void List::visit(Goods* goods) {
	cout << "���ࣺ" << goods->getClassname() << "�����ƣ�" << goods->getName() << "��������" << goods->getNum() << "��������" << goods->getWeight() << endl;
}

void List::visit(Porter* porter) {
	cout  << "���ƣ�" << porter->getName() << "��������" << porter->getStrength() << endl;
}