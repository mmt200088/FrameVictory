//
//  Animal.cpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/20.
//

#include "AnimalCandidate.hpp"
AnimalCandidate::AnimalCandidate(int a,int b,bool c)
{
    championNum=a;
    medalNum=b;
    HasCheat=c;
}
int AnimalCandidate::getChampion()
{
    return championNum;
}
int AnimalCandidate::getMedal()
{
    return medalNum;
}
bool AnimalCandidate::getCheat()
{
    return HasCheat;
}
