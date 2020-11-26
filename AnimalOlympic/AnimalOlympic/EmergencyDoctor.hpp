//
//  EmergencyDoctor.hpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#ifndef EmergencyDoctor_hpp
#define EmergencyDoctor_hpp

#include "basic.hpp"
#include "doctor.hpp"
#include "patient.hpp"
class EmergencyDoctor : public Doctor
{
private:
    int MaxNumber;     //能够接受的病人的最高健康值
public:
    EmergencyDoctor(string kind,string name);
protected:
    virtual bool isQualified(Patient * patient);
};
#endif /* EmergencyDoctor_hpp */
