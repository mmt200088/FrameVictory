#pragma once
#include<string>
#include<iostream> 
using namespace std;

class Medal {

public:
	Medal(){
    	
	}
    virtual Medal* Clone() const = 0; 
    ~Medal(){}
    void setLogoName(string name){this->logoName = name;} 
    string getLogoName(){
    	return this->logoName;
	} 
    void setType(string newType){this->type = newType;} 
    string getType(){return this->type;} 
    void show(){cout<<"һ��ƽƽ�����ӡ��"<<this->getLogoName()<<"��"<<this->getType()<<endl; } 
    
    
protected:
    string logoName;
    string type;
 
};



