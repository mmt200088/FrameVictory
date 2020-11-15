#pragma once
#include"SportsGround.h"
#include"GroundState.h"

//Ӿ�س���
class PoolGround :public SportsGround
{
protected:
	//Ӿ��ˮ�ʣ����Ϊ5�����Ϊ0��ÿ����ɨ�;������ص������ֵ��
	int _water_cleaness = 5;
	//ˮ�Ͼ�����,trueΪ����
	bool _lifeguard = false;
public:
	//���캯��
	PoolGround(const string& name, GroundState& state) :
		SportsGround(name, &state)
	{
		cout << "PoolGround::ctor" << endl;
	}
	//��������
	~PoolGround()
	{
		cout << "PoolGround::dtor" << endl;
	}

protected:
	//ʵ�֣�ʹ�ó���
	void useGround() override;

	//ʵ�֣��ڱ�����ʼǰ��פ��ȫ������
	void setSafeTeam() override;

	//ʵ�֣��ڱ�����ʼǰ׼����Ϣ��
	void prepareWaitingRoom() override;

	//ʵ�֣��ڱ�����������������
	void cleanWaste() override;

	//ʵ�֣��ڱ����������Ż���������
	void purifyGround() override;

};