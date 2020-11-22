//
//  NotSpecification.cpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/19.
//

#include "NotSpecification.hpp"
NotSpecification::NotSpecification(SpecificationInterface* spec)
{
    this->spec = spec;
}
bool NotSpecification::isSatisfiedBy(AnimalCandidate* t)
{
    return !spec->isSatisfiedBy(t);//封装逻辑非
}

