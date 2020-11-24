#pragma once
#include<iostream>
using namespace std;
#include"Service.h"

class ServiceDelegate
{
protected:
	//������
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
	//�ı����ҵ��
	void setService(Service& service)
	{
		_service = &service;
	}
	//ִ�к���
	void doService();
};

