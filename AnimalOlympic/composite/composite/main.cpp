#include<iostream>
#include<vector>
#include<string>
#include<list>
#include"MenuComponent.h"
#include"Menu.h"
#include"MenuItem.h"
#include "composite.h"


using namespace std;



int main() {
    composite* com = new composite();
	com->test();
	return 0;
}