#pragma once
#include "Filter.h"
//���ˣ���������ʵ�filter
class PortFilter :
    public Filter
{
public:
    PortFilter(Page* page) :Filter(page) {}
    ~PortFilter() {}
    void execute();
};

