#pragma once
#include "Service.h"

class DrinkingService :public Service
{
protected:
	//饮料数量，以瓶记数
	int _drink_volume=100;

	//添加饮料
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
	//实现：执行函数
	void doProcess() override;

};

