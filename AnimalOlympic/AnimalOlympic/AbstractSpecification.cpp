//
//  AbstractSpecification.cpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/19.
//

#include "AbstractSpecification.hpp"
SpecificationInterface * AbstractSpecification::And(SpecificationInterface *spec)
{
    return new AndSpecification(this, spec);
}
SpecificationInterface * AbstractSpecification::Or(SpecificationInterface *spec)
{
    return new OrSpecification(this, spec);
}
SpecificationInterface * AbstractSpecification::Not()
{
    return new NotSpecification(this);
}

