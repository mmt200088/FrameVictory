#pragma once
#ifndef BUILDER_H
#define BUILDER_H

#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

class Dishes
{
private:
	string _dishesName;//������
	vector<string> _ingredients;//ԭ���嵥
	vector<string> _flavoring;//�����嵥
	string _cookingMethod;//��⿷�ʽ
	string _cookingTime;//���ʱ��
public:
	void SetFoodName(string name);
	void AddIngredients(vector<string> ing);
	void AddFlavoring(vector<string> fla);
	void SetMethod(string method);
	void SetTime(string time);

	void Show();
};


class MenuBuilder
{
public:
	//�趨��������
	virtual void SetDishesName() { cout << "MenuBuilder::Nam" << endl; }
	//�趨ʳ��
	virtual void BuildIngredients() { cout << "MenuBuilder::Ing" << endl; }
	//�趨����
	virtual void BuildFlavoring() { cout << "MenuBuilder::Fla" << endl; }
	//�趨��⿷�ʽ
	virtual void BuildMethod() { cout << "MenuBuilder::Met" << endl; }
	//�趨���ʱ��
	virtual void BuildTime() { cout << "MenuBuilder::Tim" << endl; }
	//���س�Ʒ�ķ���
    virtual Dishes*  GetDishes() 
	{ 
		cout << "MenuBuilder::Get" << endl;
		return new Dishes();
	}
};

class MapoTofuBuilder :public MenuBuilder
{
public:
	MapoTofuBuilder();
	virtual void SetDishesName();
	virtual void BuildIngredients();
	virtual void BuildFlavoring();
	virtual void BuildMethod();
	virtual void BuildTime();
	virtual Dishes* GetDishes();
private:
	Dishes *_dishes;
};

class BuddhaJumpingBuilder :public MenuBuilder
{
public:
	BuddhaJumpingBuilder();
	virtual void SetDishesName();
	virtual void BuildIngredients();
	virtual void BuildFlavoring();
	virtual void BuildMethod();
	virtual void BuildTime();
	virtual Dishes* GetDishes();
private:
	Dishes *_dishes;
};

class BraisedEggplantBuilder :public MenuBuilder
{
public:
	BraisedEggplantBuilder();
	virtual void SetDishesName();
	virtual void BuildIngredients();
	virtual void BuildFlavoring();
	virtual void BuildMethod();
	virtual void BuildTime();
	virtual Dishes* GetDishes();
private:
	Dishes *_dishes;
};

class Chef
{
public:
	//���ݿ��˵�������ʳ��
	Dishes* Cook(MenuBuilder *menuBuilder);
};

class Builder
{
public:
	void Test();
};
#endif
