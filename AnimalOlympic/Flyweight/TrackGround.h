#pragma once
#include"SportsGround.h"
#include"GroundState.h"

//������
class TrackGround :public SportsGround 
{
protected:
	//�ܵ������,���Ϊ5�����Ϊ0��ÿ����ɨ��ص������ֵ��
	int _track_cleaness=5;
	//½��ҽ�ƶ�,trueΪ����
	bool _medic=false;
public:
	//���캯��
	TrackGround(const string& name, GroundState& state):
		SportsGround(name,&state)
	{
		cout << "TrackGround::ctor" << endl;
	}
	//��������
	~TrackGround() 
	{
		cout << "TrackGround::dtor" << endl;
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
