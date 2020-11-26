//
//  TestSpecification.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/21.
//

#ifndef MedalSpecification_hpp
#define MedalSpecification_hpp

#include "AbstractSpecification.hpp"
class MedalSpecification : public AbstractSpecification//判断候选者的奖牌是否满足要求
{
public:
    virtual bool isSatisfiedBy(AnimalCandidate *t);
};
#endif /* TestSpecification_hpp */
