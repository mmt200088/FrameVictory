#include "Builder.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

void Dishes::SetFoodName(string name)
{
	_dishesName = name;
}
void Dishes::AddIngredients(vector<string> ing)
{
	_ingredients.assign(ing.begin(), ing.end());
}

void Dishes::AddFlavoring(vector<string> fla)
{
	_flavoring.assign(fla.begin(), fla.end());
}

void Dishes::SetMethod(string method)
{
	_cookingMethod = method;
}

void Dishes::SetTime(string time)
{
	_cookingTime = time;
}

void Dishes::Show()
{
	cout << endl;
	cout<<_dishesName << "�Ѿ������ˣ����Ĳ������£�" << endl;
	cout << "_____________________________________" << endl;
	cout << "ʳ�ģ�" << endl;
	for (int i = 0; i < _ingredients.size(); ++i)
	{
		cout << _ingredients[i] << "  " ;
	}
	cout << endl << endl;
	cout << "��ζ�ϣ�" << endl;
	for (int i = 0; i < _flavoring.size(); ++i)
	{
		cout << _flavoring[i] << "  ";
	}
	cout << endl << endl;
	cout << "��⿷�ʽ��" << _cookingMethod << endl << endl;
	cout << "���ʱ�䣺" << _cookingTime << endl << endl;
	cout << "_____________________________________" << endl;
}

MapoTofuBuilder::MapoTofuBuilder()
{
	_dishes = new Dishes();
}

void MapoTofuBuilder::SetDishesName()
{
	_dishes->SetFoodName("���Ŷ���");
	cout << "����������׼�����Ŷ�����ʳ��......" << endl;
	Sleep(2 * 1000);
}

void MapoTofuBuilder::BuildIngredients()
{
	vector<string>ing = { "����","�廨��" ,"���׵��","��ͷ","С��"};
	_dishes->AddIngredients(ing);
	cout << "����������׼������......" << endl;
	Sleep(2 * 1000);
}

void MapoTofuBuilder::BuildFlavoring()
{
	vector<string>fla = { "ۯ�ض��꽴","�ɻ���","�齷","����","������" };
	_dishes->AddFlavoring(fla);
}

void MapoTofuBuilder::BuildMethod()
{
	_dishes->SetMethod("��������");
	cout << "��������У���С���������ĵȴ���ζ�ĵ���......" << endl;
	Sleep(2 * 1000);
}

void MapoTofuBuilder::BuildTime()
{
	_dishes->SetTime("20min");
	cout << "Duang~~~,ʳ���Ѿ���⿺���!" << endl;
}

Dishes* MapoTofuBuilder::GetDishes()
{
	return _dishes;
}

BuddhaJumpingBuilder::BuddhaJumpingBuilder()
{
	_dishes = new Dishes();
}

void BuddhaJumpingBuilder::SetDishesName()
{
	_dishes->SetFoodName("����ǽ");
	cout << "����������׼������ǽ��ʳ��......" << endl;
	Sleep(2 * 1000);
}

void BuddhaJumpingBuilder::BuildIngredients()
{
	vector<string>ing = { "����","����" ,"�ӱ���","���","�뵰" };
	_dishes->AddIngredients(ing);
	cout << "����������׼������......" << endl;
	Sleep(2 * 1000);
}

void BuddhaJumpingBuilder::BuildFlavoring()
{
	vector<string>fla = { "��Ƭ","��Ƥ","�����ɱ�","����","ζ��" };
	_dishes->AddFlavoring(fla);
}

void BuddhaJumpingBuilder::BuildMethod()
{
	_dishes->SetMethod("�Ļ�����");
	cout << "��������У���С���������ĵȴ���ζ�ĵ���......" << endl;
	Sleep(4 * 1000);
}

void BuddhaJumpingBuilder::BuildTime()
{
	_dishes->SetTime("2h");
	cout << "Duang~~~,ʳ���Ѿ���⿺���!" << endl;
}

Dishes* BuddhaJumpingBuilder::GetDishes()
{
	return _dishes;
}

BraisedEggplantBuilder::BraisedEggplantBuilder()
{
	_dishes = new Dishes();
}

void BraisedEggplantBuilder::SetDishesName()
{
	_dishes->SetFoodName("��������");
	cout << "����������׼���������ӵ�ʳ��......" << endl;
	Sleep(2 * 1000);
}

void BraisedEggplantBuilder::BuildIngredients()
{
	vector<string>ing = { "������","����" ,"С��"};
	_dishes->AddIngredients(ing);
	cout << "����������׼������......" << endl;
	Sleep(2 * 1000);
}

void BraisedEggplantBuilder::BuildFlavoring()
{
	vector<string>fla = { "ۯ�ض��꽴","����","���","��","����" };
	_dishes->AddFlavoring(fla);
}

void BraisedEggplantBuilder::BuildMethod()
{
	_dishes->SetMethod("�գ���");
	cout << "��������У���С���������ĵȴ���ζ�ĵ���......" << endl;
	Sleep(2 * 1000);
}

