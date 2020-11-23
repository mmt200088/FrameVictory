#pragma once
#include<iostream>
#include<string>
#include"Medal.h"
using namespace std;

class GoldMedal: public Medal{
	
public:
	GoldMedal(){
		cout<<"一块金牌制作好啦！"<<endl;
	}
    ~GoldMedal(){
    	cout<<"一块金牌销毁了555"<<endl;
	}
	GoldMedal(const GoldMedal& other);
    virtual GoldMedal* Clone() const; 
 
};


