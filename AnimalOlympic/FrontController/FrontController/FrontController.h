#pragma once
#include<iostream>
#include<string>
#include"FacilityProblemSolver.h"
#include "OlympicServiceCenter.h"
#include <Windows.h>
class FrontController {
public:
	void test() {
		cout << "ʵ��ģʽ��FrontController ʵ�ֳ������˶����������" << endl;
		cout << "ģʽ���ܣ�" << endl;
		cout << "  ǰ�˿�����ģʽ��Front Controller Pattern���������ṩһ�����е���������ƣ������������е�һ���ദ���ɸ������ݲ�ͬ��������ִ����Ӧ�Ķ����������������֤/��Ȩ/��¼��־�����߸�������Ȼ������󴫸���Ӧ�Ĵ�������������������ģʽ��ʵ��:" << endl;
		cout << "  ǰ�˿�������Front Controller��:����Ӧ�ó���������������ĵ����������Ӧ�ó�������ǻ��� web ��Ӧ�ó���Ҳ�����ǻ��������Ӧ�ó���" << endl;
		cout << "  ��������Dispatcher��: ǰ�˿���������ʹ��һ������������������������Ӧ�ľ��崦�����" << endl;
		cout << "  ��ͼ��View��: ��ͼ��Ϊ����������Ķ���" << endl;
		cout << "  ģʽ��Դ��https://www.runoob.com/design-pattern/front-controller-pattern.html" << endl;
		cout << "            http://www.uml.org.cn/sjms/200901074.asp" << endl;
		cout << "ʵ�ֳ������˶����������" << endl;
		cout << "          ���˶�����еĹ����У����������ۿ������Ĺ��ڡ������˶�Ա����ѵ�飬�����ܻ��������ָ��������⣬��ˣ��˶������췽�����˶����˶���������ģ�ר��ΪС�������ṩ���ַ����Լ�������������С������������˶��Ὺչ�ڼ�����ʲô���⣬������������������ѯ��Ѱ��������������Ļ����С����������Ĳ�ͬ�������ǵ�������࣬Ȼ���ȡ��ͬ�Ĵ�ʩ�����" << endl;
		cout << "------------------------------------------------------------------------------------" << endl;
		Sleep(2000);

		OlympicServiceCenter* olympicServiceCenter = new OlympicServiceCenter();
		cout << "��ӭ���������˶����������~~~��������Ҫʲô���İ�����~~" << endl;
		Sleep(2000);
		cout << "С�������������������ˣ������������������������ģ���Ҫ���ҽ�ư���" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("safeProblem", "С�����������������ˣ�����ȥ��һ������");
		cout << "С���ӷ��ֹ���ϯ�����λ�����~�������ù�����Ա��һ��" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("FacilityProblem", "ɭ�ֹ㳡�Ĺ���ϯ���λ�����~��������һ����");
		cout << "�治�ɣ�ͻȻ�����˴��꣡С����֪����������ܱ�����������" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("MatchProblem", "��������ܱ����������ڽ�����");
		cout << "���������˶�������Է���ͻȻ���ڷ���Ե���һ��ʯͷ�����������������Ҫȥ����̨Ͷ�ߣ�" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("FoodProblem", "�����ķ�������ô��ʯͷѽ��");
		cout << "�˶�����е������ݱ��ͻȻ����һ������ī��������Ƥ�µ������ߣ�" << endl;
		Sleep(1500);
		olympicServiceCenter->dispatchRequest("NotExistProblem", "���������µġ�");
		system("pause");
	}
};