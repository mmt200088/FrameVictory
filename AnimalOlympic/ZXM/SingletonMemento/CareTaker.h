#pragma once
#include<iostream>
#include<string>
#include"Memento.h"
#include<vector>

using namespace std;

class CareTaker {
private:
	vector<Memento*> mementoList;

public:
	void add(Memento* state) {
		mementoList.push_back(state);
	}

	Memento* get(int index) {
		return mementoList[index-1];
	}

};
