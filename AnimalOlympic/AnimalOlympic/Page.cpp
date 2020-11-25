#include "Page.h"

Page::Page() {
	goodsNum = 0;
	porterNum = 0;
	goodss = new Goods * ();
	porters = new Porter * ();
	list = new List();
	add = new Add();
	reduce = new Reduce();
}

void Page::addGoods(Goods* goods) {
	goodss[goodsNum] = goods;
	goodsNum++;
}

void Page::addPorter(Porter* porter) {
	porters[porterNum] = porter;
	porterNum++;
}

void Page::listGoods() {
	for (int i = 0; i < goodsNum; i++) {
		cout <<"ÐòºÅ£º"<< i << ',';
		goodss[i]->Accept(list);
		//list->visit(goodss[i]);
	}
}

void Page::listPorter() {
	for (int i = 0; i < porterNum; i++) {
		cout << "ÐòºÅ£º" << i << ',';
		porters[i]->Accept(list);
		//list->visit(porters[i]);
	}
}

void Page::Port(int goodsid,int num,int porterid) {
	for (int i = 0; i < num; i++) {
		goodss[goodsid]->Accept(reduce);
		//reduce->visit(goodss[goodsid]);
	}
}

void Page::buyGoods(int goodsid, int num, int porterid) {
	goodss[goodsid]->num += num;
}

int Page::getGoodsNum() {
	return goodsNum;
}

int Page::getPorterNum() {
	return porterNum;
}
