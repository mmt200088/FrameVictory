#include<iostream>
#include"GoldMedal.h"

using namespace std;


GoldMedal* GoldMedal::Clone() const{

    return new GoldMedal(*this);
} 

GoldMedal::GoldMedal(const GoldMedal& other) {
	this->logoName = other.logoName;
	this->type = other.type;
	cout << "һ���¡�Ľ�������������" << endl;

}
