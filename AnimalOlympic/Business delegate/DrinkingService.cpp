#include "DrinkingService.h"
#include <time.h> 
#include <string> 

void DrinkingService::doProcess()
{
	cout << "欢迎来到运动饮料服务处，我们将提供能量饮料为您补充盐分！" <<endl;	
	int num = 0;
	string line;	
	try 
	{
		cout << "请问您需要几瓶饮料：";
		getline(cin, line);
		num = stoi(line);
		if (num <= 0)
			throw new exception();
	}
	catch (exception exc)
	{
		cout << "请输入一个正整数！"<<endl;
	}
	if (num > _drink_volume)
	{
		num = (_drink_volume + 1) / 2;
		_drink_volume -= num;
		cout << "对不起，饮料不足，请先领取"<<num<<"瓶饮料。" << endl;
		cout << "请等待饮料的到来。" << endl;
		supplyDrink();
	}
	else
	{
		_drink_volume -= num;
		cout << "请领取" << num << "瓶饮料。" << endl;
	}
	cout << "欢迎您下次光临！" << endl;
}

void DrinkingService::supplyDrink()
{
	srand((unsigned)time(0));
	//补充饮料箱数
	int supply = rand() % 10;
	//一箱共20瓶饮料
	int drinkPer = 20;
	//补充饮料
	_drink_volume += supply*drinkPer;
	//提示信息
	cout << "饮料补给来到！补充"<<supply<<"箱，共"<<supply*drinkPer<<"瓶饮料。" << endl;
}
