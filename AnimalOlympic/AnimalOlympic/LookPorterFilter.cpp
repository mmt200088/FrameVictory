#include "LookPorterFilter.h"
#include<iostream>
using namespace std;

void LookPorterFilter::execute() {
	if (page->getPorterNum() == 0) {
		cout << "动物搬运工还是空荡荡的呢，请先添加动物搬运工" << endl;
		return;
	}
	cout << endl;
	cout << "当前的动物搬运工为：" << endl;
	page->listPorter();
}