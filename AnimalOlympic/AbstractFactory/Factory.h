#pragma once
class Factory
{
public:
	//所有护具工厂都必须能够生产滑雪镜、自行车头盔、护膝
	virtual void CreateGoggle() = 0; //生产滑雪镜
	virtual void CreateHelmet() = 0;//生产自行车头盔
	virtual void CreateKneecap() = 0;//生产护膝
};

