#ifndef MenuComponentH
#define MenuComponentH
#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
class MenuComponent
{
public:
	string m_name;//������Ŀ����
	string m_place;//������Ŀ�ص�
	string m_time;//������Ŀʱ��
	string m_description;//������Ŀ����
	MenuComponent(string name, string place, string time, string description)
	{


	}

	virtual ~MenuComponent() {}
	//���������Ŀ�ĺ���
	virtual void Add(MenuComponent *pCom) {}
	//�Ƴ�������Ŀ�ĺ���
	virtual void Remove(MenuComponent *pCom) {}
	//��ʾ������Ŀ�ĺ���
	virtual void Show(int depth) {}
	//��ӡ������Ŀ
	virtual void print() {}

};
#endif