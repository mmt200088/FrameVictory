#pragma once
#include "Filter.h"
//查看搬运工的filter
class LookPorterFilter :
    public Filter
{
public:
    LookPorterFilter(Page* page) :Filter(page) {}
    ~LookPorterFilter() {}
    void execute();
};

