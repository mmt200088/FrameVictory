#include "PosterFactory.h"
#include <time.h> 

Poster * PosterFactory::getPoster(const string & s)
{
	//����������������û�ж�Ӧģ��
	Poster* poster = nullptr;
	auto iter = _modeTable.find(s);

	if (iter==_modeTable.end())
	{
		srand((unsigned)time(0));
		//����һ�������ģ��ߴ�
		//����[100,300]
		int height = 100 + rand() % 200;
		//����[80,200]
		int width = 80 + rand() % 120;
		//�ø������ݺ����������ģ��
		poster = new Poster(s, height, width);
		//��ģ�������������
		_modeTable.insert(make_pair(s, poster));
	}
	else 
	{
		poster = _modeTable[s];
	}

	//����ȡ������
	return poster;
}
