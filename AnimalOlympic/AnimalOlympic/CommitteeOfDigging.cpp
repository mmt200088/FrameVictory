#pragma once
#include"CommitteeOfDigging.h"
#include<iostream>
#include<windows.h>
using namespace std;

void CommitteeOfDigging::askForVCR() {
	cout << "组委会正在调取挖洞比赛的比赛回放，请耐心等待！\n";
	Sleep(1 * 1000);
	cout << "录像回放回看中。\n";
	Sleep(1 * 1000);
	cout << "录像回放回看中。。\n";
	Sleep(1 * 1000);
	cout << "录像回放回看中。。。\n";
	Sleep(1 * 1000);
	cout << "经过核实，小仓鼠在比赛中带了石头做的爪子！它将失去比赛资格！感谢您的反馈！";

}

void CommitteeOfDigging::quit() {
	cout << "组委会拍了拍你的肩，说：“别气馁！好好训练！下届比赛没你我不看！”\n";
}

void CommitteeOfDigging::askForRegame() {
	cout << "重新比赛可是件大事儿！挖洞组委会经过商议，决定继续上报给赛事组委会！请耐心等待！”\n";
	Sleep(1 * 1000);
	cout << "申请上报中。\n";
	Sleep(1 * 1000);
	cout << "申请上报中。。\n";
	Sleep(1 * 1000);
	cout << "申请上报中。。。\n";
	Sleep(1 * 1000);
	myCom->askForRegame();

}

void CommitteeOfDigging::askForFire() {
	cout << "投诉裁判可是件大事儿！挖洞组委会经过商议，决定继续上报给赛事组委会！请耐心等待！”\n";
	Sleep(1 * 1000);
	cout << "申请上报中。\n";
	Sleep(1 * 1000);
	cout << "申请上报中。。\n";
	Sleep(1 * 1000);
	cout << "申请上报中。。。\n";
	Sleep(1 * 1000);
	myCom->askForFire();

}