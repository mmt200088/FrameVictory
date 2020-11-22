#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
/**
* 请求处理器的抽象类，相当于JAVA的接口。它们都具有一个处理请求的方法，
* 并且可以获得它自身的请求种类。
*/
class RequestSolvable {
public:
	//解决实际请求。
	virtual void solveRequest(string request)=0;
	//获取自身的请求类型。
	virtual string  getRequestType() = 0;
};