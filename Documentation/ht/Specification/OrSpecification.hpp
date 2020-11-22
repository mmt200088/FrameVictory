//
//  OrSpecification.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/19.
//

#ifndef OrSpecification_hpp
#define OrSpecification_hpp

#include "SpecificationInterface.hpp"
#include "AnimalCandidate.hpp"
class OrSpecification : public SpecificationInterface {
private:
    SpecificationInterface *left;
    SpecificationInterface *right;
public:
    OrSpecification(SpecificationInterface *left, SpecificationInterface *right);
    virtual bool isSatisfiedBy(AnimalCandidate *t);
};
#endif /* OrSpecification_hpp */
