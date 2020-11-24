#include<iostream>
#include<string>
#include"RequestSolvable.h"
#include<Windows.h>
#include "FacilityProblemSolver.h"
using namespace std;

void FacilityProblemSolver::solveRequest(string request) {
	cout << "FacilityProblemSolver: " << "工作人员正在前往场地解决请求中……请耐心等待喔~~" << endl;
	Sleep(2000);
	cout << "FacilityProblemSolver: " << "已解决请求：" << request << endl;
	cout << "-----------" << endl;
	Sleep(1000);
}

string FacilityProblemSolver::getRequestType() {
	return "FacilityProblem";
}