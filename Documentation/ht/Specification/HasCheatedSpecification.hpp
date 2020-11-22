//
//  QuelifiedSpecification.hpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/21.
//

#ifndef HasCheatedSpecification_hpp
#define HasCheatedSpecification_hpp

#include "AbstractSpecification.hpp"
class HasCheatedSpecification : public AbstractSpecification//判断候选者是否曾参与作弊
{
public:
    virtual bool isSatisfiedBy(AnimalCandidate *t);
};
#endif /* QuelifiedSpecification_hpp */
