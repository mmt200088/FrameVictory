#include <iostream>
#include <vector>
#include<Windows.h>
#include"ShopAssitant.h"
using namespace std;
void ShopAssitant::BuyDrink(int num)
{
	cout << "ShopAssitant:BuyDrink:���ڴ���" << num << "�Ŷ���---������Ʒ������" << endl;
	Sleep(2000);
}
void  ShopAssitant::BuyFood(int num)
{
	cout << "ShopAssitant:BuyFood:���ڴ���" << num << "�Ŷ���---������Ʒ����ʳ" << endl;
	Sleep(2000);
}
void  ShopAssitant::BuyBandage(int num)
{
	cout << "ShopAssitant:BuyBandage:���ڴ���" << num << "�Ŷ���---������Ʒ������" << endl;
	Sleep(2000);
}

void  ShopAssitant::BuyPoster(int num)
{
	cout << "ShopAssitant:BuyPoster:���ڴ���" << num << "�Ŷ���---������Ʒ���������" << endl;
	Sleep(2000);
}