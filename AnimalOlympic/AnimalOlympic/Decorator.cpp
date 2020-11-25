#include "Decorator.h"
#include "AnimalSportsDrinks.h"
#include "SUC.h"
#include "GLC.h"
#include "VitaminC.h"
#include "VitaminB6.h"
#include "NaCl.h"
#include "KCl.h"
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

//创建动物运动会运动饮料
AnimalSportsDrinks Drinks;

void Decorator::test()
{
	cout << "#######################################################################" << endl
		<< "欢迎来到场景：动物运动会运动饮料调配" << endl
		<< "本场景使用的设计模式为：Decorator装饰器" << endl
		<< "设计模式介绍：装饰器模式以对客户端透明的方式动态地给一个对象添加额外的" << endl
		<< "职责,简单来说,就是动态地扩展职责。装饰器模式能够灵活地增加功能, 很好地" << endl
		<< "解决了继承子类爆炸增长的问题" << endl
		<< "设计模式在场景中的应用：运动员在高强度的比赛中，需要通过运动饮料及时地" << endl
		<< "补充能量。现在需要根据自身体质和项目特点，调配不同成分的运动饮料。" << endl
		<< "现有最基本的只由水构成的运动饮料，和各种营养物质，如：蔗糖、维生素C。" << endl
		<< "通过向只有水的运动饮料中添加各种营养物质，即可调配出定制的运动饮料供不" << endl
		<< "同的运动员饮用。" << endl
		;
	cout << endl << endl;
	Sleep(5 * 1000);
	cout << "你是动物运动会的后勤负责之一，现在你需要为不同的运动员调配不同的运动" << endl
		<< "饮料。在最基本的只有水的运动饮料中，你可以任意选择，添加以下营养物质：" << endl
		<< "蔗糖、葡萄糖、维生素C、维生素B6、氯化钠、氯化钾。" << endl
		;
	bool end = false;
	//创建运动饮料的添加蔗糖装饰器
	SUC suc;
	//创建运动饮料的添加葡萄糖装饰器
	GLC glc;
	//创建运动饮料的添加维生素C装饰器
	VitaminC vitaminC;
	//创建运动饮料的添加维生素B6装饰器
	VitaminB6 vitaminB6;
	//创建运动饮料的添加氯化钠装饰器
	NaCl nacl;
	//创建运动饮料的添加氯化钾装饰器
	KCl kcl;
	while (!end) {
		cout << endl << "请选择你的操作：" << endl
			<< "1、选择添加一份蔗糖——请输入1" << endl
			<< "2、选择添加一份葡萄糖——请输入2" << endl
			<< "3、选择添加一份维生素C——请输入3" << endl
			<< "4、选择添加一份维生素B6——请输入4" << endl
			<< "5、选择添加一份氯化钠——请输入5" << endl
			<< "6、选择添加一份氯化钾——请输入6" << endl
			<< "7、查看运动饮料成分表——请输入7" << endl
			<< "8、调配运动饮料并退出——请输入8" << endl
			;
		string str;
		getline(cin, str);
		switch (str[0]) {
		case'1':
			suc.AddIngredients();
			break;
		case'2':
			glc.AddIngredients();
			break;
		case'3':
			vitaminC.AddIngredients();
			break;
		case'4':
			vitaminB6.AddIngredients();
			break;
		case'5':
			nacl.AddIngredients();
			break;
		case'6':
			kcl.AddIngredients();
			break;
		case'7':
			Drinks.ShowIngredients();
			break;
		case'8':
			end = true;
			Drinks.MakeSportsDrinks();
			break;
		default:cout << "请输入1、2、3、4、5、6、7、8！！！" << endl;
			Sleep(1 * 1000);
			break;
		}
	}
}
