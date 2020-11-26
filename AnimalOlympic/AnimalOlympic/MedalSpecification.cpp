//
//  TestSpecification.cpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/21.
//

#include "MedalSpecification.hpp"
bool MedalSpecification::isSatisfiedBy(AnimalCandidate *t)
{
    if(t->getMedal()>=15)
        return true;
    else
        return false;
}
