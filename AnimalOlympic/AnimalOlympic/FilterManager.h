#pragma once
#include"Filter.h"
#include"LookGoodsFilter.h"
#include"LookPorterFilter.h"
#include"AddGoodsFilter.h"
#include"AddPorterFilter.h"
#include"BuyGoodsFilter.h"
#include"PortFilter.h"
//filter�Ĺ�����
class FilterManager
{
public:
	FilterManager(Page* page);
	~FilterManager() {}
	void execute();
	Filter** filters;//filter��ָ�뼯
};

