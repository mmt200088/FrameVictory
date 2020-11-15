#include "PoolGround.h"


void PoolGround::useGround()
{
	if (_water_cleaness > 3)
		cout << "在 ‘" << _name << "’ 水上场地顺利举办比赛。" << endl;
	else if (_water_cleaness > 1)
		cout << "在 ‘" << _name << "’ 水上场地举办比赛，但场地不佳，给观众选手留下不良印象。" << endl;
	else
	{
		cout << "‘" << _name << "’ 水上场地水质过差，完全无法举办比赛，主办方要求负责人向公众谢罪。" << endl;
		return;
	}
	//完成比赛后场地的状态变更
	_water_cleaness--;
	_lifeguard = false;
}

void PoolGround::setSafeTeam()
{
	_lifeguard = true;
	cout << "比赛准备中：水上救生队入驻。" << endl;
}

void PoolGround::prepareWaitingRoom()
{
	cout << "比赛准备中：请所有选手进入淋浴室清洗，并在泳池准备室休息。" << endl;
}

void PoolGround::cleanWaste()
{
	cout << "赛后场地维护：清理陆上和水上垃圾。" << endl;
}

void PoolGround::purifyGround()
{
	_water_cleaness = 5;
	cout << "赛后场地维护：净化水质。" << endl;
}
