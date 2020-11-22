//
//  iterator.hpp
//  Iterator(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#ifndef iterator_hpp
#define iterator_hpp

#include "TicketChecking.hpp"
class Iterator  //抽象的迭代器类
{
public:
    virtual bool hasNext()=0 ;  //判断后面是否还有成员
    virtual string next()=0;  //返回当前位置的值并往后移一位
};
#endif /* iterator_hpp */
