#include "Flyweight.h"

void Flyweight::test()
{
	PosterFactory fac;
	PosterManager manager(fac);
	bool is_finish = false;
	try
	{
		do
		{
			string line;
			cout << endl << "<0 --- �˳�  ,1 --- ��Ӻ���>:";
			getline(cin, line);
			switch (line[0])
			{
			case '0':is_finish = true; break;
			case '1':manager.addPoster(); break;
			default:cout << "�����������ַ��� 0,1" << endl; break;
			}
		} while (!is_finish);
	}
	catch (exception& exc)
	{
		cerr << exc.what() << endl;
	}
}
