//
//  CheifPhysician.cpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#include "CheifDoctor.hpp"

CheifDoctor::CheifDoctor(string kind,string name) : Doctor (kind,name)
{
    this->DoctorLevel="Cheif";
    this->MinNumber = 20;
}
bool CheifDoctor::isQualified(Patient *patient)
{
    if (patient->getHealthValue() >= MinNumber && patient->getAspect()==kind&& patientsNum<5)
    {
        return true;
    }
    else
    {
        return false;
    }
}
