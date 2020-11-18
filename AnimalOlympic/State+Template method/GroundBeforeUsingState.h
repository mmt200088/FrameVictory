#pragma once
#include"SportsGround.h"
#include"GroundState.h"

//״̬������ʹ��ǰ
class GroundBeforeUsingState :public GroundState
{
public:
	//���캯��
	GroundBeforeUsingState():
		GroundState("BeforeUsing")
	{
		cout << "GroundBeforeUsingState::ctor" << endl;
	}

	//��������
	~GroundBeforeUsingState()
	{
		cout << "GroundBeforeUsingState::dtor" << endl;
	}

	//��д
	void handle(SportsGround* ground) override;
};