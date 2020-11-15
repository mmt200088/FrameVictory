#pragma once
#include"SportsGround.h"
#include"GroundState.h"

//泳池场地
class PoolGround :public SportsGround
{
protected:
	//泳池水质，最高为5，最低为0，每次清扫和净化后会回到最高数值。
	int _water_cleaness = 5;
	//水上救生队,true为就绪
	bool _lifeguard = false;
public:
	//构造函数
	PoolGround(const string& name, GroundState& state) :
		SportsGround(name, &state)
	{
		cout << "PoolGround::ctor" << endl;
	}
	//析构函数
	~PoolGround()
	{
		cout << "PoolGround::dtor" << endl;
	}

protected:
	//实现：使用场地
	void useGround() override;

	//实现：在比赛开始前入驻安全救助队
	void setSafeTeam() override;

	//实现：在比赛开始前准备休息室
	void prepareWaitingRoom() override;

	//实现：在比赛结束后清理垃圾
	void cleanWaste() override;

	//实现：在比赛结束后优化场地质量
	void purifyGround() override;

};