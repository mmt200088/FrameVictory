#pragma once
#include "Filter.h"
//��Ӱ��˹���filter
class AddPorterFilter :
    public Filter
{
public:
    AddPorterFilter(Page* page) :Filter(page) {}
    ~AddPorterFilter() {}
    void execute();
};

