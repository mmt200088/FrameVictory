#include <iostream>
#include <vector>
#include<Windows.h>
#include"ShopAssitant.h"
using namespace std;
void ShopAssitant::BuyDrink(int num)
{
	cout << "ShopAssitant:BuyDrink:正在处理" << num << "号订单---购买物品：饮料" << endl;
	Sleep(2000);
}
void  ShopAssitant::BuyFood(int num)
{
	cout << "ShopAssitant:BuyFood:正在处理" << num << "号订单---购买物品：零食" << endl;
	Sleep(2000);
}
void  ShopAssitant::BuyBandage(int num)
{
	cout << "ShopAssitant:BuyBandage:正在处理" << num << "号订单---购买物品：绷带" << endl;
	Sleep(2000);
}

void  ShopAssitant::BuyPoster(int num)
{
	cout << "ShopAssitant:BuyPoster:正在处理" << num << "号订单---购买物品：横幅海报" << endl;
	Sleep(2000);
}