void BraisedEggplantBuilder::BuildTime()
{
	_dishes->SetTime("30min");
	cout << "Duang~~~,ʳ���Ѿ���⿺���!" << endl;
}

Dishes* BraisedEggplantBuilder::GetDishes()
{
	return _dishes;
}



Dishes* Chef::Cook(MenuBuilder *menuBuilder)
{
	menuBuilder->SetDishesName();
	menuBuilder->BuildIngredients();
	menuBuilder->BuildFlavoring();
	menuBuilder->BuildMethod();
	menuBuilder->BuildTime();
	return menuBuilder->GetDishes();
}

void Builder::test()
{
	cout << "Builder���ģʽ��飺" << endl;
	cout << "��һ�ิ�ӵĲ�Ʒ�����������У����������칤���е�ÿһ��һ�־����Ʒ�з��������" << endl <<
		"ʹ�ð�����ͬ��������������������ͬ�Ĳ�Ʒ." << endl;
	cout << endl << endl;
	cout << "Separate Query from Modifier���ģʽ��飺" << endl;
	cout << "����һ�������ȷ��غ�����״ֵ̬���޸Ķ����״̬������������ͬ�ĺ�����" <<endl
		 << "һ���������ض���״̬��һ�������޸Ķ���״̬��";
	cout << endl << endl;
	cout << "������飺"<<endl;
	cout << "�ڶ����˶����У�ʳ��Ĺ�Ӧ�ǳ���Ҫ,��ʳ�����������㣬���������֡���" << endl <<
		"��Ϊ�����Ķ������෱�࣬����ͬ�������ʳ���ͺͿ�ζҪ�󶼲�ͬ����˴��" << endl <<
		"��Ҫ��⿳��廨���ŵĲ��ȹ�������ʳ�ã�һ��ʳ�׵���������ȷ���ģ�����" << endl <<
		"ԭ�ϣ����ϣ���������ʽ�ȣ�����ÿһ����ľ�����������ܴ���˿���" << endl <<
		"����Ƴ����ֲ��ȵĲ��ף�Ȼ���ó�ʦ�����ݲ��������ʳ������,��������Builder" << endl <<
		"���ģʽ��ʵ�ֹ���Ӳ�Ʒ�з���ֱ�ʵ���乤���˼�롣ͬʱ���������һ���̣���" << endl <<
		"��⿲����ز������ּȸı�״ֵ̬���ַ��ض���ĺ���������ɲ�ͬ�ĺ������ֱ�ʵ��" << endl <<
		"�ı�����ֵ(��⿵Ĳ���)�ͷ��ض����״̬��GetDishes��,��������Separate Query " << endl <<
		"from Modifier��˼��";
	cout << endl << endl;
	Sleep(3 * 1000);
	cout << "����һ��ķ���ƴ�������Ѿ��Ķ����Ѿ����ù��๾����ˣ��Ͻ�ȥ����ʳ�����ô���Ǿ�����ƵĲ��Ȱɣ�" << endl;
	cout << "�Ŷ���......" << endl;
	Sleep(2 * 1000);
	cout << "�Ŷ���......" << endl;
	Sleep(2 * 1000);
	cout << "�쵽���ˣ������Ȳ���������~~" << endl;
	Sleep(2 * 1000);
	cout << "�Ŷ���......" << endl;
	Sleep(2 * 1000);
	cout << "�ֵ���������̧ͷ���˿��˵���" << endl << endl;
	cout << "����ϵĶ����˶��᡾Day3��" << endl <<endl<<
		"������ɫ�ˣ�"<<endl<<"���Ŷ�����A)"<<endl<<"����ǽ��B��"<<endl<<"�������ӣ�C��" << endl;
	cout << endl;
	

	Chef *chef = new Chef();
	MenuBuilder *mapoTofu = new MapoTofuBuilder();
	MenuBuilder *buddhaJumping = new BuddhaJumpingBuilder();
	MenuBuilder *braisedEggplant = new BraisedEggplantBuilder();

	char ch;
	bool order=true;
	while (order == true)
	{
		cout << "�������Ӧ��ĸ��ˣ�����D�뿪ʳ�ã�" << endl;
		cin >> ch;
		switch (ch)
		{
		case 'A':
		{
			chef->Cook(mapoTofu)->Show();
			break;
		}
		case 'B':
		{
			chef->Cook(buddhaJumping)->Show();
			break;
		}
		case 'C':
		{
			chef->Cook(braisedEggplant)->Show();
			break;
		}
		case 'D':
		{
			order = false;
			cout << "���Ѿ��Ա����㣬���Ի�ȥ�ú���Ϣ����" << endl;
			break;
		}
		default:
		{
			cout << "����ȷ������ĸŶ����Ȼ�ɾ�Ҫ��������~" << endl;
		}
		}
		cout << endl;
	}
}