#pragma once
#include"Goods.h"
#include"Porter.h"
#include"List.h"
#include"Add.h"
#include"Reduce.h"
//设计模式facade
class Page
{
public:
	Page();
	int getGoodsNum();//获取物资种数
	int getPorterNum();//获取搬运工数量
	void addGoods(Goods* goods);//添加新物资
	void addPorter(Porter* porter);//添加搬运工
	void buyGoods(int goodsid, int num,int porterid);//采购已有物资
	void listGoods();//查看所有物资
	void listPorter();//查看所有搬运工
	void Port(int goodsid,int num,int porterid);//搬运（搬出）物资

	int goodsNum;
	int porterNum;
	Goods** goodss;//物资的指针集
	Porter** porters;//搬运工的指针集
	List* list;
	Add* add;
	Reduce* reduce;
};

