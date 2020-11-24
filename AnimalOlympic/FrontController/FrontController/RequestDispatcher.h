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
	
	//�ڱ��ر����д洢��ȫ������������
	vector<RequestSolvable*> solvers;
	//���캯���������е������������뵽���ش洢�С�
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
	 * ��������������
	 * ��������ݶ�Ӧ��������࣬
	 * �ҵ����ʵĴ���������������ת�����������д���
	 */
	 void dispatch(string requestType, string requestContent);
};