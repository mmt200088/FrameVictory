#pragma once
#include<map>
#include<string>
#include<iostream>
#include"Poster.h"
using namespace std;

class PosterFactory
{
protected:
	//��¼ģ���������
	map<string, Poster*> _modeTable;

public:
	//ctor
	PosterFactory() 
	{
		cout << "PosterFactory::ctor" << endl;
	}
	//dtor
	~PosterFactory()
	{
		for (auto p : _modeTable)
		{
			delete p.second;
		}
		cout << "PosterFactory::dtor" << endl;
	}

	//ͨ��stringΪ�����ҵ���Ӧ��ģ�庣��
	Poster* getPoster(const string& s);

	//�����к���ģ��������û�����
	void printPosters();
};

