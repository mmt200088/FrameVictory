//
//  SpecificationModel.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/21.
//

#ifndef SpecificationPattern_hpp
#define SpecificationPattern_hpp

#include "SpecificationInterface.hpp"
#include "AndSpecification.hpp"
#include "OrSpecification.hpp"
#include "NotSpecification.hpp"
#include "AbstractSpecification.hpp"
#include "MedalSpecification.hpp"
#include "ChampionSpecification.hpp"
#include "HasCheatedSpecification.hpp"
class SpecificationPattern
{
public:
    void test();
};
#endif /* SpecificationPattern_hpp */
