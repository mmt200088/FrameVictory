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
			cout << endl << "<0-�˳�  ,1-�����ﾶ����, 2-����ˮ�ϳ���, 3-�ٰ����, 4-ά������,>:";
			getline(cin, line);
			switch (line[0])
			{
			case '0':
				is_finish = true;
				break;
			case '1':
				cout << "�����볡������";
				getline(cin, name);
				if (grounds.find(name) != grounds.end())
					cout << "�������Ѵ��ڣ�" << endl;
				else
					grounds.insert(make_pair(name, new TrackGround(name, st_before_using)));
				break;
			case '2':
				cout << "�����볡������";
				getline(cin, name);
				if (grounds.find(name) != grounds.end())
					cout << "�������Ѵ��ڣ�" << endl;
				else
					grounds.insert(make_pair(name, new PoolGround(name, st_before_using)));
				break;
			case '3':
				cout << "�����볡������";
				getline(cin, name);
				if (grounds.find(name) != grounds.end())
				{
					SportsGround* ground = grounds[name];
					//��ǰ׼��
					ground->changeState(st_before_using);
					ground->maintainGround();
					//���б���
					ground->useGround();
				}
				else
					cout << "�����������ڣ�" << endl;
				break;
			case '4':
				cout << "�����볡������";
				getline(cin, name);
				if (grounds.find(name) != grounds.end())
				{
					SportsGround* ground = grounds[name];
					//����ά������
					ground->changeState(st_after_used);
					ground->maintainGround();
				}
				else
					cout << "�����������ڣ�" << endl;
				break;
			default:cout << "please input 0,1,2,3,4" << endl; break;
			}
		} while (!is_finish);
	}
	catch (exception& exc)
	{
		cerr << exc.what() << endl;
	}
	//�ͷ����ɷ���Ŀռ�
	for (auto ground : grounds)
	{
		delete ground.second;
	}
}
