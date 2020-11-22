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
	cout << "��ѡ����Ҫ������ʵ����ࣨ1��ʳ�2���豸��3�����ߣ���";
	cin >> order;
	cout << "ָ������У����Ժ�......" << endl;
	_sleep(2 * 1000);
	if (order[0] != '1' && order[0] != '2' && order[0] != '3') {
		cout << "��ѡ����������ǻ�û��ร�" << endl;
		return;
	}
	cout << endl;
	cout << "���������ʵ����ơ�������������";
	cin >> name >> num1 >> weight1;
	cout << "ָ������У����Ժ�......" << endl;
	_sleep(2 * 1000);
	if (toInt(num1)<=0 || toInt(weight1)<=0) {
		cout << "����������ҪΪ������ร�" << endl;
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
	cout << "��������" << name << "�ɹ�����ֿ⣡" << endl;
}