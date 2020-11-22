//
//  attendingdoctor.hpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#ifndef attendingdoctor_hpp
#define attendingdoctor_hpp

#include "basic.hpp"
#include "doctor.hpp"
#include "patient.hpp"
class AttendingDoctor : public Doctor
{
private:
    int MinNumber;   //能够接受的病人的最低健康值
public:
    AttendingDoctor(string kind,string name);
protected:
    virtual bool isQualified(Patient *patient);
};
#endif /* attendingdoctor_hpp */
