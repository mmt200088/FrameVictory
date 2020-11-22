#pragma once
#include "Filter.h"
//采购已有物资的filter
class BuyGoodsFilter :
    public Filter
{
public:
    BuyGoodsFilter(Page* page) :Filter(page) {}
    ~BuyGoodsFilter() {}
    void execute();
};

