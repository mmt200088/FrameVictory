#include "TicketService.h"

void TicketService::doProcess()
{
	cout << "欢迎您来到比赛售票服务处！" << endl;
	cout << "这里是 "<<_game_name<<" 比赛的售票处，目前已售出"<<_sales<<"张票。" << endl;
	int num = 0;
	string line;
	try
	{
		cout << "请问您需要几张票(一人限10张)：";
		getline(cin, line);
		num = stoi(line);
		if (num <= 0)
			throw new exception();
		if (num > 10)
			throw 10;
		cout << "已为您购买" << num << "张票。" << endl;
		_sales += num;
	}
	catch (exception exc)
	{
		cout << "请输入一个正整数！" << endl;
	}
	catch (int i)
	{
		cout << "一人限10张票！" << endl;
	}
	cout << "欢迎您下次光临！" << endl;
}
