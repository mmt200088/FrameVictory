#include<iostream>
#include<string>
#include<vector>
#include<windows.h>
using namespace std;

// π€≤Ï’ﬂ
class Tree {
public:
	Tree() {};
	void add(string name);
	void getAll();
	void checkOne(string name);

private:
	vector<string> names;
};
