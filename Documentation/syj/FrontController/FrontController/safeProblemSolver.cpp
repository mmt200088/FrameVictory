#include<iostream>
#include<string>
#include"RequestSolvable.h"
#include "SafeProblemSolver.h"
#include <Windows.h>
using namespace std;

 void safeProblemSolver::solveRequest(string request) {
	 cout << "SafeProblemSolver: " << "������Ա����ǰ����Ӧ�ص��������С��������ĵȴ��~~" << endl;
	 Sleep(2000);
	 cout << "SafeProblemSolver: " << "�ѽ������" << request << endl;
	 cout << "-----------" << endl;
	 Sleep(1000);
}

 string safeProblemSolver::getRequestType() {
	 return "safeProblem";
 }