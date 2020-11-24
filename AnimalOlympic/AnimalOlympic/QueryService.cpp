#include "QueryService.h"

void QueryService::doProcess()
{
	cout << "欢迎您来到咨询服务处，我们将解答您的问题！" << endl;
	cout << "1 --- 现在正在举行什么比赛？" << endl
		<< "2 --- 我该到哪里休息和补充水分？" << endl
		<< "3 --- 我该到哪里买票？" << endl
		<< "4 --- 我可以进入场内为选手加油吗？" << endl
		<< "5 --- 我该如何反馈服务，提供意见？" << endl;
	cout << "请问您的问题是(输入问题序号)：";
	string line;
	getline(cin, line);
	switch (line[0])
	{
	case '1':cout <<"回答：\n"<< answers[0] << endl; break;
	case '2':cout << "回答：\n" << answers[1] << endl; break;
	case '3':cout << "回答：\n" << answers[2] << endl; break;
	case '4':cout << "回答：\n" << answers[3] << endl; break;
	case '5':cout << "回答：\n" << answers[4] << endl; break;
	default:cout << "请输入正确序号！" << endl; break;
	}
	cout << "欢迎您下次光临！" << endl;
}
