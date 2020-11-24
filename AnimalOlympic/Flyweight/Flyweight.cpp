#include "Flyweight.h"

void Flyweight::test()
{
	//欢迎语句，用来介绍本模块的场景、功能和细节
	cout << "*******************************************************" << endl
		 << "*           欢迎来到：动物运动会海报生产工厂          *" << endl
		 << "*                                                     *" << endl
		 << "* 本模块将使用flyweight设计模式模拟海报模式化生产过程 *" << endl
		 << "* 以达到尽可能减少相似对象生成的目的。                *" << endl
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
			cout << endl << "<0 --- 退出  ,1 --- 添加海报, 2 --- 查看所有海报模板>:";
			getline(cin, line);
			switch (line[0])
			{
			case '0':is_finish = true; break;
			case '1':manager.addPoster(); break;
			case '2':fac.printPosters(); break;
			default:cout << "请输入以下字符： 0,1,2" << endl; break;
			}
		} while (!is_finish);
	}
	catch (exception& exc)
	{
		cerr << exc.what() << endl;
	}
}
