#pragma once
#include <iostream>
#include <vector>
#include<Windows.h>
using namespace std;
class ShopAssitant
{
public:
	void BuyDrink(int num); //买饮料的具体执行函数
	void BuyFood(int num);  //买零食的具体执行函数
	void BuyPoster(int num);//买横幅海报的具体执行函数
	void BuyBandage(int num); //买绷带的具体执行函数

};
