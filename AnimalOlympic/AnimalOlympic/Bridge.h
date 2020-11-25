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
	//加糖
	void Operation();
	~Suger() {};
};

class IceCube :public AnimalizeImplement
{
public:
	IceCube() {};
	//加冰块
	void Operation();
	~IceCube() {};
};

class MilkCover :public AnimalizeImplement
{
public:
	MilkCover() {};
	//加奶盖
	void Operation();
	~MilkCover() {};
};

class None :public AnimalizeImplement
{
public:
	None() {};
	//什么都不加
	void Operation();
	~None() {};
};

class Drink
{
public:
	virtual void Operation() =0;//对饮料进行操作的接口
	virtual ~Drink() {};
protected:
	Drink() {};
};

class OrangeJuice:public Drink
{
public:
	OrangeJuice(AnimalizeImplement* imp);
	//构造函数，指定将要对橙汁进行的操作从而构造出一杯个性化的橙汁
	virtual void Operation();
	virtual ~OrangeJuice();
private:
	AnimalizeImplement* _imp;
};

class MilkTea:public Drink
{
public:
	MilkTea(AnimalizeImplement *imp);
	//构造函数，指定将要对奶茶进行的操作从而构造出一杯个性化的奶茶
	virtual void Operation();
	virtual ~MilkTea();
private:
	AnimalizeImplement* _imp;
};

class Coffee:public Drink
{
public:
	Coffee(AnimalizeImplement *imp);
	//构造函数，指定将要对咖啡进行的操作从而构造出一杯个性化的咖啡
	virtual void Operation();
	virtual ~Coffee();
private:
	AnimalizeImplement* _imp;
};

class Colar:public Drink
{
public:
	Colar(AnimalizeImplement *imp);
	//构造函数，指定将要对可乐进行的操作从而构造出一杯个性化的可乐
	virtual void Operation();
	virtual ~Colar();
private:
	AnimalizeImplement* _imp;
};

class Bridge
{
public:
	//测试函数
	void test();
};
#endif