#pragma once
#include<iostream>
using namespace std;
#include"ServiceDelegate.h"

class Client
{
protected:
	//代理者
	ServiceDelegate* _delegate;
public:
	//ctor
	Client(ServiceDelegate& delegate) :_delegate(&delegate)
	{
		cout << "Client::ctor" << endl;
	}
	//dtor
	~Client()
	{
		cout << "Client::dtor" << endl;
	}
	//执行函数
	void doService();
};

