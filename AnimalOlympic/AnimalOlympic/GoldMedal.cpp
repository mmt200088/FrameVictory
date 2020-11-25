#include<iostream>
#include"GoldMedal.h"

using namespace std;


GoldMedal* GoldMedal::Clone() const{

    return new GoldMedal(*this);
} 

GoldMedal::GoldMedal(const GoldMedal& other) {
	this->logoName = other.logoName;
	this->type = other.type;
	cout << "一块克隆的金牌制作好啦！" << endl;

}
