//
//  normaldoctor.cpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#include "normaldoctor.hpp"
bool NormalDoctor::isQualified(Patient *patient)
{
    if (patient->getHealthValue() >= MinNumber && patient->getAspect()==kind && patientsNum<5)
    {
        return true;
    }
    else
    {
        return false;
    }
}
NormalDoctor::NormalDoctor(string kind,string name) : Doctor (kind,name)
{
    this->DoctorLevel="Normal";
    this->MinNumber = 70;
}
