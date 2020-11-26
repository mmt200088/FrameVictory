//
//  ReplaceTempWithQueryPattern.cpp
//  ReplaceTempWithQuery
//
//  Created by 侯彤 on 2020/11/26.
//

#include "ReplaceTempWithQueryPattern.hpp"
void ReplaceTempWithQueryPattern::run()
{
    cout<<"***********************************************\n";
    cout<<"ReplaceTempWithQuery Pattern\n";
    cout<<"Welcome to our animal shop payment system\nWe have a discount for all of you\nNow we need you input your information about your order\nWe have two systems and we want to show the diffrence between them";
    cout<<"***********************************************\n";
    while (1)
    {
        cout<<"Your first name? [q] to quit\n";
        string firstname,lastname,location,store;
        double price;
        cin>>firstname;
        if(firstname=="q")
            break;
        cout<<"Your last name?\n";
        cin>>lastname;
        cout<<"The total price?\n";
        cin>>price;
        cout<<"The location?\n";
        cin>>location;
        cout<<"The store's name?\n";
        cin>>store;
        Order * order=new Order(firstname,lastname,price,location,store);
        cout<<"Now there is our past payment system:\n";
        cout.precision(2);
        pastRecordOrder * past=new pastRecordOrder(order);
        past->Calculate();
        cout<<endl;
        cin.get();
        cin.get();
        cout<<"Now there is our current payment system:\n";
        improvedRecordOrder * now=new improvedRecordOrder(order);
        cout<<"Your name is "+now->getName();
        cout<<"\nYour trading place is "+now->getAddress();
        cout.precision(2);
        cout<<"\nYour final price is "+to_string(now->getFinalPrice());
        cout<<endl;
        cout.precision(2);
        now->Calculate();
        cin.get();
        cin.get();
        cout<<"\nDo you want to continue?[Y/N]\n";
        char a;
        cin>>a;
        if(a=='N')
            break;
    }
}
