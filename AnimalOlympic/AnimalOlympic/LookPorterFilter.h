#pragma once
#include "Filter.h"
//�鿴���˹���filter
class LookPorterFilter :
    public Filter
{
public:
    LookPorterFilter(Page* page) :Filter(page) {}
    ~LookPorterFilter() {}
    void execute();
};

