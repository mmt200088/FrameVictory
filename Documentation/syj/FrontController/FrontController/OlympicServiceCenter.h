#pragma once
#include <iostream>
#include<string>
#include"RequestDispatcher.h"
using namespace std;
/**
  ǰ�˿�����������࣬���û�ʹ�ý��档
  �����У����ǽ��˶���ķ���������Ϊǰ�˿�������
  ���ڻ��˶�Ա���˶���������ķ���һЩ����
  ֮�����ǽ����������ǵ�������������ȸ���Ӧ������������������⡣
  ���������ܹ���¼�����е�����ʵ����־�Ĺ��ܡ�
*/
class OlympicServiceCenter {
public:
	RequestDispatcher* dispatcher = new RequestDispatcher();
	// ��¼����ʵ����־���ܡ�
	void trackRequest(string requestType, string requestContent);

	 /* ��������Ψһ�Ĺ��к���������������û�ʹ��������ڡ�
     * ֻҪ�����ṩ����������Լ���������ݣ�������õ��������ҵ����ʵ�����������
     * ֮������������û������⡣
	 */
	void dispatchRequest(string requestType, string requestContent);
private:
	string descStr = "DisneyServiceCenter : (";
};