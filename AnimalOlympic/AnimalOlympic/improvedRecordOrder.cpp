//
//  improvedRun.cpp
//  ReplaceTempWithQuery
//
//  Created by 侯彤 on 2020/11/25.
//

#include "improvedRecordOrder.hpp"
improvedRecordOrder::improvedRecordOrder(OOrder * order)
{
    this->order=order;
}
void improvedRecordOrder::Calculate()
{
    cout<<getName() +" in "+getAddress() + " totally payed "+to_string(getFinalPrice())<<endl;
}
string improvedRecordOrder::getName() const
{
    return order->firstname+" "+order->lastname;
}
string improvedRecordOrder::getAddress() const
{
    return order->location+" "+order->store;
}
double improvedRecordOrder::getFinalPrice() const
{
    if(order->price>2000)
    {
        return 0.6*order->price-order->couponNum;
    }
    else if(order->price>1000)
    {
        return 0.7*order->price-order->couponNum;
    }
    else if(order->price>=375)
    {
        return 0.8*order->price-order->couponNum;//此时刚好能用优惠券
    }
    else if(order->price>200)
    {
        return 0.8*order->price;
    }
    else if(order->price>50)
    {
        return 0.92*order->price;
    }
    else
    {
        return 0.98*order->price;
    }
}
