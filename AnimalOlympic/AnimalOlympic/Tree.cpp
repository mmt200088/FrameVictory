#include<iostream>
#include<string>
#include<vector>
#include"Tree.h"

using namespace std;


void Tree::add(string name) {
    cout << "正在帮助" << name << "进行签到！请稍等.\n";
    Sleep(1000);
    cout << "正在帮助" << name << "进行签到！请稍等..\n";   
    Sleep(1000);
    cout << "正在帮助" << name << "进行签到！请稍等...\n";
    Sleep(1000);
	names.push_back(name);
	cout << name << "已经签到完成可以直接比赛啦！感谢你的工作！\n";
}

void Tree::checkOne(string name) {
    cout << "正在查找" << name << "是否完成签到！请稍等.\n";
    Sleep(1000);
    cout << "正在查找" << name << "是否完成签到！请稍等..\n";
    Sleep(1000);
    cout << "正在查找" << name << "是否完成签到！请稍等...\n";
    if (names.empty()) {
        cout << name << "还没有进行签到哦！" << endl;
    }
    else {
        vector<string>::iterator result = find(names.begin(), names.end(), name); //查找3
        Sleep(1000);
        if (result == names.end()) //没找到
            cout << name << "还没有进行签到哦！" << endl;
        else //找到
            cout << name << "已经签到好了！可以直接比赛啦！" << endl;
    }

}

void Tree::getAll() {
    cout << "正在检查签到簿，请稍等.\n";
    Sleep(1000);
    cout << "正在检查签到簿，请稍等..\n";
    Sleep(1000);
    cout << "正在检查签到簿，请稍等...\n";
    Sleep(1000);
    if (names.empty()){
        cout << "还没有小动物完成了签到！\n";
    }
    vector<string>::iterator it = names.begin();
    for (; it != names.end(); ++it) {
        cout << *it <<" ";
    }
    cout << "已经完成了签到！\n";
}

