#include "Personnel.h"
#include<iostream>
#include"Department.h"
using namespace std;

Personnel::Personnel(string name) {
	this->name = name;
}

Personnel* Personnel::getManager() {
	return this->department->getManager();
}

void Personnel::setDepartment(Department* department) {
	this->department = department;
}

string Personnel::getName() {
	return this->name;
}