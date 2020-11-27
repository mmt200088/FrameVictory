#include "VO.h"
#include<ctime>

using namespace std;
class DataAccess
{
public:
    void test()
    {
     
        static VO vo1;
        int t = 1; int time1;
        int pid = 0;
        string mes1;
        cout << "DAO全称是（Data Access Objects) ，数据库访问对象，主要的功能就是用于进行数据操作的，在程序的标准开发架构中属于数据访问层的操作。 " ;
        cout << "DAO的目的是仅仅通过更改数据库接口类的信息就可以更改连接的数据库，而上层的增删改查操作统一打包成一条信息由接口类发送给数据库，对于上层类数据库具体存储修改是透明的，而对于数据库来说上层操作是透明的，数据库仅仅是储存信息或者发送信息。";
        cout << "DAO设计模式可以减少代码量，增强程序的可移植性，提高代码的可读性。" << endl << endl;
        cout << "现在用动物运动会的一个例子来为大家展示数据库访问对象模式" << endl << endl;
        cout << "故事背景：运动会结束了，现在组委会希望统计这次运动会上各位参赛运动员的表现情况。作为主办方，我们需要开发这样一个数据库系统，给每个运动员编号，";
        cout << "并将他们的姓名、参加的项目和获得的成绩存入数据库中，同时支持对这个数据库的维护，包括更新数据、删除数据和查询数据。组委会也希望下次举办运动会的时候这个系统可以再次利用。" << endl << endl;

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
        cout << "系统已经退出！谢谢使用" << endl;
        return;
    };
};
