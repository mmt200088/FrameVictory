#pragma once
#include "Service.h"
#include<string>

class QueryService :public Service
{
protected:
	string answers[5] = {
		"�������ھٰ���Ƕ����˶����ﾶ�������κ��˹���һ���ﾶͨƱ���ɽ�����˶����ۿ��κα��������ǳ�ֿ�������ж���������뵽�����С�",
		"�뵽���ڷ�������ǰ���˶����Ϸ���������ˮ�֣����ڷ���������������Ϣ�����������ڴ˲���������",
		"�뵽���ڷ�������ǰ��Ʊ���������Ʊ��",
		"�������������������ڼ䳡�����о����ߣ��κι��ڲ��ÿ�Խ��������λ��Ϊ���İ���ѡ�ּ��ʹ�����",
		"�������ڹ��ڷ������ĵķ�����˵���������Ƿ�����κν��飬�����ϲ�����ǵķ��񣬼ǵø����Ǻ���Ŷ��"
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
	//ʵ�֣�ִ�к���
	void doProcess() override;
};

