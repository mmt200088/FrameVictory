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
        cout << "     欢迎来到动物运动会的体操比赛现场！！！   " << endl;
        string name1;
        cout << "     继续比赛请输入1，结束比赛请输入其他      " << endl;
        cin >> k;
        while (k == 1) {
            cout << "       请输入接下来要比赛的运动员的名字：     " << endl;
            cin >> name1;
            sta1.setName(name1);
            cout << "         接下来要比赛的运动员的名字是：       " << endl;
            cout <<"           " <<sta1.showName() << endl;
            cout << "   <<<<<<<<<<<<<<<<比赛ing>>>>>>>>>>>>>>>>>   " << endl;
            time1 = clock();
            while (clock() - time1 <= 5000) {
            }
            cout << "现在请现场的四位裁判打分：(满分10分，选手得分去掉一个最高分和一个最低分）" << endl;
            for (int i = 1; i < 5; i++)
            {
                cout << "请输入第" << i << "位裁判的打分：" << endl;
                cin >> t;
                sta1.IntputScore(i, t);
            }
            sta1.sendMessage();
            cout << "     继续比赛请输入1，结束比赛请输入其他      " << endl;
            cin >> k;
            system("cls");
        }
        cout << "  体操比赛已经结束，感谢大家的积极参与和热情捧场！" << endl;
        return;
    }
};