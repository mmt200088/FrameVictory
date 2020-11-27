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
	cout<<_dishesName << "已经做好了，它的菜谱如下：" << endl;
	cout << "_____________________________________" << endl;
	cout << "食材：" << endl;
	for (int i = 0; i < _ingredients.size(); ++i)
	{
		cout << _ingredients[i] << "  " ;
	}
	cout << endl << endl;
	cout << "调味料：" << endl;
	for (int i = 0; i < _flavoring.size(); ++i)
	{
		cout << _flavoring[i] << "  ";
	}
	cout << endl << endl;
	cout << "烹饪方式：" << _cookingMethod << endl << endl;
	cout << "烹饪时间：" << _cookingTime << endl << endl;
	cout << "_____________________________________" << endl;
}

MapoTofuBuilder::MapoTofuBuilder()
{
	_dishes = new Dishes();
}

void MapoTofuBuilder::SetDishesName()
{
	_dishes->SetFoodName("麻婆豆腐");
	cout << "动物大厨正在准备麻婆豆腐的食材......" << endl;
	Sleep(2 * 1000);
}

void MapoTofuBuilder::BuildIngredients()
{
	vector<string>ing = { "豆腐","五花肉" ,"玉米淀粉","蒜头","小葱"};
	_dishes->AddIngredients(ing);
	cout << "动物大厨正在准备佐料......" << endl;
	Sleep(2 * 1000);
}

void MapoTofuBuilder::BuildFlavoring()
{
	vector<string>fla = { "郫县豆瓣酱","干花椒","麻椒","生姜","花生油" };
	_dishes->AddFlavoring(fla);
}

void MapoTofuBuilder::BuildMethod()
{
	_dishes->SetMethod("炒、煮、焖");
	cout << "正在烹饪中，请小动物们耐心等待美味的诞生......" << endl;
	Sleep(2 * 1000);
}

void MapoTofuBuilder::BuildTime()
{
	_dishes->SetTime("20min");
	cout << "Duang~~~,食物已经烹饪好啦!" << endl;
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
	_dishes->SetFoodName("佛跳墙");
	cout << "动物大厨正在准备佛跳墙的食材......" << endl;
	Sleep(2 * 1000);
}

void BuddhaJumpingBuilder::BuildIngredients()
{
	vector<string>ing = { "鲍鱼","海参" ,"杏鲍菇","蹄筋","鸽蛋" };
	_dishes->AddIngredients(ing);
	cout << "动物大厨正在准备佐料......" << endl;
	Sleep(2 * 1000);
}

void BuddhaJumpingBuilder::BuildFlavoring()
{
	vector<string>fla = { "姜片","桂皮","炊发干贝","冰糖","味精" };
	_dishes->AddFlavoring(fla);
}

void BuddhaJumpingBuilder::BuildMethod()
{
	_dishes->SetMethod("文火煨制");
	cout << "正在烹饪中，请小动物们耐心等待美味的诞生......" << endl;
	Sleep(4 * 1000);
}

void BuddhaJumpingBuilder::BuildTime()
{
	_dishes->SetTime("2h");
	cout << "Duang~~~,食物已经烹饪好啦!" << endl;
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
	_dishes->SetFoodName("鱼香茄子");
	cout << "动物大厨正在准备鱼香茄子的食材......" << endl;
	Sleep(2 * 1000);
}

void BraisedEggplantBuilder::BuildIngredients()
{
	vector<string>ing = { "长茄子","大蒜" ,"小葱"};
	_dishes->AddIngredients(ing);
	cout << "动物大厨正在准备佐料......" << endl;
	Sleep(2 * 1000);
}

void BraisedEggplantBuilder::BuildFlavoring()
{
	vector<string>fla = { "郫县豆瓣酱","白糖","香醋","盐","酱油" };
	_dishes->AddFlavoring(fla);
}

void BraisedEggplantBuilder::BuildMethod()
{
	_dishes->SetMethod("烧，炒");
	cout << "正在烹饪中，请小动物们耐心等待美味的诞生......" << endl;
	Sleep(2 * 1000);
}

void BraisedEggplantBuilder::BuildTime()
{
	_dishes->SetTime("30min");
	cout << "Duang~~~,食物已经烹饪好啦!" << endl;
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
	cout << "Builder设计模式简介：" << endl;
	cout << "在一类复杂的产品的生产制造中，将他的制造工序中的每一步一种具体产品中分离出来，" << endl <<
		"使得按照相同的制作步骤可以制造出不同的产品." << endl;
	cout << endl << endl;
	cout << "Separate Query from Modifier设计模式简介：" << endl;
	cout << "对于一个函数既返回函数的状态值又修改对象的状态。建立两个不同的函数，" <<endl
		 << "一个用来返回对象状态，一个用来修改对象状态。";
	cout << endl << endl;
	cout << "场景简介："<<endl;
	cout << "在动物运动会中，食物的供应非常重要,“食不饱，力不足，才美不外现”，" << endl <<
		"因为参赛的动物种类繁多，而不同动物的饮食类型和口味要求都不同，因此大厨" << endl <<
		"需要烹饪出五花八门的菜肴供动物们食用，一道食谱的组成零件是确定的，比如" << endl <<
		"原料，调料，火候，烹调方式等，但是每一步骤的具体内容区别很大，因此可以" << endl <<
		"先设计出多种菜肴的菜谱，然后让厨师来根据菜谱来完成食物的烹饪,这体现了Builder" << endl <<
		"设计模式将实现工序从产品中分离分别实现其工序的思想。同时对于烹饪这一过程，将" << endl <<
		"烹饪并返回菜肴这种既改变状态值，又返回对象的函数，分离成不同的函数，分别实现" << endl <<
		"改变对象的值(烹饪的步骤)和返回对象的状态（GetDishes）,这体现了Separate Query " << endl <<
		"from Modifier的思想";
	cout << endl << endl;
	Sleep(3 * 1000);
	cout << "经过一天的奋力拼搏，你已经的肚子已经饿得咕噜咕噜叫了，赶紧去动物食堂享用大厨们精心设计的菜肴吧！" << endl;
	cout << "排队中......" << endl;
	Sleep(2 * 1000);
	cout << "排队中......" << endl;
	Sleep(2 * 1000);
	cout << "快到你了，真是迫不及待了呢~~" << endl;
	Sleep(2 * 1000);
	cout << "排队中......" << endl;
	Sleep(2 * 1000);
	cout << "轮到你啦！你抬头看了看菜单：" << endl << endl;
	cout << "舌尖上的动物运动会【Day3】" << endl <<endl<<
		"今日特色菜："<<endl<<"麻婆豆腐（A)"<<endl<<"佛跳墙（B）"<<endl<<"鱼香茄子（C）" << endl;
	cout << endl;
	

	Chef *chef = new Chef();
	MenuBuilder *mapoTofu = new MapoTofuBuilder();
	MenuBuilder *buddhaJumping = new BuddhaJumpingBuilder();
	MenuBuilder *braisedEggplant = new BraisedEggplantBuilder();

	char ch;
	bool order=true;
	while (order == true)
	{
		cout << "请输入对应字母点菜，输入D离开食堂：" << endl;
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
			cout << "你已经吃饱喝足，可以回去好好休息啦！" << endl;
			break;
		}
		default:
		{
			cout << "请正确输入字母哦，不然可就要饿肚子啦~" << endl;
		}
		}
		cout << endl;
	}
}