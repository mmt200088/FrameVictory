#pragma once
#include<iostream>
#include<string>
#include<map>
#include<Windows.h>

using namespace std;

//菜单
class Menu {
public:
	Menu() {};

	//添加小吃名-金额对
	void addDishNum(string name, int value) {
		dishList.insert(pair<string, int>(name, value));
	}

	//获取小吃金额
	int getValue(string name){
		map<string, int>::iterator iter;
		iter = dishList.find(name);
		if (iter != dishList.end()) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			cout << "Waitress(mutter):The dish " << name << " is $" << iter->second << "." << endl;
			Sleep(1000);
			return iter->second;
		}
		else {
			return 0;
		}
	}

private:
	map<string, int> dishList; //菜单
};