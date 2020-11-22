#pragma once
#include<string>
#include<iostream>
#include"Memento.h"
using namespace std;

class SnookerCompetition {
private:
	State state;
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

	void setState(State state) {
		this->state = state;
	}

	State getState() {
		return state;
	}

	Memento* saveStateToMemento() {
		return new Memento(state);
	}

	void getStateFromMemento(Memento* Memento) {
		state = Memento->getState();
	}
};
