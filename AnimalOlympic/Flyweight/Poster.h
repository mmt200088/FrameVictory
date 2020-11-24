#pragma once
#include<string>
#include<iostream>
using namespace std;

class Poster
{
protected:
	//海报标语
	string _slogan;
	//海报尺寸：高，单位为cm
	int _height;
	//海报尺寸：宽，单位为cm
	int _width;
	//海报墨汁的颜色
	string _color;
	//海报张贴的地点
	string _place;
public:
	//默认构造函数，要求提供海报的版式属性，颜色和地点与版式无关
	Poster(const string& s, int h, int w) :
		_slogan(s), _height(h), _width(w)
	{cout << "Poster::ctor: creating mode: '"<<s<<"'"<<endl
		  <<"height: "<<h<<" width: "<<w<<endl;}

	//拷贝构造函数，其实flyweight是根据已存在对象，不创造新的对象，本不需要此函数。
	//但是为了记录历史的海报信息加入此函数，此函数与本设计模式无关，属于prototype的内容。
	Poster(const Poster& p)
	{
		//复制模板信息
		_slogan = p._slogan;
		_height = p._height;
		_width = p._width;
		//剩下两个属性不会复制，因为它们不会和模板相同
		cout << "Poster::ctor:using mode: '"<<_slogan<<"' to create obj "<<endl;
	}

	//dtor
	~Poster()
	{
		cout << "Poster::dtor" <<"(slogan: '"<<_slogan<<"')"<<endl;
	}

	//获取标语，只读
	string& getSlogan() 
	{
		return _slogan;
	}

	//获取高，只读
	int getHeight()
	{
		return _height;
	}

	//获取宽，只读
	int getWidth()
	{
		return _width;
	}

	//获取地点
	string& getPlace()
	{
		return _place;
	}

	//设置地点
	void setPlace(const string& p)
	{
		_place = p;
	}

	//获取颜色
	string& getColor()
	{
		return _color;
	}

	//设置地点
	void setColor(const string& c)
	{
		_color = c;
	}

	//打印海报信息
	void print();
};

