#include "Statistics.h"
#include<ctime>

using namespace std;
class Mediator
{
public:
    void test()
    {
        Statistics sta1;
        int time1; int t = 0; int k = 1;
        cout << "模式简介：\n";
        cout << "中介者模式（Mediator Pattern）是用来降低多个对象和类之间的通信复杂性。";
        cout << "这种模式提供了一个中介类，该类通常处理不同类之间的通信，并支持松耦合，使代码易于维护。中介者模式属于行为型模式，" ;
        cout << "用一个中介对象来封装一系列的对象交互，中介者使各对象不需要显式地相互引用，从而使其耦合松散，而且可以独立地改变它们之间的交互。" << endl << endl;
        cout << "现在用动物运动会的一个例子来为大家展示中介者模式" << endl << endl;
        cout << "故事背景：运动会怎么能少了体操项目呢？和人类体操比赛相同，有四个裁判同时给运动员打分，结果会去掉一个最高分和一个最低分后求和。";
        cout << "结果均会显示在大屏幕上，免去了向一个一个观众通知结果的麻烦。" << endl << endl;
        cout << "四个裁判可以向计分终端发送打分结果，计分终端向所有的观众广播展示分数。我们将创建两个类Board和Statistics。Statistics对象使用Board方法来展示他们的打分。" << endl << endl;
        cout << "注：大屏幕会更新显示所有参与比赛运动员的信息，每次裁判打完分后该大屏幕就会更新一次" << endl << endl;
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
        }
        cout << "  体操比赛已经结束，感谢大家的积极参与和热情捧场！" << endl;
        return;
    }
};