#include<iostream>
#include<string>
#include"RequestSolvable.h"
#include<Windows.h>
#include "FacilityProblemSolver.h"
using namespace std;

void FacilityProblemSolver::solveRequest(string request) {
	cout << "FacilityProblemSolver: " << "������Ա����ǰ�����ؽ�������С��������ĵȴ��~~" << endl;
	Sleep(2000);
	cout << "FacilityProblemSolver: " << "�ѽ������" << request << endl;
	cout << "-----------" << endl;
	Sleep(1000);
}

string FacilityProblemSolver::getRequestType() {
	return "FacilityProblem";
}