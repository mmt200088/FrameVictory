//
//  aggregate.hpp
//  Iterator(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#ifndef aggregate_hpp
#define aggregate_hpp

#include"TicketChecking.hpp"
#include "iterator.hpp"
class aggregate   //抽象的聚合类
{
    virtual void add(string)=0;   //增加成员
    virtual void remove()=0;   //减少成员
    virtual Iterator* getIterator()=0;  //返回迭代器
};

#endif /* aggregate_hpp */
