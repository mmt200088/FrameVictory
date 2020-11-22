//
//  doctor.cpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#include "doctor.hpp"
Doctor::Doctor(string kind,string name)
{
    patientsNum=0;
    this->kind=kind;
    this->name = name;
    next=nullptr;
}
void Doctor::FindDoctorToCure(Patient * patient)
{  // 解决问题的步骤
    if (isQualified(patient))
    {
        Cure(patient);
    } else if (next != nullptr)
    {
        next->FindDoctorToCure(patient);
    } else
    {
        fail(patient);
    }
}
Doctor* Doctor::setNext(Doctor *next)
{
    this->next = next;
    return next;
}
ostream & operator<<( ostream & os,const Doctor * c)
{
    os << c->DoctorLevel+" Doctor [" + c->name + "]";
    return os;
}
void Doctor::Cure(Patient *patient)
{
    patientsNum+=1;
    cout << patient << " is cured by " << this << ".\n";
}
void Doctor::fail(Patient* patient)
{
    cout << patient << " cannot find a doctor.\n";
}
