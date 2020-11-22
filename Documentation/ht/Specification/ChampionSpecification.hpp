//
//  SecondPrize.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/21.
//

#ifndef ChampionSpecification_hpp
#define ChampionSpecification_hpp

#include "AbstractSpecification.hpp"
class ChampionSpecification : public AbstractSpecification//判断候选者的冠军是否满足要求
{
public:
    virtual bool isSatisfiedBy(AnimalCandidate *t);
};
#endif /* SecondPrize_hpp */
