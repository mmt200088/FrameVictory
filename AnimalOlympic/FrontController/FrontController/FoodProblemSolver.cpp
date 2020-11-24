#include<iostream>
#include<string>
#include"RequestSolvable.h"
#include "FoodProblemSolver.h"
#include<Windows.h>
using namespace std;

void FoodProblemSolver::solveRequest(string request) {
	cout << "FoodProblemSolver: " << "工作人员正在前往餐厅解决请求中……请耐心等待喔~~" << endl;
	Sleep(2000);
	cout << "FoodProblemSolver: " << "已解决请求：" << request << endl;
	cout << "-----------" << endl;
	Sleep(1000);
}

string FoodProblemSolver::getRequestType() {
	return "FoodProblem";
}