#pragma once
#include<iostream>
#include<string>
#include"RequestSolvable.h"
using namespace std;
class FacilityProblemSolver :public RequestSolvable {
public:
	virtual string getRequestType();//获取自身的请求类型。
	virtual void solveRequest(string request); //解决实际请求。

};