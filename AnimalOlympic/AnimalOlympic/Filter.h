#pragma once
#include"Page.h"
//���ģʽinterception filter
class Filter
{
public:
	Filter(Page* page);
	virtual ~Filter() {}
	virtual void execute() = 0;
	Page* page;
	int toInt(string str);
};