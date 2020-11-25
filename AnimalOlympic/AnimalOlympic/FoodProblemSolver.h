#pragma once
#include<iostream>
#include<string>
#include"RequestSolvable.h"
using namespace std;
class FoodProblemSolver :public RequestSolvable {
public:
	virtual string getRequestType();//获取请求的类型
	virtual void solveRequest(string request); //解决请求

};
