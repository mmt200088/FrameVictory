//
//  improvedRun.hpp
//  ReplaceTempWithQuery
//
//  Created by 侯彤 on 2020/11/25.
//

#ifndef improvedRecordOrder_hpp
#define improvedRecordOrder_hpp

#include "rbasic.h"
#include "Order.hpp"
class improvedRecordOrder
{
private:
    OOrder * order;
public:
    improvedRecordOrder(OOrder * order);
    void Calculate();
    string getName() const;
    string getAddress() const;
    double getFinalPrice() const;
};
#endif /* improvedRun_hpp */
