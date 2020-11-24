#include "State.h"

void State::test()
{
	//��ӭ��䣬�������ܱ�ģ��ĳ��������ܺ�ϸ��
	cout << "*******************************************************" << endl
		 << "*           ��ӭ�����������˶��᳡��ά��ϵͳ          *" << endl
		 << "*                                                     *" << endl
		 << "* ��ģ�齫ʹ��state��template method���ģʽ          *" << endl
		 << "* ʵ�ֶ����˶��᳡�ݵ�ά��������                      *" << endl
		 << "* ��Ҫ���������ڿ���ǰά�ֳ��������ڿ�����ά�����ࡣ*" << endl
		 << "* ������ع������ҽ�ֹͣ�������뼫�������������������*" << endl
		 << "* �밴�ղ�����ʾʵ�ָ���ܡ�                        *" << endl
		 << "*                                                     *" << endl
		 << "*******************************************************" << endl;

	bool is_finish = false;
	GroundBeforeUsingState st_before_using;
	GroundAfterUsedState st_after_used;
	map<string, SportsGround*> grounds;
	int num_tag = 0;
	try
	{
		do
		{
			string line;
			string name;
			cout << endl << "<0-�˳�  ,1-�����ﾶ����, 2-����ˮ�ϳ���, 3-�ٰ����, 4-ά������, 5-������г���״��>:";
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
			case '5':
				num_tag = 0;
				cout << "����Ϊ���г���״����" << endl;
				for (auto p : grounds)
				{
					num_tag++;
					cout << num_tag << ".";
					p.second->printGroundStatus();
				}
				break;
			default:cout << "please input 0,1,2,3,4,5" << endl; break;
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
