#ifndef MenuH
#define MenuH
#include<iostream>
#include<vector>
#include<string>
#include<list>
#include "MenuComponent.h"

using namespace std;
class Menu : public MenuComponent
{
public:
	vector<MenuComponent*> menuComponentList;
	Menu(string name, string place, string time, string description) :MenuComponent(name, place, time, description) {
		m_name = name;
		m_description = description;
	}
	virtual ~Menu() {}
	void Add(MenuComponent *pCom);
	void Show(int depth); 
	
	void remove(MenuComponent *pCom);
	MenuComponent* getChild(int i); //获取子菜单
	void print();
};
#endif