#include<iostream>
#include"SilverMedal.h"

using namespace std;


SilverMedal* SilverMedal::Clone() const{

    return new SilverMedal(*this);
} 

SilverMedal::SilverMedal(const SilverMedal& other) {
	this->logoName = other.logoName;
	this->type = other.type;
	cout << "һ���¡����������������" << endl;

}
