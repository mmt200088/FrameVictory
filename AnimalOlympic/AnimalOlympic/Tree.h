#include<iostream>
#include<string>
#include<vector>
#include<windows.h>
using namespace std;

// �۲���
class Tree {
public:
	Tree() {};
	void add(string name);
	void getAll();
	void checkOne(string name);

private:
	vector<string> names;
};
