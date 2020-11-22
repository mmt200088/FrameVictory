//
//  attendingdoctor.cpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#include "attendingdoctor.hpp"

AttendingDoctor::AttendingDoctor(string kind,string name) : Doctor (kind,name)
{
    this->DoctorLevel="Attending";
    this->MinNumber = 40;
}
bool AttendingDoctor::isQualified(Patient *patient)
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
