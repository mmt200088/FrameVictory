#pragma once
#include<iostream>
using namespace std;
class Department;
class Personnel
{
public:
	Department* department;
	string name;
	Personnel(string name);
	string getName();
	void setDepartment(Department* department);
	~Personnel() {}
	Personnel* getManager();
};

