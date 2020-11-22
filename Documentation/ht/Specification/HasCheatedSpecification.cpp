//
//  QuelifiedSpecification.cpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/21.
//

#include "HasCheatedSpecification.hpp"
bool HasCheatedSpecification::isSatisfiedBy(AnimalCandidate *t)
{
    return t->getCheat();//查看是否曾经比赛作弊
}
