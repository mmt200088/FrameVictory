#pragma once
#include<string>
#include "Service.h"

class TicketService :public Service
{
protected:
	//������
	string _game_name;
	//����Ʊ��
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
	//ʵ�֣�ִ�к���
	void doProcess() override;
};

