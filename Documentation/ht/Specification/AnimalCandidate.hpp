//
//  Animal.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/20.
//

#ifndef AnimalCandidate_hpp
#define AnimalCandidate_hpp

#include "basic.h"
class AnimalCandidate //动物获奖候选人
{
private:
    int championNum;//冠军数量
    int medalNum;//总的奖牌数量
    bool HasCheat;//是否在比赛中作弊过
public:
    AnimalCandidate(int ,int ,bool );
    int getChampion();
    int getMedal();
    bool getCheat();
};
#endif /* Animal_hpp */
