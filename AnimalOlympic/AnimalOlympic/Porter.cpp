#include "Porter.h"
#include"List.h"
Porter::Porter(string name, int strength) {
	this->name = name;
	this->strength = strength;
}

string Porter::getName() {
	return this->name;
}

int Porter::getStrength() {
	return this->strength;
}

void Porter::Accept(List* list) {
	list->visit(this);
}