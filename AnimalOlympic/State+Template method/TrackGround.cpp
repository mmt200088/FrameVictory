#include "TrackGround.h"

void TrackGround::printGroundStatus()
{
	cout << "场地名：" << _name << endl
		<< "场地禁入线：" << (_keepout_line ? "开" : "关") << endl
		<< "场地安全门：" << (_safety_gate ? "开" : "关") << endl
		<< "陆上医疗队：" << (_medic ? "就绪" : "未就绪") << endl
		<< "跑道整洁度(0-5星)：" <<_track_cleaness << "星" << endl << endl;
}

void TrackGround::useGround()
{
	if(_track_cleaness>3)
		cout << "在 ‘" << _name << "’ 田径场地顺利举办比赛。" << endl;
	else if(_track_cleaness>1)
		cout << "在 ‘" << _name << "’ 田径场地举办比赛，但场地不佳，给观众选手留下不良印象。" << endl;
	else
	{
		cout << "‘" << _name << "’ 田径场地垃圾过多，完全无法举办比赛，主办方要求负责人向公众谢罪。" << endl;
		return;
	}
	//完成比赛后场地的状态变更
	_track_cleaness--;
	_medic = false;
	_keepout_line = false;
}

void TrackGround::setSafeTeam()
{
	_medic = true;
	cout << "比赛准备中：田径场医疗队入驻。" << endl;
}

void TrackGround::prepareWaitingRoom()
{
	cout << "比赛准备中：请所有选手进入准备室休息。" << endl;
}

void TrackGround::cleanWaste()
{
	_track_cleaness = 5;
	cout << "赛后场地维护：清理垃圾。" << endl;
}

void TrackGround::purifyGround()
{
	cout << "赛后场地维护：维护道路质量。" << endl;
}
