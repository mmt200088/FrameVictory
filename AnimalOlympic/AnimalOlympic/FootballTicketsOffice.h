#pragma once

#include<iostream>
#include<string>
#include"TicketsOffice.h"
#include"FootballTickets.h"

using namespace std;

//足球门票工厂类
class FootballTicketsOffice : public TicketsOffice {
public:
	//重写，返回对应产品类
	Tickets* sellTickets() {
		Tickets* footballticket = new FootballTickets();

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Tickets Seller:OK, you want one running competition ticket." << endl;
		Sleep(1000);
		cout << "Tickets Seller:It's $" << footballticket->getValue() << endl << endl;
		Sleep(3000);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(Groping for your wallet)" << endl;
		Sleep(3000);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout << "Customer(you):OK,here is the money." << endl << endl;
		Sleep(3000);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Tickets Seller:Please wait a moment." << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(Printing Ticket)" << endl;
		Sleep(5000);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
		cout << "Tickets Seller:Here you are!Have a nice day!" << endl << endl;
		Sleep(3000);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
		cout << "(Look at your ticket)" << endl;

		return footballticket;
	};
};