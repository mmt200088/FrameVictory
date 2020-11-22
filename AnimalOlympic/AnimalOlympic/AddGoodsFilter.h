#pragma once
#include "Filter.h"
//添加新物资的filter
class AddGoodsFilter :
    public Filter
{
public:
    AddGoodsFilter(Page* page) :Filter(page) {}
    ~AddGoodsFilter() {}
    void execute();
};

