//
//  NotSpecification.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/19.
//

#ifndef NotSpecification_hpp
#define NotSpecification_hpp

#include "SpecificationInterface.hpp"
#include "AnimalCandidate.hpp"
class NotSpecification : public SpecificationInterface {
private:
    SpecificationInterface *spec;
public:
    NotSpecification(SpecificationInterface* spec);
    virtual bool isSatisfiedBy(AnimalCandidate *t);
};
#endif /* NotSpecification_hpp */
