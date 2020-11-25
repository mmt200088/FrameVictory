#pragma once
#include"Page.h"
//设计模式interception filter
class Filter
{
public:
	Filter(Page* page);
	virtual ~Filter() {}
	virtual void execute() = 0;
	Page* page;
	int toInt(string str);
};