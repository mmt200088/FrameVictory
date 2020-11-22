#include "AddGoodsFilter.h"
#include"Goods.h"
#include<iostream>
#include<sstream>
using namespace std;

void AddGoodsFilter::execute() {
	string order;
	string name;
	string num1, weight1;
	int num, weight;
	Goods* goods = new Goods();
	cout << endl;
	cout << "请选择你要添加物资的种类（1、食物；2、设备；3、道具）：";
	cin >> order;
	cout << "指令审核中，请稍后......" << endl;
	_sleep(2 * 1000);
	if (order[0] != '1' && order[0] != '2' && order[0] != '3') {
		cout << "你选择的种类我们还没有喔！" << endl;
		return;
	}
	cout << endl;
	cout << "请输入物资的名称、数量和重量：";
	cin >> name >> num1 >> weight1;
	cout << "指令审核中，请稍后......" << endl;
	_sleep(2 * 1000);
	if (toInt(num1)<=0 || toInt(weight1)<=0) {
		cout << "数量和重量要为正整数喔！" << endl;
		return;
	}
	num = toInt(num1);
	weight = toInt(weight1);
	if (order[0] == '1') {
		goods = new Food(name, num, weight);
	}
	if (order[0] == '2') {
		goods = new Equipment(name, num, weight);
	}
	if (order[0] == '3') {
		goods = new Tool(name, num, weight);
	}
	page->addGoods(goods);
	cout << "当当当，" << name << "成功收入仓库！" << endl;
}