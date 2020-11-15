#pragma once
#include"SportsGround.h"
#include"GroundState.h"

//状态：场地使用前
class GroundBeforeUsingState :public GroundState
{
public:
	//构造函数
	GroundBeforeUsingState():
		GroundState("BeforeUsing")
	{
		cout << "GroundBeforeUsingState::ctor" << endl;
	}

	//析构函数
	~GroundBeforeUsingState()
	{
		cout << "GroundBeforeUsingState::dtor" << endl;
	}

	//重写
	void handle(SportsGround* ground) override;
};