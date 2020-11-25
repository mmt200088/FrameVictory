#pragma once
#include "Filter.h"
//添加搬运工的filter
class AddPorterFilter :
    public Filter
{
public:
    AddPorterFilter(Page* page) :Filter(page) {}
    ~AddPorterFilter() {}
    void execute();
};

