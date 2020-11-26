//
//  Order.hpp
//  ReplaceTempWithQuery
//
//  Created by 侯彤 on 2020/11/26.
//

#ifndef Order_hpp
#define Order_hpp

#include"rbasic.h"
class OOrder
{
public:
    string firstname;
    string lastname;
    double price;
    double couponNum;//优惠券面额
    string location;
    string store;
    OOrder(string fn,string ln,double price ,string location,string store);
};
#endif /* Order_hpp */
