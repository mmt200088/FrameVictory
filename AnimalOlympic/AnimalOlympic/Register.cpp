#include<iostream>
#include<string>
#include<vector>
#include"Register.h"

using namespace std;


void Register::test() {
	Tree* myTree = new Tree();//田径比赛

	cout << "Register模式简介：\n";
	cout << "注册模式（Register Pattern)解决全局共享，交换对象。也叫注册树模式。\n";
	cout << "将变量加入注册树中，可以实现全局共享。\n\n\n";
	Sleep(2000);
	cout << "InlineTemp模式简介：\n";
	cout << "内联临时变量（Inline Temp）解决临时变量妨碍重构的问题。";
	cout << "将变量只被临时引用时，直接用赋值表达式代替变量名。在本例中，体现为引用小动物的名字。\n\n\n";
	Sleep(2 * 1000);
	cout << "故事简介：\n";
	cout << "每一项比赛开始前，选手们必须先进行签到，才可以参加比赛。\n";
	Sleep(2 * 1000);
	cout << "作为跳高比赛的签到官，请帮我们完成跳高比赛的签到任务吧！\n";
	Sleep(2 * 1000);
	cout << "*************************************************\n"
		<< "你可以进行以下操作：\n"
		<< "A：帮助小动物们签到！（提示：参加调高比赛的选手有小兔子、小袋鼠、小松鼠、长颈鹿、小跳蚤）\n"
		<< "B：查询现在已经签到了的小动物！\n"
		<< "C：查询某一个选手是否已经完成签到！\n"
		<< "Q：退出测试！\n"
		<< "*************************************************\n";

	int mm = 1;
	while (mm == 1)
	{
		cout << "\n接下来，请通过输入A、B、C、D来选择您想要做的事情：\n";
		char M;
		cin >> M;
		switch (M)
		{
		case 'A':
		{
			string name;
			cout << "请输入要签到的小动物的名字：";
			cin >> name;
			myTree->add(name);
			break;
		}

		case 'B':
		{	
			myTree->getAll();
			break;
		}

		case 'C':
		{
			string name;
			cout << "请输入要查找的小动物的名字：";
			cin >> name;
			myTree->checkOne(name);
			break;
		}
		case 'Q':
		{
			mm = 2;
			break;
		}
		default: {
			cout << "您的动作过于前卫，有点脱离我们的故事线！请您在ABCD中选择一个！\n";
			break;
		}

		}

	}
}
