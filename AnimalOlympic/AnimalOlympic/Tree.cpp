#include<iostream>
#include<string>
#include<vector>
#include"Tree.h"

using namespace std;


void Tree::add(string name) {
    cout << "���ڰ���" << name << "����ǩ�������Ե�.\n";
    Sleep(1000);
    cout << "���ڰ���" << name << "����ǩ�������Ե�..\n";   
    Sleep(1000);
    cout << "���ڰ���" << name << "����ǩ�������Ե�...\n";
    Sleep(1000);
	names.push_back(name);
	cout << name << "�Ѿ�ǩ����ɿ���ֱ�ӱ���������л��Ĺ�����\n";
}

void Tree::checkOne(string name) {
    cout << "���ڲ���" << name << "�Ƿ����ǩ�������Ե�.\n";
    Sleep(1000);
    cout << "���ڲ���" << name << "�Ƿ����ǩ�������Ե�..\n";
    Sleep(1000);
    cout << "���ڲ���" << name << "�Ƿ����ǩ�������Ե�...\n";
    if (names.empty()) {
        cout << name << "��û�н���ǩ��Ŷ��" << endl;
    }
    else {
        vector<string>::iterator result = find(names.begin(), names.end(), name); //����3
        Sleep(1000);
        if (result == names.end()) //û�ҵ�
            cout << name << "��û�н���ǩ��Ŷ��" << endl;
        else //�ҵ�
            cout << name << "�Ѿ�ǩ�����ˣ�����ֱ�ӱ�������" << endl;
    }

}

void Tree::getAll() {
    cout << "���ڼ��ǩ���������Ե�.\n";
    Sleep(1000);
    cout << "���ڼ��ǩ���������Ե�..\n";
    Sleep(1000);
    cout << "���ڼ��ǩ���������Ե�...\n";
    Sleep(1000);
    if (names.empty()){
        cout << "��û��С���������ǩ����\n";
    }
    vector<string>::iterator it = names.begin();
    for (; it != names.end(); ++it) {
        cout << *it <<" ";
    }
    cout << "�Ѿ������ǩ����\n";
}

