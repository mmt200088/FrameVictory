#pragma once
#ifndef BRIDGE_H
#define BRIDGE_H

class AnimalizeImplement
{
public:
	virtual void Operation()=0;
	virtual ~AnimalizeImplement() {};
protected:
	AnimalizeImplement() {};
};

class Suger:public AnimalizeImplement
{
public:
	Suger() {};
	//����
	void Operation();
	~Suger() {};
};

class IceCube :public AnimalizeImplement
{
public:
	IceCube() {};
	//�ӱ���
	void Operation();
	~IceCube() {};
};

class MilkCover :public AnimalizeImplement
{
public:
	MilkCover() {};
	//���̸�
	void Operation();
	~MilkCover() {};
};

class None :public AnimalizeImplement
{
public:
	None() {};
	//ʲô������
	void Operation();
	~None() {};
};

class Drink
{
public:
	virtual void Operation() =0;//�����Ͻ��в����Ľӿ�
	virtual ~Drink() {};
protected:
	Drink() {};
};

class OrangeJuice:public Drink
{
public:
	OrangeJuice(AnimalizeImplement* imp);
	//���캯����ָ����Ҫ�Գ�֭���еĲ����Ӷ������һ�����Ի��ĳ�֭
	virtual void Operation();
	virtual ~OrangeJuice();
private:
	AnimalizeImplement* _imp;
};

class MilkTea:public Drink
{
public:
	MilkTea(AnimalizeImplement *imp);
	//���캯����ָ����Ҫ���̲���еĲ����Ӷ������һ�����Ի����̲�
	virtual void Operation();
	virtual ~MilkTea();
private:
	AnimalizeImplement* _imp;
};

class Coffee:public Drink
{
public:
	Coffee(AnimalizeImplement *imp);
	//���캯����ָ����Ҫ�Կ��Ƚ��еĲ����Ӷ������һ�����Ի��Ŀ���
	virtual void Operation();
	virtual ~Coffee();
private:
	AnimalizeImplement* _imp;
};

class Colar:public Drink
{
public:
	Colar(AnimalizeImplement *imp);
	//���캯����ָ����Ҫ�Կ��ֽ��еĲ����Ӷ������һ�����Ի��Ŀ���
	virtual void Operation();
	virtual ~Colar();
private:
	AnimalizeImplement* _imp;
};

class Bridge
{
public:
	//���Ժ���
	void test();
};
#endif