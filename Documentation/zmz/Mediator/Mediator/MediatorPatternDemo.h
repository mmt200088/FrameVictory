#include "Statistics.h"
#include<ctime>

using namespace std;
class Mtest
{
public:
    void test()
    {
        Statistics sta1;
        int time1; int t = 0; int k = 1;
        cout << "     ��ӭ���������˶������ٱ����ֳ�������   " << endl;
        string name1;
        cout << "     ��������������1��������������������      " << endl;
        cin >> k;
        while (k == 1) {
            cout << "       �����������Ҫ�������˶�Ա�����֣�     " << endl;
            cin >> name1;
            sta1.setName(name1);
            cout << "         ������Ҫ�������˶�Ա�������ǣ�       " << endl;
            cout <<"           " <<sta1.showName() << endl;
            cout << "   <<<<<<<<<<<<<<<<����ing>>>>>>>>>>>>>>>>>   " << endl;
            time1 = clock();
            while (clock() - time1 <= 5000) {
            }
            cout << "�������ֳ�����λ���д�֣�(����10�֣�ѡ�ֵ÷�ȥ��һ����߷ֺ�һ����ͷ֣�" << endl;
            for (int i = 1; i < 5; i++)
            {
                cout << "�������" << i << "λ���еĴ�֣�" << endl;
                cin >> t;
                sta1.IntputScore(i, t);
            }
            sta1.sendMessage();
            cout << "     ��������������1��������������������      " << endl;
            cin >> k;
            system("cls");
        }
        cout << "  ��ٱ����Ѿ���������л��ҵĻ������������������" << endl;
        return;
    }
};