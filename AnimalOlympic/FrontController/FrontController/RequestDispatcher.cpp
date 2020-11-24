#include <iostream>
#include<string>
#include <map>
#include<vector>
#include "RequestSolvable.h"
#include"FacilityProblemSolver.h"
#include"MatchProblemSolver.h"
#include"SafeProblemSolver.h"
#include"FoodProblemSolver.h"
#include "RequestDispatcher.h"
using namespace std;
void RequestDispatcher::dispatch(string requestType, string requestContent) {
	vector<RequestSolvable*>::iterator it;
	for (it = solvers.begin(); it != solvers.end(); ++it)
	{
		string str = (*it)->getRequestType();
		if (str==requestType) {
		    (*it)->solveRequest(requestContent);
			
			return;
		}
}
	cout << "RequestDispatcher " << "dispatch : ����ʧ�ܣ�û���ҵ����ʵ��������ߡ�" << endl;
}