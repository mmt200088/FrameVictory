#include "Bridge.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

OrangeJuice::OrangeJuice(AnimalizeImplement *imp)
{
	cout << "�������ڰ�����.....";
	Sleep(1 * 1000);
	cout << "��������եȡ��֭.....";
	Sleep(1 * 1000);
	cout << "��������װ��......" << endl;
	Sleep(1 * 1000);
	this->_imp = imp;
}

OrangeJuice::~OrangeJuice()
{
	delete this->_imp;
	this->_imp = NULL;
}

void OrangeJuice::Operation()
{
	this->_imp->Operation();
}

MilkTea::MilkTea(AnimalizeImplement *imp)
{
	cout << "�������ڼ�ţ��.....";
	Sleep(1 * 1000);
	cout << "�������ڼӺ��.....";
	Sleep(1 * 1000);
	cout << "�������ڽ������......" << endl;
	Sleep(1 * 1000);
	this->_imp = imp;
}

MilkTea::~MilkTea()
{
	delete this->_imp;
	this->_imp = NULL;
}

void MilkTea::Operation()
{
	this->_imp->Operation();
}

Coffee::Coffee(AnimalizeImplement *imp)
{
	cout << "������ĥ���ȶ�.....";
	Sleep(1 * 1000);
	cout << "�������ڳ�ҿ���.....";
	Sleep(1 * 1000);
	cout << "��������װ��......" << endl;
	Sleep(1 * 1000);
	this->_imp = imp;
}

Coffee::~Coffee()
{
	delete this->_imp;
	this->_imp = NULL;
}

void Coffee::Operation()
{
	cout << "�������ھ����ð��¿��ֻ��ǿɿڿ���.....";
	Sleep(4 * 1000);
	cout << "�������������˾���.....";
	Sleep(1 * 1000);
	cout << "��������װ��......" << endl;
	Sleep(1 * 1000);
	this->_imp->Operation();
}

Colar::Colar(AnimalizeImplement *imp)
{
	this->_imp = imp;
}

Colar::~Colar()
{
	delete this->_imp;
	this->_imp = NULL;
}

void Colar::Operation()
{
	this->_imp->Operation();
}

void Suger::Operation()
{
	cout << "���ڼ���......" << endl;
	Sleep(2 * 1000);
	cout << "��ɹ������������������������ڲ෽���ڼ�ʱȡ��Ŷ~" << endl << endl;
}

void IceCube::Operation()
{
	cout << "���ڼӱ���......" << endl;
	Sleep(2 * 1000);
	cout << "��ɹ������������������������ڲ෽���ڼ�ʱȡ��Ŷ~" << endl << endl;
}

void MilkCover::Operation()
{
	cout << "���ڼ��̸�......" << endl;
	Sleep(2 * 1000);
	cout << "��ɹ������������������������ڲ෽���ڼ�ʱȡ��Ŷ~" << endl << endl;
}

void None::Operation()
{
	cout << "��ɹ������������������������ڲ෽���ڼ�ʱȡ��Ŷ~" << endl << endl;
}

