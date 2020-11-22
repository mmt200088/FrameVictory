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
		cout << "此时台球馆唯一一场台球比赛正在火热进行中..." << endl;
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
