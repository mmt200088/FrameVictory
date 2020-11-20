#include "BusinessDelegate.h"

void BusinessDelegate::test()
{
	//��ӭ��䣬�������ܱ�ģ��ĳ��������ܺ�ϸ��
	cout << "*********************************************************" << endl
		 << "*           ��ӭ�����������˶�����ڷ�������            *" << endl
		 << "*                                                       *" << endl
		 << "* �ﾶ��Ὺʼ�ˣ�����һ��ʮ��ʢ��ı�����              *" << endl
		 << "* Ϊ����ί���ر������˹��ڷ���������Ϊ�ڶ�����ṩ����*" << endl
		 << "* ��ģ�齫ʹ��business delegate���ģʽ��               *" << endl
		 << "* Ϊ���ṩ��ѯ������ˮ�֡�������Ʊ��ҵ��              *" << endl
	 	 << "* ��ʹ��ҵ������ķ������OCP����                   *" << endl
		 << "*                                                       *" << endl
		 << "*********************************************************" << endl;
	
	//��������
	DrinkingService drink_serv;
	string name = "�����˶����ﾶ���";
	TicketService ticket_serv(name);
	QueryService query_serv;
	//������
	ServiceDelegate dele(drink_serv);
	//�ͻ�
	Client client(dele);
	bool is_finish = false;
	cout  << "��ӭ�������ڷ������ģ���ѡ������Ҫ�ķ���"<< endl;
	try
	{
		do
		{
			string line;
			cout <<endl<<"<0-�˳�  ,1-�˶����Ϸ���, 2-��ѯ����, 3-Ʊ�����>:" ;
			getline(cin, line);
			switch (line[0])
			{
			case '0':is_finish = true; break;
			case '1':dele.setService(drink_serv); break;
			case '2':dele.setService(query_serv); break;
			case '3':dele.setService(ticket_serv); break;
			default:cout << "�����������ַ��� 0,1,2,3" << endl; break;
			}
			//ִ�з���
			client.doService();
		} while (!is_finish);
	}
	catch (exception& exc)
	{
		cerr << exc.what() << endl;
	}
}
