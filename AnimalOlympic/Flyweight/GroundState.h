#pragma once
#include<iostream>
#include<string>
using namespace std;

class SportsGround;

class GroundState
{
protected:
	//��ע״̬�����ַ���
	const string _state_name;

public:
	//������ʹ�õĹ��캯������Ϊ�ǳ����಻�ᱻ�ⲿ����
	GroundState(string state_name):
		_state_name(state_name)
	{
		cout << "GroundState::ctor" << endl;
	}

	//������ʹ�õ���������������Ϊ�ǳ����಻�ᱻ�ⲿ����
	virtual ~GroundState()
	{
		cout << "GroundState::dtor" << endl;
	}

public:	
	//��ȡ״̬��
	string getState() {return _state_name;}
	//ά�����أ���Ϊ��ͬ״̬��ά��������һ���������Ǵ��麯��
	virtual void handle(SportsGround* ground) = 0;
};