void Bridge::test()
{
	AnimalizeImplement* suger = new Suger();
	AnimalizeImplement* iceCube = new IceCube();
	AnimalizeImplement* milkCover = new MilkCover();
	AnimalizeImplement* none = new None();
	char type;
	char op;
	bool buy = true;
	cout << "Buridge���ģʽ��飺" << endl;
	cout << "�����󲿷�������ʵ�ֲ��ݷ��룬ʹ���Ƕ����Զ����ر仯:" << endl <<
		"�򵥴ֱ���˵�����ǳ�������ṩ���õĽӿڣ���������ʵ�ֲ��֣�" << endl <<
		"�ڳ���������ʵ�ֲ��֣��Ӷ�ʵ�ֳ����ʵ�ֲ��ֵĵ��ã������������õ�" << endl <<
		"ʵ�ֲ��ֿ����ڽ��Ŀ��������У��л��ɱ��ʵ�ֲ��֡�" << endl;
	cout << endl << endl;
	cout << "������飺" << endl;
	cout << "�������Ϣ�������벻��ˮ�����˶�����Ҳ������, Ϊ�˱�֤�������ڸ�ǿ��" << endl <<
		"��ˮƽ�ı����б������õľ���״̬�����ǵ��˶����ṩ������Զ��������ϵ���������" << endl <<
		"��֤С�������ܹ���ʱ����ˮ�֣����ڲ�ͬ���������ƫ�ò�ͬ��������ǲ���֧������" << endl <<
		"�ܹ�ѡ�����ϵ����࣬���ܸ����Լ��ĸ������һЩ���ϰ���,Ϊ���ܹ�ʹ�����������Լ���"<<endl<<
		"���Ի������ܹ���������,ʹ��Bridge���ģʽ��һ��ʮ�����������ѡ��" << endl;
	cout << endl << endl;
	cout << endl << endl;
	Sleep(3 * 1000);
	cout << "��������������г���Ϣ�ڼ䣬����Ϊ��������Ĳ��У��Ѿ�����������45�����ˣ�" << endl;
	Sleep(2 * 1000);
	cout << "������ڿ����͵�ʱ�򣬿���������������һ���Զ�����������" << endl;
	Sleep(2 * 1000);
	cout<<"��������žһ�¾�վ�����ˣ��ܿ찡~" << endl;
	Sleep(2 * 1000);
	cout<<
		"���������������㵽���ۻ�����ǰ����ȥ����һ��Ͷ�ң�" << endl;
	Sleep(2 * 1000);
	while(buy==true)
	{ 
	cout << "Ding~~~�Զ�������������ʾ��ѡ�����ϵ����ࣺ" << endl << endl;

	cout << "A����֭" << endl;
	cout << "B���̲�" << endl;
	cout << "C������" << endl;
	cout << "D������" << endl;
	cin >> type;
	switch (type)
	{
	case 'A':
	{
		cout << "��ѡ����ϲ�������ϰ���(��������Ǿ�Ĭ��ʲô����������Ŷ~��:" << endl;
		cout << "a:����\nb:����\nc:�̸�\nd:ʲô������" << endl;
		cin >> op;
		switch (op)
		{
		case'a': {Drink* drink = new OrangeJuice(suger); drink->Operation(); drink->~Drink(); break; }
		case'b': {Drink* drink = new OrangeJuice(iceCube); drink->Operation(); drink->~Drink(); break; }
		case'c':{Drink* drink = new OrangeJuice(milkCover); drink->Operation(); drink->~Drink(); break;}
		default: {Drink* drink = new OrangeJuice(none); drink->Operation(); drink->~Drink(); }
		}
		buy = false;
		break;
	}
	case 'B':
	{
		cout << "��ѡ����ϲ�������ϰ���(��������Ǿ�Ĭ��ʲô����������Ŷ~��:" << endl;
		cout << "a:����\nb:����\nc:�̸�\nd:ʲô������" << endl;
		cin >> op;
		switch (op)
		{
		case'a': {Drink* drink = new MilkTea(suger); drink->Operation(); drink->~Drink(); break; }
		case'b': {Drink* drink = new MilkTea(iceCube); drink->Operation(); drink->~Drink(); break; }
		case'c': {Drink* drink = new MilkTea(milkCover); drink->Operation(); drink->~Drink(); break; }
		default: {Drink* drink = new MilkTea(none); drink->Operation(); drink->~Drink(); }
		}
		buy = false;
		break;
	}
	case 'C':
	{
		cout << "��ѡ����ϲ�������ϰ���(��������Ǿ�Ĭ��ʲô����������Ŷ~��:" << endl;
		cout << "a:����\nb:����\nc:�̸�\nd:ʲô������" << endl;
		cin >> op;
		switch (op)
		{
		case'a': {Drink* drink = new Coffee(suger); drink->Operation(); drink->~Drink(); break; }
		case'b': {Drink* drink = new Coffee(iceCube); drink->Operation(); drink->~Drink(); break; }
		case'c': {Drink* drink = new Coffee(milkCover); drink->Operation(); drink->~Drink(); break; }
		default: {Drink* drink = new Coffee(none); drink->Operation(); drink->~Drink(); }
		}
		buy = false;
		break;
	}
	case 'D':
	{
		cout << "��ѡ����ϲ�������ϰ���(��������Ǿ�Ĭ��ʲô����������Ŷ~��:" << endl;
		cout << "a:����\nb:����\nc:�̸�\nd:ʲô������" << endl;
		cin >> op;
		switch (op)
		{
		case'a': {Drink* drink = new Colar(suger); drink->Operation(); drink->~Drink(); break; }
		case'b': {Drink* drink = new Colar(iceCube); drink->Operation(); drink->~Drink(); break; }
		case'c': {Drink* drink = new Colar(milkCover); drink->Operation(); drink->~Drink(); break; }
		default: {Drink* drink = new Colar(none); drink->Operation(); drink->~Drink(); }
		}
		buy = false;
		break;
	}
	default: {
		cout << "��������ȷ������������Ŷ~" << endl;
	}
	}
	}
	cout << "�������Լ����ǵ����Ϻ���Ͻ���ȥ׼��Ͷ���°볡�Ĳ��й�����ȥ��" << endl << endl;
	system("pause");
}
