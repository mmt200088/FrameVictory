#pragma once
#include"SportsGround.h"
#include"GroundState.h"

//状态：场地使用后
class GroundAfterUsedState :public GroundState
{
public:
	//构造函数
	GroundAfterUsedState() :
		GroundState("AfterUsed")
	{
		cout << "GroundAfterUsedState::ctor" << endl;
	}

	//析构函数
	~GroundAfterUsedState()
	{
		cout << "GroundAfterUsedState::dtor" << endl;
	}

	//重写
	void handle(SportsGround* ground) override;
};
