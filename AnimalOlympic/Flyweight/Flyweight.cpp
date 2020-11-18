#include "Flyweight.h"

void Flyweight::test()
{
	//��ӭ��䣬�������ܱ�ģ��ĳ��������ܺ�ϸ��
	cout << "*******************************************************" << endl
		 << "*           ��ӭ�����������˶��ả����������          *" << endl
		 << "*                                                     *" << endl
		 << "* ��ģ�齫ʹ��flyweight���ģʽģ�⺣��ģʽ���������� *" << endl
		 << "* �Դﵽ�����ܼ������ƶ������ɵ�Ŀ�ġ�                *" << endl
		 << "*                                                     *" << endl
		 << "*******************************************************" << endl;
	PosterFactory fac;
	PosterManager manager(fac);
	bool is_finish = false;
	try
	{
		do
		{
			string line;
			cout << endl << "<0 --- �˳�  ,1 --- ��Ӻ���, 2 --- �鿴���к���ģ��>:";
			getline(cin, line);
			switch (line[0])
			{
			case '0':is_finish = true; break;
			case '1':manager.addPoster(); break;
			case '2':fac.printPosters(); break;
			default:cout << "�����������ַ��� 0,1,2" << endl; break;
			}
		} while (!is_finish);
	}
	catch (exception& exc)
	{
		cerr << exc.what() << endl;
	}
}
