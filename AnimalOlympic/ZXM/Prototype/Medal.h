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
    void show(){cout<<"一个平平无奇的印有"<<this->getLogoName()<<"的"<<this->getType()<<endl; } 
    
    
protected:
    string logoName;
    string type;
 
};



