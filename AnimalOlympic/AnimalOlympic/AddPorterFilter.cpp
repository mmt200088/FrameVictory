#include "AddPorterFilter.h"
#include"Porter.h"
#include<iostream>
using namespace std;

void AddPorterFilter::execute() {
	string name;
	string strength1;
	int strength;
	Porter* porter = new Porter();
	cout << endl;
	cout << "�����붯����˹������ƺ�������";
	cin >> name >> strength1;
	cout << "ָ������У����Ժ�......" << endl;
	_sleep(2 * 1000);
	if (toInt(strength1) <= 0) {
		cout << "������˹�������ҪΪ����ร�" << endl;
		return;
	}
	strength = toInt(strength1);
	porter = new Porter(name, strength);
	page->addPorter(porter);
	cout << "��������" << name << "�ɹ���Ϊ������˹���" << endl;
}