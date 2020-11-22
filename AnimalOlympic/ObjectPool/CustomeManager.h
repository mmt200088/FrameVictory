#pragma once
#include"FanCustome.h"

//服装操作类
class CustomeManager {
private:

	//查询并租借衣服
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

	//输出每件衣服状态
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

	//归还衣服，修改对象池实例状态
	void free(FanCustome* custome) {
		map<FanCustome*, CustomeStatus*>::iterator iter;
		iter = pool->find(custome);
		iter->second->setFree();
	}

	//衣服状态，嵌套类
	class CustomeStatus {
	private:
		bool status = true;//状态
	public:
		void setUsing() {
			status = false;//设置为正在使用
		}
		void setFree() {
			status = true;//设置为空闲
		}
		bool getStatus() {
			return status;//返回状态
		}
	};

	map<FanCustome*, CustomeStatus*>* pool;//对象池
	int poolSize = 5;//对象池大小，即上限为5件衣服

public:
	CustomeManager() {
        //创建实例并放入对象池
		pool = new map<FanCustome*, CustomeStatus*>();
		for (int i = 0; i < poolSize; i++) {
			pool->insert(pair<FanCustome*, CustomeStatus*>(new FanCustome(i), new CustomeStatus()));
		}
	}

	//借衣服接口
	FanCustome* getCustome() {
		return find();
	}

	//还衣服接口
	void returnCustome(FanCustome* custome) {
		free(custome);
	}

	//查询衣服状态
	int checkCustome() {
		return checkfree();
	}
};