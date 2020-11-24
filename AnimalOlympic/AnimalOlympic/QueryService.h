#pragma once
#include "Service.h"
#include<string>

class QueryService :public Service
{
protected:
	string answers[5] = {
		"现在正在举办的是动物运动会田径大赛，任何人购买一张田径通票即可进入大运动场观看任何比赛。我们诚挚邀请所有动物热情参与到比赛中。",
		"请到观众服务中心前的运动饮料服务区补充水分，观众服务中心内设有休息区，您可以在此补充体力。",
		"请到观众服务中心前的票务服务区买票。",
		"请您文明观赛，比赛期间场地外有警戒线，任何观众不得跨越。请在座位上为您心爱的选手加油打气。",
		"您可以在观众服务中心的反馈区说出您对我们服务的任何建议，如果您喜欢我们的服务，记得给五星好评哦。"
	};
public:
	//ctor
	QueryService()
	{
		cout << "QueryService::ctor" << endl;
	}
	//dtor
	~QueryService()
	{
		cout << "QueryService::dtor" << endl;
	}
	//实现：执行函数
	void doProcess() override;
};

