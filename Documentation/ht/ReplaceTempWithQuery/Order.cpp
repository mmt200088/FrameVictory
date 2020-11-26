//
//  Order.cpp
//  ReplaceTempWithQuery
//
//  Created by 侯彤 on 2020/11/26.
//

#include "Order.hpp"
Order::Order(string fn,string ln,double price ,string location,string store)
{
    firstname=fn;
    lastname=ln;
    this->price=price;
    this->location=location;
    this->store=store;
}
