#pragma once
#include "Filter.h"
//�ɹ��������ʵ�filter
class BuyGoodsFilter :
    public Filter
{
public:
    BuyGoodsFilter(Page* page) :Filter(page) {}
    ~BuyGoodsFilter() {}
    void execute();
};

