//
//  pastRun.cpp
//  ReplaceTempWithQuery
//
//  Created by 侯彤 on 2020/11/25.
//

#include "pastRecordOrder.hpp"
pastRecordOrder::pastRecordOrder(OOrder * order)
{
    this->order=order;
}
void pastRecordOrder::Calculate()
{
    string name=order->firstname+" "+order->lastname;
    string address=order->location+" "+order->store;
    double discount;
    if(order->price>2000)
    {
        discount=0.6;
    }
    else if(order->price>1000)
    {
        discount=0.7;
    }
    else if(order->price>200)
    {
        discount=0.8;
    }
    else if(order->price>50)
    {
        discount=0.92;
    }
    else
    {
        discount=0.98;
    }
    double nowprice=order->price*discount;
    if(nowprice>=300)
        nowprice -= order->couponNum;
    cout<<name +" in "+address + " totally payed "+to_string(nowprice)<<endl;
}
