#pragma once
#include<map>
#include<string>
#include<iostream>
#include"Poster.h"
using namespace std;

class PosterFactory
{
protected:
	//记录模板的索引表
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

	//通过string为索引找到对应的模板海报
	Poster* getPoster(const string& s);

	//将所有海报模板输出给用户界面
	void printPosters();
};

