#pragma once
#include<iostream>
using namespace std;
#include"ServiceDelegate.h"

class Client
{
protected:
	//������
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
	//ִ�к���
	void doService();
};

