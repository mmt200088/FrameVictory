#include "PersonalInformation.h"
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

void PersonalInformation::Setname()
{
	cout << "����������������" << endl;
	cin >> name;
	getchar();
	cout << "��������Ϊ��" << name << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Setgender()
{
	cout << "�����������Ա�" << endl;
	cin >> gender;
	getchar();
	cout << "�����Ա�Ϊ��" << gender << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Setbirthday()
{
	cout << "���������ĳ������ڣ�" << endl;
	cin >> birthday;
	getchar();
	cout << "���ĳ�������Ϊ��" << birthday << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Setaddress()
{
	cout << "����������סַ��" << endl;
	cin >> address;
	getchar();
	cout << "����סַΪ��" << address << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Settelnumber()
{
	cout << "���������ĵ绰���룺" << endl;
	cin >> telnumber;
	getchar();
	cout << "���ĵ绰����Ϊ��" << telnumber << endl;
	Sleep(2 * 1000);
}

void PersonalInformation::Show()
{
	cout << "��������Ϊ��" << name << endl;
	Sleep(1 * 1000);
	cout << "�����Ա�Ϊ��" << gender << endl;
	Sleep(1 * 1000);
	cout << "���ĳ�������Ϊ��" << birthday << endl;
	Sleep(1 * 1000);
	cout << "����סַΪ��" << address << endl;
	Sleep(1 * 1000);
	cout << "���ĵ绰����Ϊ��" << telnumber << endl;
	Sleep(1 * 1000);
}

bool PersonalInformation::Done()
{
	if (name == "δ��д" || gender == "δ��д" || birthday == "δ��д" || address == "δ��д" || telnumber == "δ��д") 
	{
		return false;
	}
	return true;
}
