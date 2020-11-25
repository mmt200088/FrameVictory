#pragma once
#include "Filter.h"
//搬运（搬出）物资的filter
class PortFilter :
    public Filter
{
public:
    PortFilter(Page* page) :Filter(page) {}
    ~PortFilter() {}
    void execute();
};

