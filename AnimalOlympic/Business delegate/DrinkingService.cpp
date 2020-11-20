#include "DrinkingService.h"
#include <time.h> 
#include <string> 

void DrinkingService::doProcess()
{
	cout << "��ӭ�����˶����Ϸ��񴦣����ǽ��ṩ��������Ϊ�������η֣�" <<endl;	
	int num = 0;
	string line;	
	try 
	{
		cout << "��������Ҫ��ƿ���ϣ�";
		getline(cin, line);
		num = stoi(line);
		if (num <= 0)
			throw new exception();
	}
	catch (exception exc)
	{
		cout << "������һ����������"<<endl;
	}
	if (num > _drink_volume)
	{
		num = (_drink_volume + 1) / 2;
		_drink_volume -= num;
		cout << "�Բ������ϲ��㣬������ȡ"<<num<<"ƿ���ϡ�" << endl;
		cout << "��ȴ����ϵĵ�����" << endl;
		supplyDrink();
	}
	else
	{
		_drink_volume -= num;
		cout << "����ȡ" << num << "ƿ���ϡ�" << endl;
	}
	cout << "��ӭ���´ι��٣�" << endl;
}

void DrinkingService::supplyDrink()
{
	srand((unsigned)time(0));
	//������������
	int supply = rand() % 10;
	//һ�乲20ƿ����
	int drinkPer = 20;
	//��������
	_drink_volume += supply*drinkPer;
	//��ʾ��Ϣ
	cout << "���ϲ�������������"<<supply<<"�䣬��"<<supply*drinkPer<<"ƿ���ϡ�" << endl;
}
