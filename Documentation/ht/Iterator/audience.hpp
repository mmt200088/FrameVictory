//
//  audience.hpp
//  Iterator(DesignPattern)
//
//  Created by 侯彤 on 2020/11/15.
//

#ifndef audience_hpp
#define audience_hpp

#include "TicketChecking.hpp"
#include "aggregate.hpp"
#include "iterator.hpp"
class audience : public aggregate
{
private:
    class audienceIterator : public Iterator  //观众类内部实现迭代器
    {
    private:
        int index;
        vector<string> & animalList;//指向audience类animalList的一个引用
    public:
        audienceIterator(audience*);
        virtual bool hasNext();
        virtual string next();
    };
protected:
    vector<string>  animalList;
public:
    audience();
    virtual void add(string);
    virtual void remove();
    virtual Iterator* getIterator();
};

#endif /* audience_hpp */
