#include "LookGoodsFilter.h"
#include<iostream>
using namespace std;

void LookGoodsFilter::execute() {
	if (page->getGoodsNum() == 0) {
		cout << "���ʻ��ǿյ������أ��������������" << endl;
		return;
	}
	cout << endl;
	cout << "��ǰ������Ϊ��" << endl;
	page->listGoods();
}