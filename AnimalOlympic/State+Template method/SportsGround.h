#pragma once
#include<iostream>
#include<string>
#include"GroundState.h"
using namespace std;

class SportsGround
{
protected:
	//场地名
	string _name;
	//场地所处的状态
	GroundState* _state;
	//场地禁入线状态，true为开启
	bool _keepout_line = false;
	//场地安全门状态，true为开启
	bool _safety_gate = false;

public:
	//给子类使用的构造函数，因为是抽象类不会被外部调用
	SportsGround(const string& name,GroundState* state):
		_name(name),_state(state)
	{
		cout << "SportsGround::ctor" << endl;
	}

	//给子类使用的虚析构函数，因为是抽象类不会被外部调用
	virtual ~SportsGround()
	{
		cout << "SportsGround::dtor" << endl;
	}

public:	
	//改变状态
	void changeState(GroundState& state)
	{
		cout << "改变场地：‘" << _name << "’ 的状态为：" << state.getState()<< endl;
		_state = &state;
	}
	
	//使用场地，因为不同场地使用方法不一样，所以是纯虚函数
	virtual void useGround() = 0;

	//维护场地
	void maintainGround() 
	{
		_state->handle(this);
	}

	//以下是场地的各种维护活动
	//在比赛开始前设立禁入线
	void keepOut() 
	{
		_safety_gate = false;
		_keepout_line = true;
		cout << "比赛准备开始：在比赛区设立禁入线。" << endl;
	}

	//在比赛开始前入驻安全救助队
	virtual void setSafeTeam() = 0;

	//在比赛开始前准备休息室
	virtual void prepareWaitingRoom() = 0;

	//在比赛开始前广播通知
	void broadcast()
	{
		cout << "比赛即将开始：广播通知选手与观众入场。" << endl;
	}

	//在比赛结束后清理垃圾
	virtual void cleanWaste() = 0;
	
	//在比赛结束后优化场地质量
	virtual void purifyGround() = 0;

	//在比赛结束后设立安全门防止外界破坏
	void setSafeGate()
	{
		_safety_gate = true;
		cout << "赛后场地维护结束：拉上安全门以防外界破坏。" << endl;
	}

	//向用户界面输出运动场地目前的状况
	virtual void printGroundStatus() = 0;
};

