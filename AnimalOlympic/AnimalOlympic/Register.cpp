#include<iostream>
#include<string>
#include<vector>
#include"Register.h"

using namespace std;


void Register::test() {
	Tree* myTree = new Tree();//�ﾶ����

	cout << "Registerģʽ��飺\n";
	cout << "ע��ģʽ��Register Pattern)���ȫ�ֹ�����������Ҳ��ע����ģʽ��\n";
	cout << "����������ע�����У�����ʵ��ȫ�ֹ���\n\n\n";
	Sleep(2000);
	cout << "InlineTempģʽ��飺\n";
	cout << "������ʱ������Inline Temp�������ʱ���������ع������⡣";
	cout << "������ֻ����ʱ����ʱ��ֱ���ø�ֵ���ʽ������������ڱ����У�����Ϊ����С��������֡�\n\n\n";
	Sleep(2 * 1000);
	cout << "���¼�飺\n";
	cout << "ÿһ�������ʼǰ��ѡ���Ǳ����Ƚ���ǩ�����ſ��Բμӱ�����\n";
	Sleep(2 * 1000);
	cout << "��Ϊ���߱�����ǩ���٣��������������߱�����ǩ������ɣ�\n";
	Sleep(2 * 1000);
	cout << "*************************************************\n"
		<< "����Խ������²�����\n"
		<< "A������С������ǩ��������ʾ���μӵ��߱�����ѡ����С���ӡ�С����С���󡢳���¹��С���飩\n"
		<< "B����ѯ�����Ѿ�ǩ���˵�С���\n"
		<< "C����ѯĳһ��ѡ���Ƿ��Ѿ����ǩ����\n"
		<< "Q���˳����ԣ�\n"
		<< "*************************************************\n";

	int mm = 1;
	while (mm == 1)
	{
		cout << "\n����������ͨ������A��B��C��D��ѡ������Ҫ�������飺\n";
		char M;
		cin >> M;
		switch (M)
		{
		case 'A':
		{
			string name;
			cout << "������Ҫǩ����С��������֣�";
			cin >> name;
			myTree->add(name);
			break;
		}

		case 'B':
		{	
			myTree->getAll();
			break;
		}

		case 'C':
		{
			string name;
			cout << "������Ҫ���ҵ�С��������֣�";
			cin >> name;
			myTree->checkOne(name);
			break;
		}
		case 'Q':
		{
			mm = 2;
			break;
		}
		default: {
			cout << "���Ķ�������ǰ�����е��������ǵĹ����ߣ�������ABCD��ѡ��һ����\n";
			break;
		}

		}

	}
}
