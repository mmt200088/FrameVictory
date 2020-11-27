#include "Department.h"
#include<iostream>
using namespace std;

Department::Department(Personnel* manager,string name) {
	this->manager = manager;
	this->name = name;
}

Personnel* Department::getManager() {
	return this->manager;
}