#include "OlympicServiceCenter.h"
#include <iostream>
#include<string>
#include"RequestDispatcher.h"
#include<Windows.h>
using namespace std;
void OlympicServiceCenter::trackRequest(string requestType, string requestContent) {
	cout << descStr << "trackRequest : 记录下请求，请求种类：" << requestType + "，请求内容：" << requestContent << endl;
	Sleep(2000);
}

void OlympicServiceCenter::dispatchRequest(string requestType, string requestContent) {
	trackRequest(requestType, requestContent);
	dispatcher->dispatch(requestType, requestContent);
}