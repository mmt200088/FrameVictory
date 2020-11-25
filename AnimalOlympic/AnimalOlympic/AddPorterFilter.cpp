#include "AddPorterFilter.h"
#include"Porter.h"
#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

void AddPorterFilter::execute() {
	string name;
	string strength1;
	int strength;
	Porter* porter = new Porter();
	cout << endl;
	cout << "请输入动物搬运工的名称和力量：";
	cin >> name >> strength1;
	cout << "指令审核中，请稍后......" << endl;
	Sleep(2 * 1000);
	if (toInt(strength1) <= 0) {
		cout << "动物搬运工的力量要为正数喔！" << endl;
		return;
	}
	strength = toInt(strength1);
	porter = new Porter(name, strength);
	page->addPorter(porter);
	cout << "当当当，" << name << "成功成为动物搬运工！" << endl;
}