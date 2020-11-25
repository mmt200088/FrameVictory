#pragma once
#include<stack>
#include"CustomeManager.h"
#include<Windows.h>

//�·�ʹ����
class CCClient {
private:
	CustomeManager* manager;
	stack<FanCustome*> *allcustome;//��¼���н�����·�
public:
	CCClient() {
		manager = new CustomeManager();
		allcustome = new stack<FanCustome*>();
	}

	//���·�����¼
	void applyCustome() {
		FanCustome* tmp = manager->getCustome();
		if (tmp != NULL) {
			allcustome->push(tmp);
		}
	}

	//���·���ɾ����¼
	void popCustome() {
		FanCustome* tmp = allcustome->top();
		allcustome->pop();
		manager->returnCustome(tmp);
	}

	//չʾ�����·�״̬
	void show() {
		int free = manager->checkCustome();
		int used = 5 - free;
		cout << "There are 5 customes in total.Now," << used << " of them have already been lent, only " << free << " customes left." << endl << endl;
		Sleep(3000);
	}
};