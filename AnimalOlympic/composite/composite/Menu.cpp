#include<iostream>
#include<vector>
#include<string>
#include<list>
#include "MenuComponent.h"
#include"Menu.h"
#include <Windows.h>

using namespace std;
void  Menu::Show(int depth) //ֻ����ʾ��������Ӻ�������Ϊ����Ҷ���
{
	for (int i = 0; i < depth; i++)
		cout << "-";
	cout << m_name << endl;
}
void Menu::Add(MenuComponent *pCom) {
	menuComponentList.push_back(pCom);
}
void Menu::remove(MenuComponent *pCom) {
	menuComponentList.pop_back();
}
MenuComponent*  Menu::getChild(int i) {
	return menuComponentList.at(i);
}
void Menu:: print() {
	cout << m_name << endl;
	cout << "-------------------------------------------------------" << endl;
	vector<MenuComponent*>::iterator it;
	for (it = menuComponentList.begin(); it != menuComponentList.end(); ++it)
	{
		(*it)->print();

	}

	cout << endl;
	Sleep(1000);
}