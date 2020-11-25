#pragma once
#include "Factory.h"
//凤凰工厂继承自抽象类护具工厂
class FengFactory: public Factory
{
public:
	void CreateGoggle();//生产凤凰的滑雪镜
	void CreateHelmet();//生产凤凰的自行车头盔
	void CreateKneecap();//生产凤凰的护膝
};

