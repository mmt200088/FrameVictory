#include<iostream>
#include<string>
#include"RequestSolvable.h"
#include "FoodProblemSolver.h"
#include<Windows.h>
using namespace std;

void FoodProblemSolver::solveRequest(string request) {
	cout << "FoodProblemSolver: " << "������Ա����ǰ��������������С��������ĵȴ��~~" << endl;
	Sleep(2000);
	cout << "FoodProblemSolver: " << "�ѽ������" << request << endl;
	cout << "-----------" << endl;
	Sleep(1000);
}

string FoodProblemSolver::getRequestType() {
	return "FoodProblem";
}