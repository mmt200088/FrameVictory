#pragma once
#include<iostream>
#include<string>
#include"Medal.h"
using namespace std;

class GoldMedal: public Medal{
	
public:
	GoldMedal(){
		cout<<"һ���������������"<<endl;
	}
    ~GoldMedal(){
    	cout<<"һ�����������555"<<endl;
	}
	GoldMedal(const GoldMedal& other);
    virtual GoldMedal* Clone() const; 
 
};


