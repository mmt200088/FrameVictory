//
//  IteratorPattern.cpp
//  Iterator(DesignPattern)
//
//  Created by 侯彤 on 2020/11/20.
//

#include "IteratorPattern.hpp"
void IteratorPattern::run()
{
    audience * audiences=new audience();
    audiences->add("Monkey1");
    audiences->add("Elephant1");
    audiences->add("Monkey2");
    audiences->add("Tiger1");
    audiences->add("Goat1");
    audiences->add("Pig2");
    audiences->add("Rabit1");
    Iterator * i=audiences->getIterator();
    cout<<"*********************************************************************************************************************\n";
    cout<<"Iterator\n";
    cout<<"Now there are some animal audience queuing up for a game, Rabbit July will check their tickets \n";
    cout<<"They are: ";
    while (i->hasNext())
    {
        cout<<i->next()<<" ";
    }
    cout<<endl;
    cout<<"Now you can add an animal or remove the last animal, and we will simulate to check their tickets\n";
    cout<<"*********************************************************************************************************************\n";
    cout<<"Input [add] to add an animal\nInput [remove] to remove the last animal"<<endl;
    string q;
    while(1)
    {
        cin>>q;
        if(q=="add")
        {
            cout<<"input name"<<endl;
            string name;
            cin>>name;
            audiences->add(name);//增加成员
        }
        else if(q=="remove")
        {
            audiences->remove();//减少成员

        }
        else if(q=="quit")
            break;
        Iterator * i=audiences->getIterator();//生成对象的迭代器
        while (i->hasNext())//遍历迭代器
        {
            cout<<"Welcome! "<<i->next()<<endl;
        }
        cout<<endl;
        cout<<"Input [add] to add an animal\nInput remove to remove the last animal"<<endl;
    }
}
