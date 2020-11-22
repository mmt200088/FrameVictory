#pragma once
#include"FanCustome.h"

//��װ������
class CustomeManager {
private:

	//��ѯ������·�
	FanCustome* find() {
		map<FanCustome*, CustomeStatus*>::iterator iter;
		iter = pool->begin();
		while (iter != pool->end()) {
			if (iter->second->getStatus()) {
				iter->second->setUsing();
				return iter->first;
			}
			iter++;
		}
		return NULL;
	}

	//���ÿ���·�״̬
	int checkfree() {
		map<FanCustome*, CustomeStatus*>::iterator iter;
		iter = pool->begin();
		int result = 0;
		while (iter != pool->end()) {
			if (iter->second->getStatus()) {
				cout << "Custome " << iter->first->getNum() << " has been returned." << endl;
				result++;
			}
			else {
				cout << "Custome " << iter->first->getNum() << " has been rented." << endl;
			}
			iter++;
		}
		return result;
	}

	//�黹�·����޸Ķ����ʵ��״̬
	void free(FanCustome* custome) {
		map<FanCustome*, CustomeStatus*>::iterator iter;
		iter = pool->find(custome);
		iter->second->setFree();
	}

	//�·�״̬��Ƕ����
	class CustomeStatus {
	private:
		bool status = true;//״̬
	public:
		void setUsing() {
			status = false;//����Ϊ����ʹ��
		}
		void setFree() {
			status = true;//����Ϊ����
		}
		bool getStatus() {
			return status;//����״̬
		}
	};

	map<FanCustome*, CustomeStatus*>* pool;//�����
	int poolSize = 5;//����ش�С��������Ϊ5���·�

public:
	CustomeManager() {
        //����ʵ������������
		pool = new map<FanCustome*, CustomeStatus*>();
		for (int i = 0; i < poolSize; i++) {
			pool->insert(pair<FanCustome*, CustomeStatus*>(new FanCustome(i), new CustomeStatus()));
		}
	}

	//���·��ӿ�
	FanCustome* getCustome() {
		return find();
	}

	//���·��ӿ�
	void returnCustome(FanCustome* custome) {
		free(custome);
	}

	//��ѯ�·�״̬
	int checkCustome() {
		return checkfree();
	}
};