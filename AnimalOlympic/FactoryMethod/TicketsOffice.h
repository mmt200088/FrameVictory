#pragma once

#include<iostream>
#include<string>
#include"Tickets.h"

using namespace std;

//����������
class TicketsOffice {
public:
	//������Ӧ��Ʊ��������д
	virtual Tickets* sellTickets()=0;
};
