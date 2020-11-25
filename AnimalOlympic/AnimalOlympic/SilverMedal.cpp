#include<iostream>
#include"SilverMedal.h"

using namespace std;


SilverMedal* SilverMedal::Clone() const{

    return new SilverMedal(*this);
} 

SilverMedal::SilverMedal(const SilverMedal& other) {
	this->logoName = other.logoName;
	this->type = other.type;
	cout << "一块克隆的银牌制作好啦！" << endl;

}
