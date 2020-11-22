#pragma once

#include<iostream>
#include<string>
#include"Tickets.h"

using namespace std;

class SwimmingTickets : public Tickets {
public:
	//参数初始化
	SwimmingTickets() {
        sports = "400 meters Medley";
		time = "10:00 this morning";
		value = 100;
	}

	//展示门票信息
	void showTickets() {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
		cout << "* The ticket is only effective to " << sports << "!  *" << endl;
		cout << "* It will start at " << time << "                 *" << endl;
		cout << "* The ticket worths $" << value << "                              *" << endl;
		cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl << endl;
		Sleep(5000);
	}

};