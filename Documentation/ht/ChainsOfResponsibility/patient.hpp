//
//  patient.hpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#ifndef patient_hpp
#define patient_hpp

#include "basic.hpp"
class Patient   //病人类
{
private:
    int HealthValue;    //健康值，越低越不健康
    string name;   //病人的名字
    string Aspect;    //哪方面有问题
public:
    Patient(int number,string _name,string _aspect);
    int getHealthValue();
    string getAspect();
    friend ostream & operator<<( ostream & os,const Patient * c);
};
#endif /* patient_hpp */
