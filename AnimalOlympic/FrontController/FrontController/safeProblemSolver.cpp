#include<iostream>
#include<string>
#include"RequestSolvable.h"
#include "SafeProblemSolver.h"
#include <Windows.h>
using namespace std;

 void safeProblemSolver::solveRequest(string request) {
	 cout << "SafeProblemSolver: " << "工作人员正在前往相应地点解决请求中……请耐心等待喔~~" << endl;
	 Sleep(2000);
	 cout << "SafeProblemSolver: " << "已解决请求：" << request << endl;
	 cout << "-----------" << endl;
	 Sleep(1000);
}

 string safeProblemSolver::getRequestType() {
	 return "safeProblem";
 }