#pragma once
#include<iostream>
#include"Medal.h"

using namespace std;

class SilverMedal : public Medal {

public:
	SilverMedal() {
		cout << "һ����������������" << endl;
	}
	~SilverMedal() {
		cout << "һ������������555" << endl;
	}
	SilverMedal(const SilverMedal& other);
	virtual SilverMedal* Clone() const;

};
