#pragma once
#include "Filter.h"
//��������ʵ�filter
class AddGoodsFilter :
    public Filter
{
public:
    AddGoodsFilter(Page* page) :Filter(page) {}
    ~AddGoodsFilter() {}
    void execute();
};

