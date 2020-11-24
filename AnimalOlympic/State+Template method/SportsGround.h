#pragma once
#include<iostream>
#include<string>
#include"GroundState.h"
using namespace std;

class SportsGround
{
protected:
	//������
	string _name;
	//����������״̬
	GroundState* _state;
	//���ؽ�����״̬��trueΪ����
	bool _keepout_line = false;
	//���ذ�ȫ��״̬��trueΪ����
	bool _safety_gate = false;

public:
	//������ʹ�õĹ��캯������Ϊ�ǳ����಻�ᱻ�ⲿ����
	SportsGround(const string& name,GroundState* state):
		_name(name),_state(state)
	{
		cout << "SportsGround::ctor" << endl;
	}

	//������ʹ�õ���������������Ϊ�ǳ����಻�ᱻ�ⲿ����
	virtual ~SportsGround()
	{
		cout << "SportsGround::dtor" << endl;
	}

public:	
	//�ı�״̬
	void changeState(GroundState& state)
	{
		cout << "�ı䳡�أ���" << _name << "�� ��״̬Ϊ��" << state.getState()<< endl;
		_state = &state;
	}
	
	//ʹ�ó��أ���Ϊ��ͬ����ʹ�÷�����һ���������Ǵ��麯��
	virtual void useGround() = 0;

	//ά������
	void maintainGround() 
	{
		_state->handle(this);
	}

	//�����ǳ��صĸ���ά���
	//�ڱ�����ʼǰ����������
	void keepOut() 
	{
		_safety_gate = false;
		_keepout_line = true;
		cout << "����׼����ʼ���ڱ��������������ߡ�" << endl;
	}

	//�ڱ�����ʼǰ��פ��ȫ������
	virtual void setSafeTeam() = 0;

	//�ڱ�����ʼǰ׼����Ϣ��
	virtual void prepareWaitingRoom() = 0;

	//�ڱ�����ʼǰ�㲥֪ͨ
	void broadcast()
	{
		cout << "����������ʼ���㲥֪ͨѡ��������볡��" << endl;
	}

	//�ڱ�����������������
	virtual void cleanWaste() = 0;
	
	//�ڱ����������Ż���������
	virtual void purifyGround() = 0;

	//�ڱ���������������ȫ�ŷ�ֹ����ƻ�
	void setSafeGate()
	{
		_safety_gate = true;
		cout << "���󳡵�ά�����������ϰ�ȫ���Է�����ƻ���" << endl;
	}

	//���û���������˶�����Ŀǰ��״��
	virtual void printGroundStatus() = 0;
};

