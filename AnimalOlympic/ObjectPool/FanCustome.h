#pragma once

#include<iostream>
#include<map>
#include<string>

using namespace std;

//�·�ʵ����
class FanCustome {
public:
	FanCustome(int number) {
		num = number;
	}

	//��ȡ�·����
	int getNum() {
		return num;
	}
private:
	int num;//���
};