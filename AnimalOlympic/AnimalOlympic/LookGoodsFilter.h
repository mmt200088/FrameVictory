#pragma once
#include "Filter.h"
//�鿴���ʵ�filter
class LookGoodsFilter :
    public Filter
{
public:
    LookGoodsFilter(Page* page) :Filter(page) {}
    ~LookGoodsFilter() {}
    void execute();
};

