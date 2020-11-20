#include "BusinessDelegate.h"

void BusinessDelegate::test()
{
	//欢迎语句，用来介绍本模块的场景、功能和细节
	cout << "*********************************************************" << endl
		 << "*           欢迎来到：动物运动会观众服务中心            *" << endl
		 << "*                                                       *" << endl
		 << "* 田径大会开始了，这是一场十分盛大的比赛，              *" << endl
		 << "* 为此组委会特别设立了观众服务中心来为众多观众提供服务。*" << endl
		 << "* 本模块将使用business delegate设计模式，               *" << endl
		 << "* 为您提供咨询、补充水分、购买门票等业务。              *" << endl
	 	 << "* 并使用业务层分离的方法达成OCP法则。                   *" << endl
		 << "*                                                       *" << endl
		 << "*********************************************************" << endl;
	
	//创建服务
	DrinkingService drink_serv;
	string name = "动物运动会田径大会";
	TicketService ticket_serv(name);
	QueryService query_serv;
	//代理者
	ServiceDelegate dele(drink_serv);
	//客户
	Client client(dele);
	bool is_finish = false;
	cout  << "欢迎来到观众服务中心，请选择您想要的服务。"<< endl;
	try
	{
		do
		{
			string line;
			cout <<endl<<"<0-退出  ,1-运动饮料服务处, 2-咨询服务处, 3-票务服务处>:" ;
			getline(cin, line);
			switch (line[0])
			{
			case '0':is_finish = true; break;
			case '1':dele.setService(drink_serv); break;
			case '2':dele.setService(query_serv); break;
			case '3':dele.setService(ticket_serv); break;
			default:cout << "请输入以下字符： 0,1,2,3" << endl; break;
			}
			//执行服务
			client.doService();
		} while (!is_finish);
	}
	catch (exception& exc)
	{
		cerr << exc.what() << endl;
	}
}
