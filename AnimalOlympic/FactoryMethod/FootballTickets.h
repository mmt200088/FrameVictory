#pragma once

#include<iostream>
#include<string>
#include"Tickets.h"

using namespace std;

class FootballTickets : public Tickets {
public:
	//门票初始化
	FootballTickets() {
        sports = "football competition";
		time = "19:00 tonight";
		value = 150;
	}

	//展示门票信息
	void showTickets() {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
		cout << "* The ticket is only effective to " << sports << "! *" << endl;
		cout << "* It will start at " << time << "                        *" << endl;
		cout << "* The ticket worths $" << value << "                                *" << endl;
		cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl << endl;
		Sleep(5000);
	}
};

