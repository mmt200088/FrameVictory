#include "VO.h"
#include<ctime>

using namespace std;
class DAtest
{
public:
    void test()
    {
     
        static VO vo1;
        int t = 1; int time1;
        int pid = 0;
        string mes1;
        cout << "          欢迎来到运动员数据库系统       " << endl;
        cout <<" 录入运动员信息请输入1，退出系统请输入其他:"<<endl;
        cin >> t;
        while (t == 1)
        {
            int choose;
            system("cls");
            cout << "****************************************************" << endl;
            cout << "*     这里是系统控制台，输入操作数执行相应操作     *" << endl;
            cout << "*                                                  *" << endl;
            cout << "* 1---录入运动员的ID                               *" << endl;
            cout << "* 2---录入运动员姓名，对应ID为最近一次输入的ID     *" << endl;
            cout << "* 3---录入运动员参加比赛的种类数，对应关系同上     *" << endl;
            cout << "* 4---录入运动员参加的比赛信息，对应关系同上       *" << endl;
            cout << "* 5---录入运动员参加的比赛名次，对应关系同上       *" << endl;
            cout << "* 6---将最近一次录入ID后录入的所有信息上传至DB     *" << endl;
            cout << "* 7---输入一个ID，把该ID及其相关信息从数据库中删除 *" << endl;
            cout << "* 8---输入一个运动员ID并返回它在数据库中的信息     *" << endl;
            cout << "*                                                  *" << endl;
            cout << "****************************************************" << endl;
            cout << " 请输入你所要进行的操作:" << endl;
            cin >> choose;
            switch (choose)
            {
            case 1:
                cout << "请输入运动员的ID:" << endl;
                cin >> pid;
                vo1.setplayersid(pid);
                break;
            case 2:
                cout << "请输入运动员的名字:" << endl;
                cin >> mes1;
                vo1.setplayersname(mes1);
                break;
            case 3:
                cout <<"请输入运动员参加比赛的种类数:" << endl;
                cin >> pid;
                vo1.setnumjion(pid);
                break;
            case 4:
                cout <<"请输入运动员参加比赛的序号和名称，以空格隔开:" << endl;
                cin >> pid;
                cin >> mes1;
                vo1.setplayersjion(pid, mes1);
                break;
            case 5:
                cout <<"请输入运动员参加比赛所得名次的序号和排名，以空格隔开:" << endl;
                cin >> pid;
                cin >> mes1;
                vo1.setplayersno(pid, mes1);
                break;
            case 6:
                cout <<"正在上传信息，请稍等" << endl;
                time1 = clock();
                while (clock() - time1 <= 4000) {
                    if ((clock() - time1) % 100 == 0) {
                        cout << "@";
                    }
                }
                cout <<endl;
                cout << "完成!" << endl;
                vo1.sendmes();

                break;
            case 7:
                cout << "请输入要删除信息的运动员ID:" << endl;
                cin >> pid;
                vo1.deletelvo(pid);
                break;
            case 8:
                cout << "请输入要查询信息的运动员ID:" << endl;
                cin >> pid;
                cout<<vo1.queryDB(pid)<<endl;
                break;
            default:
                cout <<"请输入合法的操作数!"<< endl;
                break;
            }
           
            cout << "继续录入查询运动员信息请输入1，退出系统请输入其他:" << endl;
            cin >> t;
        }
        return;
    };
};
