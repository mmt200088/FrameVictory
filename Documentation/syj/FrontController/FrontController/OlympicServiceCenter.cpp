#include "OlympicServiceCenter.h"
#include <iostream>
#include<string>
#include"RequestDispatcher.h"
#include<Windows.h>
using namespace std;
void OlympicServiceCenter::trackRequest(string requestType, string requestContent) {
	cout << descStr << "trackRequest : ��¼�������������ࣺ" << requestType + "���������ݣ�" << requestContent << endl;
	Sleep(2000);
}

void OlympicServiceCenter::dispatchRequest(string requestType, string requestContent) {
	trackRequest(requestType, requestContent);
	dispatcher->dispatch(requestType, requestContent);
}