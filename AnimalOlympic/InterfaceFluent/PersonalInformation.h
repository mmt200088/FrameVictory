#pragma once
#include <string>

using namespace std;

class PersonalInformation
{
protected:
	string name = "δ��д";//����
	string gender = "δ��д";//�Ա�
	string birthday = "δ��д";//��������
	string address = "δ��д";//סַ
	string telnumber = "δ��д";//�绰����
public:
	void Setname();//��д����
	void Setgender();//��д�Ա�
	void Setbirthday();//��д��������
	void Setaddress();//��дסַ
	void Settelnumber();//��д�绰����
	void Show();//�鿴����д��Ϣ
	bool Done();//�����Ϣ�Ƿ���д����
};

