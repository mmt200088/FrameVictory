#include "State.h"

void State::test()
{
	bool is_finish = false;
	GroundBeforeUsingState st_before_using;
	GroundAfterUsedState st_after_used;
	map<string, SportsGround*> grounds;
	try
	{
		do
		{
			string line;
			string name;
			cout << endl << "<0-退出  ,1-增加田径场地, 2-增加水上场地, 3-举办比赛, 4-维护场地,>:";
			getline(cin, line);
			switch (line[0])
			{
			case '0':
				is_finish = true;
				break;
			case '1':
				cout << "请输入场地名：";
				getline(cin, name);
				if (grounds.find(name) != grounds.end())
					cout << "场地名已存在！" << endl;
				else
					grounds.insert(make_pair(name, new TrackGround(name, st_before_using)));
				break;
			case '2':
				cout << "请输入场地名：";
				getline(cin, name);
				if (grounds.find(name) != grounds.end())
					cout << "场地名已存在！" << endl;
				else
					grounds.insert(make_pair(name, new PoolGround(name, st_before_using)));
				break;
			case '3':
				cout << "请输入场地名：";
				getline(cin, name);
				if (grounds.find(name) != grounds.end())
				{
					SportsGround* ground = grounds[name];
					//赛前准备
					ground->changeState(st_before_using);
					ground->maintainGround();
					//进行比赛
					ground->useGround();
				}
				else
					cout << "场地名不存在！" << endl;
				break;
			case '4':
				cout << "请输入场地名：";
				getline(cin, name);
				if (grounds.find(name) != grounds.end())
				{
					SportsGround* ground = grounds[name];
					//赛后维护场地
					ground->changeState(st_after_used);
					ground->maintainGround();
				}
				else
					cout << "场地名不存在！" << endl;
				break;
			default:cout << "please input 0,1,2,3,4" << endl; break;
			}
		} while (!is_finish);
	}
	catch (exception& exc)
	{
		cerr << exc.what() << endl;
	}
	//释放自由分配的空间
	for (auto ground : grounds)
	{
		delete ground.second;
	}
}
