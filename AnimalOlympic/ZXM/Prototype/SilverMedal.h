#pragma once
#include<iostream>
#include"Medal.h"

using namespace std;

class SilverMedal : public Medal {

public:
	SilverMedal() {
		cout << "一块银牌制作好啦！" << endl;
	}
	~SilverMedal() {
		cout << "一块银牌销毁了555" << endl;
	}
	SilverMedal(const SilverMedal& other);
	virtual SilverMedal* Clone() const;

};
