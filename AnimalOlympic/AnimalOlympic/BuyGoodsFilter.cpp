#include "BuyGoodsFilter.h"
#include<iostream>
using namespace std;

void BuyGoodsFilter::execute() {
	int goodsid, num, porterid;
	string goodsid1, num1, porterid1;
	if (page->getGoodsNum() == 0 || page->getPorterNum() == 0) {
		cout << "���ʻ�����˹����ǿյ������أ�������������ʻ�����˹�" << endl;
		return;
	}
	cout << endl;
	cout << "��ǰ������Ϊ��" << endl;
	page->listGoods();
	cout << endl;
	cout << "��ǰ�Ķ�����˹�Ϊ��" << endl;
	page->listPorter();
	cout << endl;
	cout << "��ѡ����Ҫ�ɹ�����Ʒ��š������Ͱ��˹���ţ�";
	cin >> goodsid1 >> num1 >> porterid1;
	cout << "ָ������У����Ժ�......" << endl;
	_sleep(2 * 1000);
	if (toInt(num1) <= 0) {
		cout << "����ҪΪ�����" << endl;
		return;
	}
	if (toInt(goodsid1) < 0 || toInt(porterid1) < 0) {
		cout << "���ҪΪ�Ǹ����" << endl;
		return;
	}
	num = toInt(num1);
	goodsid = toInt(goodsid1);
	porterid = toInt(porterid1);
	if (goodsid < 0 || goodsid >= page->getGoodsNum() || porterid < 0 || porterid >= page->getPorterNum()) {
		cout << "��Ʒ������˹���Ų��ڷ�Χ��" << endl;
		return;
	}
	if (page->goodss[goodsid]->getWeight() * num > page->porters[porterid]->getStrength()) {
		cout << page->porters[porterid]->getName() << "�������㣬����ٲɹ������������������˹�" << endl;
		return;
	}
	page->buyGoods(goodsid, num, porterid);
	cout << "�ɹ��ɹ�" << num << "��" << page->goodss[goodsid]->getName() << endl;
}