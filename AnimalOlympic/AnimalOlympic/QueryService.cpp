#include "QueryService.h"

void QueryService::doProcess()
{
	cout << "��ӭ��������ѯ���񴦣����ǽ�����������⣡" << endl;
	cout << "1 --- �������ھ���ʲô������" << endl
		<< "2 --- �Ҹõ�������Ϣ�Ͳ���ˮ�֣�" << endl
		<< "3 --- �Ҹõ�������Ʊ��" << endl
		<< "4 --- �ҿ��Խ��볡��Ϊѡ�ּ�����" << endl
		<< "5 --- �Ҹ���η��������ṩ�����" << endl;
	cout << "��������������(�����������)��";
	string line;
	getline(cin, line);
	switch (line[0])
	{
	case '1':cout <<"�ش�\n"<< answers[0] << endl; break;
	case '2':cout << "�ش�\n" << answers[1] << endl; break;
	case '3':cout << "�ش�\n" << answers[2] << endl; break;
	case '4':cout << "�ش�\n" << answers[3] << endl; break;
	case '5':cout << "�ش�\n" << answers[4] << endl; break;
	default:cout << "��������ȷ��ţ�" << endl; break;
	}
	cout << "��ӭ���´ι��٣�" << endl;
}
