#include "FilterManager.h"
#include<iostream>
#include<istream>
#include<string>
#include<Windows.h>
using namespace std;

FilterManager::FilterManager(Page* page) {
	filters = new Filter * [6];
	filters[0] = new LookGoodsFilter(page);
	filters[1] = new LookPorterFilter(page);
	filters[2] = new AddGoodsFilter(page);
	filters[3] = new AddPorterFilter(page);
	filters[4] = new BuyGoodsFilter(page);
	filters[5] = new PortFilter(page);
}

void FilterManager::execute() {
	string order;
	cout << "-----动物运动会物资管理系统-----" << endl;
	cout << "你可以对物资系统进行如下操作" << endl;
	cout << "操作列表：" << endl;
	cout << "0、退出" << endl;
	cout << "1、查看物资" << endl;
	cout << "2、查看动物搬运工" << endl;
	cout << "3、添加新物资" << endl;
	cout << "4、添加动物搬运工" << endl;
	cout << "5、采购已有物资" << endl;
	cout << "6、搬运（搬出）物资" << endl;
	for (;;) {
		cout << endl;
		cout << "请选择你要进行的操作（输入序号）：";
		cin >> order;
		cout << "指令审核中，请稍后......" << endl;
		Sleep(2 * 1000);
		if (order[0] == '0') {
			cout << "感谢你的使用，再见！" << endl;
			break;
		}
		if (order[0] == '1') {
			filters[0]->execute();
			continue;
		}
		if (order[0] == '2') {
			filters[1]->execute();
			continue;
		}
		if (order[0] == '3') {
			filters[2]->execute();
			continue;
		}
		if (order[0] == '4') {
			filters[3]->execute();
			continue;
		}
		if (order[0] == '5') {
			filters[4]->execute();
			continue;
		}
		if (order[0] == '6') {
			filters[5]->execute();
			continue;
		}
		cout << "你选择的功能我们暂时还没有喔！" << endl;
		continue;
	}
}