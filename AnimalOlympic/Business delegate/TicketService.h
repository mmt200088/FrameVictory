#pragma once
#include<string>
#include "Service.h"

class TicketService :public Service
{
protected:
	//比赛名
	string _game_name;
	//已售票数
	int _sales=0;
public:
	//ctor
	TicketService(string& name):_game_name(name)
	{
		cout << "TicketService::ctor" << endl;
	}
	//dtor
	~TicketService()
	{
		cout << "TicketService::dtor" << endl;
	}
	//实现：执行函数
	void doProcess() override;
};

