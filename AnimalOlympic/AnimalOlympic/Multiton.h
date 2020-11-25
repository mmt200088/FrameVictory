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
	// 抽奖球的数目
	static int limit;
	// 当前抽奖球序号
	static int currentIndex;
	// 抽奖球号码
	int number;
	LotteryBall();


public:
	//获取抽奖球的号码
	int GetNumber();
	// 设置抽奖容器
	static int SetSize();
	//从多例中获取一个实例，如果他仍未被构造，则创建它
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


