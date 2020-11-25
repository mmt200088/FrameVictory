#pragma once
#include <iostream>
#include <vector>
#include <stdlib.h> 
#include <time.h> 
#define LIMIT 5

class LotteryBall
{
private:
	static std::vector<LotteryBall *> LotteryBallList;
	// �齱�����Ŀ
	static int limit;
	// ��ǰ�齱�����
	static int currentIndex;
	// �齱�����
	int number;
	LotteryBall();


public:
	//��ȡ�齱��ĺ���
	int GetNumber();
	// ���ó齱����
	static int SetSize();
	//�Ӷ����л�ȡһ��ʵ�����������δ�����죬�򴴽���
	static LotteryBall *getInstance()
	{
		currentIndex = currentIndex % LIMIT;
		if (!LotteryBall::LotteryBallList[currentIndex % limit])
		{
			LotteryBall::LotteryBallList[currentIndex % limit] = new LotteryBall();
		}
		return LotteryBall::LotteryBallList[currentIndex++ % limit];
	}
};

class Multiton
{
public:
	void test();
};


