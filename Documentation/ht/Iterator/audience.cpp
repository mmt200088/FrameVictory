//
//  audience.cpp
//  Iterator(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#include "audience.hpp"

audience::audienceIterator::audienceIterator(audience* t): animalList(t->animalList)
{
    index=0;
}
bool audience::audienceIterator::hasNext()
{
    if(index<animalList.size())
        return true;
    else
        return false;
}
string audience::audienceIterator::next()
{
    if(hasNext())
        return animalList[index++];
    else
        return NULL;
}
audience::audience()
{
    animalList.clear();
}

void audience::add(string a)
{
    animalList.push_back(a);
}
void audience::remove()
{
    animalList.pop_back();
}
Iterator * audience::getIterator()
{
    return new audience::audienceIterator(this);
}
