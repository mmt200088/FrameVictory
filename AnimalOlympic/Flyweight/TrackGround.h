#pragma once
#include"SportsGround.h"
#include"GroundState.h"

//径场地
class TrackGround :public SportsGround 
{
protected:
	//跑道整洁度,最高为5，最低为0，每次清扫会回到最高数值。
	int _track_cleaness=5;
	//陆上医疗队,true为就绪
	bool _medic=false;
public:
	//构造函数
	TrackGround(const string& name, GroundState& state):
		SportsGround(name,&state)
	{
		cout << "TrackGround::ctor" << endl;
	}
	//析构函数
	~TrackGround() 
	{
		cout << "TrackGround::dtor" << endl;
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
