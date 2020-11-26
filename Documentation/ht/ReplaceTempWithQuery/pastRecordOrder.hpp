//
//  pastRun.hpp
//  ReplaceTempWithQuery
//
//  Created by 侯彤 on 2020/11/25.
//

#ifndef pastRecordOrder_hpp
#define pastRecordOrder_hpp

#include "rbasic.h"
#include "Order.hpp"
class pastRecordOrder
{
private:
    Order * order;
public:
    pastRecordOrder(Order *order);
    void Calculate();
};
#endif /* pastRun_hpp */
