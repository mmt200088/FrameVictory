#include "Filter.h"
#include<iostream>
#include<sstream>
using namespace std;
//设计模式interception filter
Filter::Filter(Page* page) {
	this->page = page;
}

int Filter::toInt(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] < '0' || str[i]>'9') {
			return -1;
		}
	}
	return stoi(str);
}