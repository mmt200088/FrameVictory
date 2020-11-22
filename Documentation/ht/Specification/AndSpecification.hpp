//
//  AndSpecification.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/19.
//

#ifndef AndSpecification_hpp
#define AndSpecification_hpp
#include "SpecificationInterface.hpp"
#include "AnimalCandidate.hpp"
class AndSpecification : public SpecificationInterface
{
private:
    SpecificationInterface *left;
    SpecificationInterface *right;
public:
    AndSpecification(SpecificationInterface* left, SpecificationInterface *right);
    virtual bool isSatisfiedBy(AnimalCandidate *t);

};

#endif /* AndSpecification_hpp */
