#pragma once
#include<iostream>
#include<string>
#include"RequestSolvable.h"
using namespace std;
class FoodProblemSolver :public RequestSolvable {
public:
	virtual string getRequestType();//��ȡ���������
	virtual void solveRequest(string request); //�������

};
