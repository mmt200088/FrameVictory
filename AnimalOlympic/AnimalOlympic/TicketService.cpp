#include "TicketService.h"

void TicketService::doProcess()
{
	cout << "��ӭ������������Ʊ���񴦣�" << endl;
	cout << "������ "<<_game_name<<" ��������Ʊ����Ŀǰ���۳�"<<_sales<<"��Ʊ��" << endl;
	int num = 0;
	string line;
	try
	{
		cout << "��������Ҫ����Ʊ(һ����10��)��";
		getline(cin, line);
		num = stoi(line);
		if (num <= 0)
			throw new exception();
		if (num > 10)
			throw 10;
		cout << "��Ϊ������" << num << "��Ʊ��" << endl;
		_sales += num;
	}
	catch (exception exc)
	{
		cout << "������һ����������" << endl;
	}
	catch (int i)
	{
		cout << "һ����10��Ʊ��" << endl;
	}
	cout << "��ӭ���´ι��٣�" << endl;
}
