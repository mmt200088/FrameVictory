#pragma once
#include "Service.h"

class DrinkingService :public Service
{
protected:
	//������������ƿ����
	int _drink_volume=100;

	//�������
	void supplyDrink();
public:
	//ctor
	DrinkingService()
	{
		cout << "DrinkingService::ctor" << endl;
	}
	//dtor
	~DrinkingService()
	{
		cout << "DrinkingService::dtor" << endl;
	}
	//ʵ�֣�ִ�к���
	void doProcess() override;

};

