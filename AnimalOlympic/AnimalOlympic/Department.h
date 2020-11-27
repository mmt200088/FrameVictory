#pragma once
#include"Personnel.h"
class Department
{
public:
	string name;
	Department(Personnel* manager,string name);
	~Department() {}
	Personnel* getManager();
	Personnel* manager;
};

