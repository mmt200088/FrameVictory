#include "LookGoodsFilter.h"
#include<iostream>
using namespace std;

void LookGoodsFilter::execute() {
	if (page->getGoodsNum() == 0) {
		cout << "物资还是空荡荡的呢，请先添加新物资" << endl;
		return;
	}
	cout << endl;
	cout << "当前的物资为：" << endl;
	page->listGoods();
}