#pragma once
#include<iostream>
#include<string>

using namespace std;

struct State {
	string leftPlayer;
	int leftPoint;
	string rightPlayer;
	int rightPoint;
	string ballMap;

};

class Memento {
	friend class SnookerCompetition;

private:
	State state;

private:
	Memento(State state) {
		this->state = state;
	}

	State getState() {
		return state;
	}
};
