#pragma once

#include<iostream>
#include<string>
#include"Tickets.h"

using namespace std;

class RunningTickets : public Tickets {
public:
	//������ʼ��
	RunningTickets() {
        sports = "10000 meters running competition";
		time = "14:00 this afternoon";
		value = 30;
	}

	//չʾ��Ʊ��Ϣ
	void showTickets() {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN);
		cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
		cout << "* The ticket is only effective to " << sports << "! *" << endl;
		cout << "* It will start at " << time <<"                             *" << endl;
		cout << "* The ticket worths $" << value <<"                                             *" << endl;
		cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl << endl;
		Sleep(5000);
	}
};
