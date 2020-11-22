//
//  SecondPrize.cpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/21.
//

#include "ChampionSpecification.hpp"
bool ChampionSpecification::isSatisfiedBy(AnimalCandidate *t)
{
    if(t->getChampion()>=3)
        return true;
    else
        return false;
}
