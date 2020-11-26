//
//  EmergencyDoctor.cpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#include "EmergencyDoctor.hpp"
EmergencyDoctor::EmergencyDoctor(string kind,string name):Doctor (kind,name)
{    // 构造函数
    this->MaxNumber = 20;
    this->DoctorLevel = "Emergency";
}
bool EmergencyDoctor::isQualified(Patient * patient)
{        // 解决问题的方法
    if (patient->getHealthValue() <= MaxNumber&& patientsNum<5)
    {
        return true;
    }
    else
    {
        return false;
    }
}
