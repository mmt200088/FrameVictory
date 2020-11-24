#pragma once
#include<string>
#include<vector>
#include<iostream>
#include"PosterFactory.h"
using namespace std;

class PosterManager
{
protected:
	//��¼���������ĺ�����Ϣ
	vector<Poster*> _posters;
	//manager������Ĺ���
	PosterFactory* _posterfac;

public:
	//ctor
	PosterManager(PosterFactory& fac):
		_posterfac(&fac)
	{
		cout << "PosterManager::ctor" << endl;
	}
	//dtor
	~PosterManager()
	{
		cout << "PosterManager::dtor" << endl;
	}
	//��Ӻ��������û�ѯ��
	void addPoster();

};

