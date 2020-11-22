#include "DataBaseConnect.h"

string DBC::Read(int r)
{
    string ppp;
    FILE* stream1;
    freopen_s(&stream1, "data.sql","r",stdin); //输入重定向，输入数据将从data.sql文件中读取
    for (int j=1; j < r + 1; j++)
    {
        cin >> ppp;
    }
    fclose(stdin); //关闭重定向输入
    return ppp;
}
void DBC::Write(int rall, int r, string mes)
{
    FILE* stream1;
    freopen_s(&stream1,"data.sql", "r",stdin); //输入重定向，输入数据将从data.sql文件中读取
    for (int j=1; j < rall + 1; j++)
    {
        cin >> datacache[j];
    }
    fclose(stdin);                    //关闭重定向输入
    freopen_s(&stream1,"data.sql", "w",stdout); //输出重定向，输出数据将保存data.sql文件中
    for (int j=1; j < r; j++)
    {
        cout << datacache[j];
    }
    cout << mes;
    for (int j=r+1; j < rall+1; j++)
    {
        cout << datacache[j];
    }
    fclose(stdout); //关闭重定向输出
    return;
}