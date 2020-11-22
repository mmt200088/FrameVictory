//
//  AbstractSpecification.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/19.
//

#ifndef AbstractSpecification_hpp
#define AbstractSpecification_hpp

#include "SpecificationInterface.hpp"
#include "AndSpecification.hpp"
#include "OrSpecification.hpp"
#include "NotSpecification.hpp"
#include "AnimalCandidate.hpp"
class AbstractSpecification : public SpecificationInterface
{
public:
    virtual bool isSatisfiedBy(AnimalCandidate *t)=0;//动物候选者对象是否满足条件
    SpecificationInterface *And(SpecificationInterface *spec);//逻辑与
    SpecificationInterface *Or(SpecificationInterface *spec);//逻辑或
    SpecificationInterface *Not();//逻辑非
};
#endif /* AbstractSpecification_hpp */
