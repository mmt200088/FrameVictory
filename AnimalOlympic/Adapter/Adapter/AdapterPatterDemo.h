#include "Music.h"


using namespace std;
class Atest
{
public:
   void test()
   {
       Music music; int time1 = 0;
      cout << "         ��ӭ���������˶���Ŀ�Ļʽ������     " << endl;
      cout << "             ��ӭ���ǰ���׳�һ��             " << endl;
      cout << "��������������������ϡ�See You Again��" << endl;
      time1 = clock();
      while (clock() - time1 <= 1000) {}
      music.play("Bird", "See You Again");
      int t = 0; string type1, name1;
      cout << "     �����׳�������1�������׳�����������      " << endl;
      cin >> t;
      while (t == 1) {
          
          cout << "�����������������Ҫ�׳�����Ŀ���ƣ��ÿո������" << endl;
          cin >> type1 >> name1;
          cout << "��������"<<type1<<"��������ϡ�"<<name1<<"��" << endl;
          time1 = clock();
          while (clock() - time1 <= 1000) {}
          music.play(type1,name1);
          cout << "     �����׳�������1�������׳�����������    " << endl;
          cin >> t;
      }
      cout << "         �׳����������л��λ�Ĳ��룡       " << endl;
      return;
   };
};
