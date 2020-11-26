//
//  CheifPhysician.hpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#ifndef CheifPhysician_hpp
#define CheifPhysician_hpp

#include "basic.hpp"
#include "doctor.hpp"
#include "patient.hpp"
class CheifDoctor : public Doctor
{
private:
    int MinNumber;   //能够接受的病人的最低健康值
public:
    CheifDoctor(string kind,string name);
protected:
    virtual bool isQualified(Patient *patient);
};
#endif /* CheifPhysician_hpp */
