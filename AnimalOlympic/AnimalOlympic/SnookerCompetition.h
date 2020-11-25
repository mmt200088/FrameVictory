#pragma once
#include<string>
#include<iostream>
#include"Memento.h"
using namespace std;

class SnookerCompetition {
private:
	SState state;
	static SnookerCompetition* instance;
	SnookerCompetition() {
		cout << "��ʱ̨���Ψһһ��̨��������ڻ��Ƚ�����..." << endl;
	}

public:
	static SnookerCompetition* get_instance() {
		if (instance == nullptr) {
			instance = new SnookerCompetition();
		}
		return instance;
	}

	void setState(SState state) {
		this->state = state;
	}

	SState getState() {
		return state;
	}

	Memento* saveStateToMemento() {
		return new Memento(state);
	}

	void getStateFromMemento(Memento* Memento) {
		state = Memento->getState();
	}
};
