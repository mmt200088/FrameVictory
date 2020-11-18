#pragma once
#include<string>
#include<iostream>
using namespace std;

class Poster
{
protected:
	//��������
	string _slogan;
	//�����ߴ磺�ߣ���λΪcm
	int _height;
	//�����ߴ磺����λΪcm
	int _width;
	//����ī֭����ɫ
	string _color;
	//���������ĵص�
	string _place;
public:
	//Ĭ�Ϲ��캯����Ҫ���ṩ�����İ�ʽ���ԣ���ɫ�͵ص����ʽ�޹�
	Poster(const string& s, int h, int w) :
		_slogan(s), _height(h), _width(w)
	{cout << "Poster::ctor: creating mode: '"<<s<<"'"<<endl
		  <<"height: "<<h<<" width: "<<w<<endl;}

	//�������캯������ʵflyweight�Ǹ����Ѵ��ڶ��󣬲������µĶ��󣬱�����Ҫ�˺�����
	//����Ϊ�˼�¼��ʷ�ĺ�����Ϣ����˺������˺����뱾���ģʽ�޹أ�����prototype�����ݡ�
	Poster(const Poster& p)
	{
		//����ģ����Ϣ
		_slogan = p._slogan;
		_height = p._height;
		_width = p._width;
		//ʣ���������Բ��Ḵ�ƣ���Ϊ���ǲ����ģ����ͬ
		cout << "Poster::ctor:using mode: '"<<_slogan<<"' to create obj "<<endl;
	}

	//dtor
	~Poster()
	{
		cout << "Poster::dtor" <<"(slogan: '"<<_slogan<<"')"<<endl;
	}

	//��ȡ���ֻ��
	string& getSlogan() 
	{
		return _slogan;
	}

	//��ȡ�ߣ�ֻ��
	int getHeight()
	{
		return _height;
	}

	//��ȡ��ֻ��
	int getWidth()
	{
		return _width;
	}

	//��ȡ�ص�
	string& getPlace()
	{
		return _place;
	}

	//���õص�
	void setPlace(const string& p)
	{
		_place = p;
	}

	//��ȡ��ɫ
	string& getColor()
	{
		return _color;
	}

	//���õص�
	void setColor(const string& c)
	{
		_color = c;
	}

	//��ӡ������Ϣ
	void print();
};

