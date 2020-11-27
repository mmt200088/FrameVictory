#include "HideDelegate.h"
#include"Personnel.h"
#include"Department.h"
#include<iostream>
#include<Windows.h>
using namespace std;

void HideDelegate::test() {
	Personnel* manager1 = new Personnel("����");
	Personnel* manager2 = new Personnel("���");
	Personnel** personnels = new Personnel * ();
	int personnelNum = 0;
	Department* department1 = new Department(manager1,"�ֿ������");
	Department* department2 = new Department(manager2, "���˹�������");
	string order,name;
	cout << "���ģʽ��Hide Delegate" << endl;
	cout << "����A�д���һ���·������÷���������ί�ɸ�����B��ͬʱ���ÿͻ��˲�֪����������B��" << endl;
	cout << "����������Personnel����һ��������ȡ�������÷���ί�и���Department�����ͻ����ڻ�ȡ����ʱ����֪����Department" << endl;
	cout << endl;
	Sleep(2 * 1000);
	cout << "���±�����" << endl;
	cout << "�����˶������ϵͳ��2�����ţ��ֿ�����źͰ��˹������š����ǿ�����ļ����������ϵͳ��" << endl;
	cout << "���磬���ǿ�����ļ�ϻ��������ɼ�����˹����ţ���ļ���ӡ�С������ֿ�����š�" << endl;
	cout << "����ļ������벿��֮������Ҳ���Բ鿴���ǵ����ֺ;������֡�" << endl;
	cout << endl;
	Sleep(2 * 1000);
	cout << "---��ӭ����������ļϵͳ---" << endl;
	cout << "" << endl;
	for (;;) {
		cout << endl;
		cout << "����ԶԺ�����ļϵͳ�������²���" << endl;
		cout << "�����б�" << endl;
		cout << "0���˳�" << endl;
		cout << "1���鿴Ա��" << endl;
		cout << "2����ļԱ��" << endl;
		cout << endl;
		cout << "��ѡ����Ҫ���еĲ�����������ţ���";
		cin >> order;
		cout << "ָ������У����Ժ�......" << endl;
		Sleep(2 * 1000);
		if (order[0] == '0') {
			for (int i = 0; i < personnelNum; i++) {
				delete personnels[i];
			}
			delete personnels;
			cout << "��л���ʹ�ã��ټ���" << endl;
			break;
		}
		if (order[0] == '1') {
			if (personnelNum == 0) {
				cout << "���ڻ�û��Ա����������ļԱ��" << endl;
				continue;
			}
			for (int i = 0; i < personnelNum; i++) {
				cout << "���ƣ�" << personnels[i]->getName() << "������" << personnels[i]->getManager()->getName() << endl;
			}
			continue;
		}
		if (order[0] == '2') {
			cout << "��ѡ����ļ����Ĳ��ţ�1���ֿ�����ţ�2�����˹������ţ���";
			cin >> order;
			cout << "ָ������У����Ժ�......" << endl;
			Sleep(2 * 1000);
			if (order[0] != '1' && order[0] != '2') {
				cout << "�������" << endl;
				continue;
			}
			cout << "��������ļ��������ƣ�";
			cin >> name;
			personnels[personnelNum] = new Personnel(name);
			
			if (order[0] == '1') {
				personnels[personnelNum]->setDepartment(department1);
			}
			else {
				personnels[personnelNum]->setDepartment(department2);
			}
			personnelNum++;
			cout << "��������" << name << "��ļ�ɹ�" << endl;
			continue;
		}
		cout << "�����������������" << endl;
	}
	
}