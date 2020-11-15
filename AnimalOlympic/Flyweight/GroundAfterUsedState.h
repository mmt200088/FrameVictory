#pragma once
#include"SportsGround.h"
#include"GroundState.h"

//״̬������ʹ�ú�
class GroundAfterUsedState :public GroundState
{
public:
	//���캯��
	GroundAfterUsedState() :
		GroundState("AfterUsed")
	{
		cout << "GroundAfterUsedState::ctor" << endl;
	}

	//��������
	~GroundAfterUsedState()
	{
		cout << "GroundAfterUsedState::dtor" << endl;
	}

	//��д
	void handle(SportsGround* ground) override;
};
