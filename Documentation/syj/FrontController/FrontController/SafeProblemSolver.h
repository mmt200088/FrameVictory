#pragma once
#include<iostream>
#include<string>
#include"RequestSolvable.h"
using namespace std;
class safeProblemSolver :public RequestSolvable {
public:
	virtual string getRequestType();
	virtual void solveRequest(string request);

};