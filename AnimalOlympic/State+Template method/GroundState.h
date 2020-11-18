#pragma once
#include<iostream>
#include<string>
using namespace std;

class SportsGround;

class GroundState
{
protected:
	//标注状态名的字符串
	const string _state_name;

public:
	//给子类使用的构造函数，因为是抽象类不会被外部调用
	GroundState(string state_name):
		_state_name(state_name)
	{
		cout << "GroundState::ctor" << endl;
	}

	//给子类使用的虚析构函数，因为是抽象类不会被外部调用
	virtual ~GroundState()
	{
		cout << "GroundState::dtor" << endl;
	}

public:	
	//获取状态名
	string getState() {return _state_name;}
	//维护场地，因为不同状态下维护方法不一样，所以是纯虚函数
	virtual void handle(SportsGround* ground) = 0;
};

