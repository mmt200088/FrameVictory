//
//  SpecificationInterface.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/19.
//

#ifndef SpecificationInterface_hpp
#define SpecificationInterface_hpp
#include "basic.h"
#include "AnimalCandidate.hpp"
class SpecificationInterface //方法都只是提供接口，不实现
{
public:
    virtual bool isSatisfiedBy(AnimalCandidate * t)=0;
    SpecificationInterface *And(SpecificationInterface *spec);
    SpecificationInterface *Or(SpecificationInterface *spec);
    SpecificationInterface *Not();
};

#endif /* SpecificationInterface_h */
