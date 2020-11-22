#include "Add.h"
#include<iostream>
using namespace std;

void Add::visit(Goods* goods) {
	goods->num++;
}
