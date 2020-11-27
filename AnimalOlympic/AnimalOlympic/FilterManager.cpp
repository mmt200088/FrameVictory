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
	cout << "-----�����˶������ʹ���ϵͳ-----" << endl;
	cout << "����Զ�����ϵͳ�������²���" << endl;
	cout << "�����б�" << endl;
	cout << "0���˳�" << endl;
	cout << "1���鿴����" << endl;
	cout << "2���鿴������˹�" << endl;
	cout << "3�����������" << endl;
	cout << "4����Ӷ�����˹�" << endl;
	cout << "5���ɹ���������" << endl;
	cout << "6�����ˣ����������" << endl;
	for (;;) {
		cout << endl;
		cout << "��ѡ����Ҫ���еĲ�����������ţ���";
		cin >> order;
		cout << "ָ������У����Ժ�......" << endl;
		Sleep(2 * 1000);
		if (order[0] == '0') {
			cout << "��л���ʹ�ã��ټ���" << endl;
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
		cout << "��ѡ��Ĺ���������ʱ��û��ร�" << endl;
		continue;
	}
}