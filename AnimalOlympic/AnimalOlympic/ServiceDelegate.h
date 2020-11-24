#pragma once
#include<iostream>
using namespace std;
#include"Service.h"

class ServiceDelegate
{
protected:
	//代理者
	Service* _service;
public:
	//ctor
	ServiceDelegate(Service& service) :_service(&service)
	{
		cout << "ServiceDelegate::ctor" << endl;
	}
	//dtor
	~ServiceDelegate()
	{
		cout << "ServiceDelegate::dtor" << endl;
	}
	//改变代理业务
	void setService(Service& service)
	{
		_service = &service;
	}
	//执行函数
	void doService();
};

