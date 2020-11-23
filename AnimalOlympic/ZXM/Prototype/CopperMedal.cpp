#include<iostream>
#include"CopperMedal.h"

using namespace std;


CopperMedal* CopperMedal::Clone() const{

    return new CopperMedal(*this);
} 

CopperMedal::CopperMedal(const CopperMedal& other) {
	this->logoName = other.logoName;
	this->type = other.type;
	cout << "一块克隆的铜牌制作好啦！" << endl;

}
