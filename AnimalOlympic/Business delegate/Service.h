#pragma once
#include<iostream>
using namespace std;

class Service
{
public:
	//ctor
	Service()
	{
		cout << "Service::ctor" << endl;
	}
	//dtor
	~Service()
	{
		cout << "Service::dtor" << endl;
	}	
	//ִ�к���
	virtual void doProcess()=0;
};

