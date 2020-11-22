#include "BuyGoodsFilter.h"
#include<iostream>
using namespace std;

void BuyGoodsFilter::execute() {
	int goodsid, num, porterid;
	string goodsid1, num1, porterid1;
	if (page->getGoodsNum() == 0 || page->getPorterNum() == 0) {
		cout << "物资或动物搬运工还是空荡荡的呢，请先添加新物资或动物搬运工" << endl;
		return;
	}
	cout << endl;
	cout << "当前的物资为：" << endl;
	page->listGoods();
	cout << endl;
	cout << "当前的动物搬运工为：" << endl;
	page->listPorter();
	cout << endl;
	cout << "请选择你要采购的物品序号、数量和搬运工序号：";
	cin >> goodsid1 >> num1 >> porterid1;
	cout << "指令审核中，请稍后......" << endl;
	_sleep(2 * 1000);
	if (toInt(num1) <= 0) {
		cout << "数量要为正数喔" << endl;
		return;
	}
	if (toInt(goodsid1) < 0 || toInt(porterid1) < 0) {
		cout << "序号要为非负数喔" << endl;
		return;
	}
	num = toInt(num1);
	goodsid = toInt(goodsid1);
	porterid = toInt(porterid1);
	if (goodsid < 0 || goodsid >= page->getGoodsNum() || porterid < 0 || porterid >= page->getPorterNum()) {
		cout << "物品或动物搬运工序号不在范围内" << endl;
		return;
	}
	if (page->goodss[goodsid]->getWeight() * num > page->porters[porterid]->getStrength()) {
		cout << page->porters[porterid]->getName() << "力量不足，请减少采购的数量或更换动物搬运工" << endl;
		return;
	}
	page->buyGoods(goodsid, num, porterid);
	cout << "成功采购" << num << "个" << page->goodss[goodsid]->getName() << endl;
}