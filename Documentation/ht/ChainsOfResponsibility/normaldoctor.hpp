//
//  normaldoctor.hpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#ifndef normaldoctor_hpp
#define normaldoctor_hpp

#include "basic.hpp"
#include "doctor.hpp"
#include "patient.hpp"
class NormalDoctor : public Doctor
{
private:
    int MinNumber;  //能够接受的病人的最低健康值
protected:
    virtual bool isQualified(Patient *patient);
public:
    NormalDoctor(string kind,string name);
};

#endif /* normaldoctor_hpp */
