#include<iostream>
#include<string>
#include"RequestSolvable.h"
#include "MatchProblemSolver.h"
#include <Windows.h>
using namespace std;

void MatchProblemSolver::solveRequest(string request) {
	cout << "MatchProblemSolver: " << "工作人员正在前往比赛地点解决请求中……请耐心等待喔~~" << endl;
	Sleep(2000);
	cout << "MatchProblemSolver: " << "已解决请求：" << request << endl;
	cout << "-----------" << endl;
	Sleep(1000);
}

string MatchProblemSolver::getRequestType() {
	return "MatchProblem";
}