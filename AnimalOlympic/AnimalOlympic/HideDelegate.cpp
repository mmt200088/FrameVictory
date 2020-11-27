#include "HideDelegate.h"
#include"Personnel.h"
#include"Department.h"
#include<iostream>
#include<Windows.h>
using namespace std;

void HideDelegate::test() {
	Personnel* manager1 = new Personnel("狐狸");
	Personnel* manager2 = new Personnel("黄鹂");
	Personnel** personnels = new Personnel * ();
	int personnelNum = 0;
	Department* department1 = new Department(manager1,"仓库管理部门");
	Department* department2 = new Department(manager2, "搬运工管理部门");
	string order,name;
	cout << "设计模式：Hide Delegate" << endl;
	cout << "在类A中创建一个新方法，该方法将调用委派给对象B。同时，让客户端不知道或不依赖类B。" << endl;
	cout << "本故事中类Personnel创建一个方法获取经理，将该方法委托给类Department，而客户端在获取经理时并不知道类Department" << endl;
	cout << endl;
	Sleep(2 * 1000);
	cout << "故事背景：" << endl;
	cout << "动物运动会后勤系统有2个部门：仓库管理部门和搬运工管理部门。我们可以招募动物进入后勤系统。" << endl;
	cout << "例如，我们可以招募老虎、大猩猩加入搬运工部门，招募兔子、小狗加入仓库管理部门。" << endl;
	cout << "在招募动物加入部门之后，我们也可以查看他们的名字和经理名字。" << endl;
	cout << endl;
	Sleep(2 * 1000);
	cout << "---欢迎来到后勤招募系统---" << endl;
	cout << "" << endl;
	for (;;) {
		cout << endl;
		cout << "你可以对后勤招募系统进行如下操作" << endl;
		cout << "操作列表：" << endl;
		cout << "0、退出" << endl;
		cout << "1、查看员工" << endl;
		cout << "2、招募员工" << endl;
		cout << endl;
		cout << "请选择你要进行的操作（输入序号）：";
		cin >> order;
		cout << "指令审核中，请稍后......" << endl;
		Sleep(2 * 1000);
		if (order[0] == '0') {
			for (int i = 0; i < personnelNum; i++) {
				delete personnels[i];
			}
			delete personnels;
			cout << "感谢你的使用，再见！" << endl;
			break;
		}
		if (order[0] == '1') {
			if (personnelNum == 0) {
				cout << "现在还没有员工，请先招募员工" << endl;
				continue;
			}
			for (int i = 0; i < personnelNum; i++) {
				cout << "名称：" << personnels[i]->getName() << "，经理：" << personnels[i]->getManager()->getName() << endl;
			}
			continue;
		}
		if (order[0] == '2') {
			cout << "请选择招募动物的部门（1、仓库管理部门；2、搬运工管理部门）：";
			cin >> order;
			cout << "指令审核中，请稍后......" << endl;
			Sleep(2 * 1000);
			if (order[0] != '1' && order[0] != '2') {
				cout << "输入错误" << endl;
				continue;
			}
			cout << "请输入招募动物的名称：";
			cin >> name;
			personnels[personnelNum] = new Personnel(name);
			
			if (order[0] == '1') {
				personnels[personnelNum]->setDepartment(department1);
			}
			else {
				personnels[personnelNum]->setDepartment(department2);
			}
			personnelNum++;
			cout << "当当当，" << name << "招募成功" << endl;
			continue;
		}
		cout << "输入错误，请重新输入" << endl;
	}
	
}