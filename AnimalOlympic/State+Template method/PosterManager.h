#pragma once
#include<string>
#include<vector>
#include<iostream>
#include"PosterFactory.h"
using namespace std;

class PosterManager
{
protected:
	//记录所有张贴的海报信息
	vector<Poster*> _posters;
	//manager所管理的工厂
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
	//添加海报，向用户询问
	void addPoster();

};

