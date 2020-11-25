#pragma once
#include<iostream>
#include<string>
#include<map>
#include<Windows.h>

using namespace std;

//�˵�
class Menu {
public:
	Menu() {};

	//���С����-����
	void addDishNum(string name, int value) {
		dishList.insert(pair<string, int>(name, value));
	}

	//��ȡС�Խ��
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
	map<string, int> dishList; //�˵�
};