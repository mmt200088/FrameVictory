#pragma once
#include "Filter.h"
//查看物资的filter
class LookGoodsFilter :
    public Filter
{
public:
    LookGoodsFilter(Page* page) :Filter(page) {}
    ~LookGoodsFilter() {}
    void execute();
};

