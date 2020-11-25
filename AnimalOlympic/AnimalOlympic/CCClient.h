#pragma once
#include<stack>
#include"CustomeManager.h"
#include<Windows.h>

//衣服使用类
class CCClient {
private:
	CustomeManager* manager;
	stack<FanCustome*> *allcustome;//记录所有借出的衣服
public:
	CCClient() {
		manager = new CustomeManager();
		allcustome = new stack<FanCustome*>();
	}

	//借衣服并记录
	void applyCustome() {
		FanCustome* tmp = manager->getCustome();
		if (tmp != NULL) {
			allcustome->push(tmp);
		}
	}

	//还衣服并删除记录
	void popCustome() {
		FanCustome* tmp = allcustome->top();
		allcustome->pop();
		manager->returnCustome(tmp);
	}

	//展示所有衣服状态
	void show() {
		int free = manager->checkCustome();
		int used = 5 - free;
		cout << "There are 5 customes in total.Now," << used << " of them have already been lent, only " << free << " customes left." << endl << endl;
		Sleep(3000);
	}
};