//
//  patient.cpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#include "patient.hpp"
Patient::Patient(int number,string _name,string _aspect)
{
    this->HealthValue = number;
    name=_name;
    Aspect=_aspect;
}
int Patient::getHealthValue()
{
    return HealthValue;
}
string Patient::getAspect()
{
    return  Aspect;
}
ostream & operator<<( ostream & os,const Patient * c)
{
    os << "Patient: [" + c->name + "]";
    return os;
}
