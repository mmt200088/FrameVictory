//
//  AndSpecification.cpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/19.
//

#include "AndSpecification.hpp"
AndSpecification::AndSpecification(SpecificationInterface* left, SpecificationInterface *right)
{
    this->left = left;
    this->right = right;
}

bool AndSpecification::isSatisfiedBy(AnimalCandidate* t)
{
    return left->isSatisfiedBy(t) && right->isSatisfiedBy(t);//封装逻辑与
}

