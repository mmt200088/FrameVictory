#include "Music.h"


using namespace std;
class Atest
{
public:
   void test()
   {
       Music music; int time1 = 0;
      cout << "         欢迎来到动物运动会的开幕式！！！     " << endl;
      cout << "             欢迎大家前来献唱一曲             " << endl;
      cout << "首先有请百灵鸟给大家献上《See You Again》" << endl;
      time1 = clock();
      while (clock() - time1 <= 1000) {}
      music.play("Bird", "See You Again");
      int t = 0; string type1, name1;
      cout << "     继续献唱请输入1，结束献唱请输入其他      " << endl;
      cin >> t;
      while (t == 1) {
          
          cout << "请输入你的物种名和要献唱的曲目名称，用空格隔开：" << endl;
          cin >> type1 >> name1;
          cout << "现在有请"<<type1<<"给大家献上《"<<name1<<"》" << endl;
          time1 = clock();
          while (clock() - time1 <= 1000) {}
          music.play(type1,name1);
          cout << "     继续献唱请输入1，结束献唱请输入其他    " << endl;
          cin >> t;
      }
      cout << "         献唱活动结束，感谢各位的参与！       " << endl;
      return;
   };
};
