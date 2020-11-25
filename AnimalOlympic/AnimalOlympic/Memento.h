#pragma once
#include<iostream>
#include<string>

using namespace std;

struct SState {
	string leftPlayer;
	int leftPoint;
	string rightPlayer;
	int rightPoint;
	string ballMap;

};

class Memento {
	friend class SnookerCompetition;

private:
	SState state;

private:
	Memento(SState state) {
		this->state = state;
	}

	SState getState() {
		return state;
	}
};
