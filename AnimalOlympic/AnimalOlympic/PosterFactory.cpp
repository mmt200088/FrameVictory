#include "PosterFactory.h"
#include <time.h> 

Poster * PosterFactory::getPoster(const string & s)
{
	//首先搜索看表中有没有对应模板
	Poster* poster = nullptr;
	auto iter = _modeTable.find(s);

	if (iter==_modeTable.end())
	{
		srand((unsigned)time(0));
		//生成一个随机的模板尺寸
		//高在[100,300]
		int height = 100 + rand() % 200;
		//宽在[80,200]
		int width = 80 + rand() % 120;
		//用给定数据和随机数生成模板
		poster = new Poster(s, height, width);
		//将模板存入索引表中
		_modeTable.insert(make_pair(s, poster));
	}
	else 
	{
		poster = _modeTable[s];
	}

	//返回取得数据
	return poster;
}

void PosterFactory::printPosters()
{
	cout << "以下是目前所有的海报模板：" << endl;
	int i = 0;
	for (auto p : _modeTable)
	{
		i++;
		auto poster = p.second;
		cout << i <<".标语: '" << poster->getSlogan()
			<< "'\n尺寸:(高" << poster->getHeight() << "cm, 宽" << poster->getWidth() << "cm) " << endl<<endl;	
	}
}
