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
        cout << "DAOȫ���ǣ�Data Access Objects) �����ݿ���ʶ�����Ҫ�Ĺ��ܾ������ڽ������ݲ����ģ��ڳ���ı�׼�����ܹ����������ݷ��ʲ�Ĳ����� " ;
        cout << "DAO��Ŀ���ǽ���ͨ���������ݿ�ӿ������Ϣ�Ϳ��Ը������ӵ����ݿ⣬���ϲ����ɾ�Ĳ����ͳһ�����һ����Ϣ�ɽӿ��෢�͸����ݿ⣬�����ϲ������ݿ����洢�޸���͸���ģ����������ݿ���˵�ϲ������͸���ģ����ݿ�����Ǵ�����Ϣ���߷�����Ϣ��";
        cout << "DAO���ģʽ���Լ��ٴ���������ǿ����Ŀ���ֲ�ԣ���ߴ���Ŀɶ��ԡ�" << endl << endl;
        cout << "�����ö����˶����һ��������Ϊ���չʾ���ݿ���ʶ���ģʽ" << endl << endl;
        cout << "���±������˶�������ˣ�������ί��ϣ��ͳ������˶����ϸ�λ�����˶�Ա�ı����������Ϊ���췽��������Ҫ��������һ�����ݿ�ϵͳ����ÿ���˶�Ա��ţ�";
        cout << "�������ǵ��������μӵ���Ŀ�ͻ�õĳɼ��������ݿ��У�ͬʱ֧�ֶ�������ݿ��ά���������������ݡ�ɾ�����ݺͲ�ѯ���ݡ���ί��Ҳϣ���´ξٰ��˶����ʱ�����ϵͳ�����ٴ����á�" << endl << endl;

        cout << "          ��ӭ�����˶�Ա���ݿ�ϵͳ       " << endl;
        cout <<" ¼���˶�Ա��Ϣ������1���˳�ϵͳ����������:"<<endl;
        cin >> t;
        while (t == 1)
        {
            int choose;
            system("cls");
            cout << "****************************************************" << endl;
            cout << "*     ������ϵͳ����̨�����������ִ����Ӧ����     *" << endl;
            cout << "*                                                  *" << endl;
            cout << "* 1---¼���˶�Ա��ID                               *" << endl;
            cout << "* 2---¼���˶�Ա��������ӦIDΪ���һ�������ID     *" << endl;
            cout << "* 3---¼���˶�Ա�μӱ���������������Ӧ��ϵͬ��     *" << endl;
            cout << "* 4---¼���˶�Ա�μӵı�����Ϣ����Ӧ��ϵͬ��       *" << endl;
            cout << "* 5---¼���˶�Ա�μӵı������Σ���Ӧ��ϵͬ��       *" << endl;
            cout << "* 6---�����һ��¼��ID��¼���������Ϣ�ϴ���DB     *" << endl;
            cout << "* 7---����һ��ID���Ѹ�ID���������Ϣ�����ݿ���ɾ�� *" << endl;
            cout << "* 8---����һ���˶�ԱID�������������ݿ��е���Ϣ     *" << endl;
            cout << "*                                                  *" << endl;
            cout << "****************************************************" << endl;
            cout << " ����������Ҫ���еĲ���:" << endl;
            cin >> choose;
            switch (choose)
            {
            case 1:
                cout << "�������˶�Ա��ID:" << endl;
                cin >> pid;
                vo1.setplayersid(pid);
                break;
            case 2:
                cout << "�������˶�Ա������:" << endl;
                cin >> mes1;
                vo1.setplayersname(mes1);
                break;
            case 3:
                cout <<"�������˶�Ա�μӱ�����������:" << endl;
                cin >> pid;
                vo1.setnumjion(pid);
                break;
            case 4:
                cout <<"�������˶�Ա�μӱ�������ź����ƣ��Կո����:" << endl;
                cin >> pid;
                cin >> mes1;
                vo1.setplayersjion(pid, mes1);
                break;
            case 5:
                cout <<"�������˶�Ա�μӱ����������ε���ź��������Կո����:" << endl;
                cin >> pid;
                cin >> mes1;
                vo1.setplayersno(pid, mes1);
                break;
            case 6:
                cout <<"�����ϴ���Ϣ�����Ե�" << endl;
                time1 = clock();
                while (clock() - time1 <= 4000) {
                    if ((clock() - time1) % 100 == 0) {
                        cout << "@";
                    }
                }
                cout <<endl;
                cout << "���!" << endl;
                vo1.sendmes();

                break;
            case 7:
                cout << "������Ҫɾ����Ϣ���˶�ԱID:" << endl;
                cin >> pid;
                vo1.deletelvo(pid);
                break;
            case 8:
                cout << "������Ҫ��ѯ��Ϣ���˶�ԱID:" << endl;
                cin >> pid;
                cout<<vo1.queryDB(pid)<<endl;
                break;
            default:
                cout <<"������Ϸ��Ĳ�����!"<< endl;
                break;
            }
           
            cout << "����¼���ѯ�˶�Ա��Ϣ������1���˳�ϵͳ����������:" << endl;
            cin >> t;
        }
        cout << "ϵͳ�Ѿ��˳���ллʹ��" << endl;
        return;
    };
};
