#include "LookPorterFilter.h"
#include<iostream>
using namespace std;

void LookPorterFilter::execute() {
	if (page->getPorterNum() == 0) {
		cout << "������˹����ǿյ������أ�������Ӷ�����˹�" << endl;
		return;
	}
	cout << endl;
	cout << "��ǰ�Ķ�����˹�Ϊ��" << endl;
	page->listPorter();
}