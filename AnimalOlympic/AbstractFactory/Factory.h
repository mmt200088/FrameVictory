#pragma once
class Factory
{
public:
	//���л��߹����������ܹ�������ѩ�������г�ͷ������ϥ
	virtual void CreateGoggle() = 0; //������ѩ��
	virtual void CreateHelmet() = 0;//�������г�ͷ��
	virtual void CreateKneecap() = 0;//������ϥ
};

