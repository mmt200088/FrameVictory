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
	string _dishesName;//菜肴名
	vector<string> _ingredients;//原料清单
	vector<string> _flavoring;//佐料清单
	string _cookingMethod;//烹饪方式
	string _cookingTime;//烹饪时间
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
	//设定菜肴名称
	virtual void SetDishesName() { cout << "MenuBuilder::Nam" << endl; }
	//设定食材
	virtual void BuildIngredients() { cout << "MenuBuilder::Ing" << endl; }
	//设定调料
	virtual void BuildFlavoring() { cout << "MenuBuilder::Fla" << endl; }
	//设定烹饪方式
	virtual void BuildMethod() { cout << "MenuBuilder::Met" << endl; }
	//设定烹饪时间
	virtual void BuildTime() { cout << "MenuBuilder::Tim" << endl; }
	//返回成品的方法
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
	//根据客人点菜来烹饪食物
	Dishes* Cook(MenuBuilder *menuBuilder);
};

class Builder
{
public:
	void Test();
};
#endif
