#pragma once
#include<iostream>
#include"Medal.h"

using namespace std;

class CopperMedal : public Medal {

public:
	CopperMedal() {
		cout << "һ��ͭ������������" << endl;
	}
	~CopperMedal() {
		cout << "һ��ͭ��������555" << endl;
	}
	CopperMedal(const CopperMedal& other);
	virtual CopperMedal* Clone() const;

};

