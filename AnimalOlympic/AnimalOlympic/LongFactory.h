#pragma once
#include "Factory.h"
//龙工厂继承自抽象类护具工厂
class LongFactory : public Factory
{
public:
	void CreateGoggle();//生产龙的滑雪镜
	void CreateHelmet();//生产龙的自行车头盔
	void CreateKneecap();//生产龙的护膝
};

