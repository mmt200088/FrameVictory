#pragma once
#include<iostream>
#include"Medal.h"

using namespace std;

class CopperMedal : public Medal {

public:
	CopperMedal() {
		cout << "一块铜牌制作好啦！" << endl;
	}
	~CopperMedal() {
		cout << "一块铜牌销毁了555" << endl;
	}
	CopperMedal(const CopperMedal& other);
	virtual CopperMedal* Clone() const;

};

