#include "Music.h"


using namespace std;
class Adapter
{
public:
   void test()
   {
       Music music; int time1 = 0;
       cout << "适配器模式（Adapter Pattern）是作为两个不兼容的接口之间的桥梁。这种类型的设计模式属于结构型模式，它结合了两个独立接口的功能。";
       cout << "这种模式涉及到一个单一的类，该类负责加入独立的或不兼容的接口功能。举个真实的例子，读卡器是作为内存卡和笔记本之间的适配器。您将内存";
       cout << "卡插入读卡器，再将读卡器插入笔记本，这样就可以通过笔记本来读取内存卡。" << endl << endl;
       cout << "现在用动物运动会的一个例子来为大家展示适配器模式" << endl << endl;
       cout << "故事背景：运动会开幕式上，邀请了百灵鸟前来献唱一曲，百灵鸟优美的歌声能被为鸟类设计的话筒收音，再由扬声器播出被大多数动物所欣赏。" ;
       cout << "海豚、狮子、大象等动物听说了也要凑热闹来一展歌喉，但是他们的体型各不相同，不能用为鸟类设计的小话筒收音。" ;
       cout << "需要有新设备帮忙收录他们的歌声，再通过扬声器播出。" << endl << endl;
       cout << "本程序的oaadapter类就完成了收录其它动物声音的工作（目前支持狮子、海豚、大象三种其他动物，对应输入Lion、Dolphin和Elephant），再由singing类播出，singing类本身就具有收录鸟类声音的能力。（对应输入Bird）" << endl << endl;
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
