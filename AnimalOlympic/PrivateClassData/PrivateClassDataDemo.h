#include "Storage.h"

class Mtest
{
public:
    void test()
    {
        cout << "Private Class Data（私有类数据）封装类的初始化数据，";
        cout << "控制对类的属性的更改，并保持类数据与使用数据的方法间的隔离。" << endl
             << endl;
        cout << "当以下情况成立时可以使用 Private Class Data 模式：" << endl;
        cout << "    类的初始化数据是一次性的不可修改的数据。" << endl;
        cout << "    需要控制对类的初始化数据的更改。" << endl;
        cout << "    预防对初始化数据的不必要的更改。" << endl;
        cout << "现在用动物运动会的一个例子来为大家展示私有类数据模式" << endl
             << endl;
        cout << "举重比赛前，需要录入不同运动员的体重信息，这些信息被用于对举重运动员的分组，不可修改只能查看" << endl;
        cout << "请输入运动员的姓名、运动员编号和体重信息（单位kg）：" << endl;
        int pid;
        int nkg;
        string name1;
        cin >> name1 >> pid >> nkg;
        storage Sto(name1,pid,nkg);
        cout << "该运动员的姓名、运动员编号和体重信息为：" << endl;
        Sto.showMessage();
        return;
    }
};