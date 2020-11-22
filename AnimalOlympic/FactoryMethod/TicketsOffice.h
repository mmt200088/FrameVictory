#pragma once

#include<iostream>
#include<string>
#include"Tickets.h"

using namespace std;

//工厂抽象类
class TicketsOffice {
public:
	//生产对应门票，子类重写
	virtual Tickets* sellTickets()=0;
};
