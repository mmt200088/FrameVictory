#include<iostream>
#include<string>
#include"RequestSolvable.h"
#include "MatchProblemSolver.h"
#include <Windows.h>
using namespace std;

void MatchProblemSolver::solveRequest(string request) {
	cout << "MatchProblemSolver: " << "������Ա����ǰ�������ص��������С��������ĵȴ��~~" << endl;
	Sleep(2000);
	cout << "MatchProblemSolver: " << "�ѽ������" << request << endl;
	cout << "-----------" << endl;
	Sleep(1000);
}

string MatchProblemSolver::getRequestType() {
	return "MatchProblem";
}