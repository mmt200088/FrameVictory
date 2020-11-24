#include<iostream>
#include"CommitteeOfGame.h"
//挖洞锦标赛组委会 是运动会组委会的代理
class CommitteeOfDigging {

public:  CommitteeOfDigging() {};
		 void askForVCR();//申请观看录像
		 void quit();//下次继续努力
		 void askForRegame();//申请重新跑步 向上一级申诉
		 void askForFire();//申请解雇裁判 向上一级申诉
private:
	CommitteeOfGame *myCom = new CommitteeOfGame();
};