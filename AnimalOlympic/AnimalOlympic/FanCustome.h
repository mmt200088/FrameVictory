#pragma once

#include<iostream>
#include<map>
#include<string>

using namespace std;

//衣服实体类
class FanCustome {
public:
	FanCustome(int number) {
		num = number;
	}

	//获取衣服编号
	int getNum() {
		return num;
	}
private:
	int num;//编号
};