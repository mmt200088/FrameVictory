#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
/**
* ���������ĳ����࣬�൱��JAVA�Ľӿڡ����Ƕ�����һ����������ķ�����
* ���ҿ��Ի����������������ࡣ
*/
class RequestSolvable {
public:
	//���ʵ������
	virtual void solveRequest(string request)=0;
	//��ȡ������������͡�
	virtual string  getRequestType() = 0;
};