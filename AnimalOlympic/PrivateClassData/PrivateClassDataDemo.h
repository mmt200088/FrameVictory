#include "Storage.h"

class Mtest
{
public:
    void test()
    {
        cout << "Private Class Data��˽�������ݣ���װ��ĳ�ʼ�����ݣ�";
        cout << "���ƶ�������Եĸ��ģ���������������ʹ�����ݵķ�����ĸ��롣" << endl
             << endl;
        cout << "�������������ʱ����ʹ�� Private Class Data ģʽ��" << endl;
        cout << "    ��ĳ�ʼ��������һ���ԵĲ����޸ĵ����ݡ�" << endl;
        cout << "    ��Ҫ���ƶ���ĳ�ʼ�����ݵĸ��ġ�" << endl;
        cout << "    Ԥ���Գ�ʼ�����ݵĲ���Ҫ�ĸ��ġ�" << endl;
        cout << "�����ö����˶����һ��������Ϊ���չʾ˽��������ģʽ" << endl
             << endl;
        cout << "���ر���ǰ����Ҫ¼�벻ͬ�˶�Ա��������Ϣ����Щ��Ϣ�����ڶԾ����˶�Ա�ķ��飬�����޸�ֻ�ܲ鿴" << endl;
        cout << "�������˶�Ա���������˶�Ա��ź�������Ϣ����λkg����" << endl;
        int pid;
        int nkg;
        string name1;
        cin >> name1 >> pid >> nkg;
        storage Sto(name1,pid,nkg);
        cout << "���˶�Ա���������˶�Ա��ź�������ϢΪ��" << endl;
        Sto.showMessage();
        return;
    }
};