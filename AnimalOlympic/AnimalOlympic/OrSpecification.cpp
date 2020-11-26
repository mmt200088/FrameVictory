//
//  OrSpecification.cpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/19.
//

#include "OrSpecification.hpp"
OrSpecification::OrSpecification(SpecificationInterface *left, SpecificationInterface *right)
{
    this->left = left;
    this->right = right;
}
bool OrSpecification::isSatisfiedBy(AnimalCandidate *t)
{
    return left->isSatisfiedBy(t) || right->isSatisfiedBy(t);//封装逻辑或
}

