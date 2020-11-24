#pragma once
#include <iostream>
#include<string>
#include <map>
#include<vector>
#include "RequestSolvable.h"
#include"FacilityProblemSolver.h"
#include"MatchProblemSolver.h"
#include"SafeProblemSolver.h"
#include "FoodProblemSolver.h"
using namespace std;
class RequestDispatcher {
public:
	
	//在本地变量中存储了全部的请求处理器
	vector<RequestSolvable*> solvers;
	//构造函数，将所有的请求处理器加入到本地存储中。
     RequestDispatcher() {
		 RequestSolvable* sol1 = new MatchProblemSolver();

		 solvers.push_back(sol1);

		 RequestSolvable* sol2 = new safeProblemSolver();

		 solvers.push_back(sol2);
		 RequestSolvable* sol3 = new FacilityProblemSolver();
		 solvers.push_back(sol3);
		 RequestSolvable* sol4 = new FoodProblemSolver();
		 solvers.push_back(sol4);
	}
	 /**
	 * 分配器主函数。
	 * 它负责根据对应请求的种类，
	 * 找到合适的处理器，并将请求转交给它来进行处理。
	 */
	 void dispatch(string requestType, string requestContent);
};