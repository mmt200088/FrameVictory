#include "DAO.h"
void DAO::insert(int id, string mes)
{
    idnum++;
    data[idnum] = mes;
    writeln();
    return;
}
void DAO::update(int id, string mes)
{
    int t = 0;
    string ppp="";
    ppp = to_string(id);
    for (int j = 1; j < idnum + 1; j++)
    {
        t = 0;
        for (int k = 1; k < 8; k++)
        {
            if (data[j][k] != ppp[k])
            {
                t = 1;
            }
        }
        if (t == 0)
        {
            data[j] = mes;
            break;
        }
    }
    writeln();
    return;
}
void DAO::Delete1(int id)
{
    int t = 0;
    string ppp="";
    ppp = to_string(id);
    for (int j = 1; j < idnum + 1; j++)
    {
        t = 0;
        for (int k = 1; k < 8; k++)
        {
            if (data[j][k] != ppp[k])
            {
                t = 1;
            }
        }
        if (t == 0)
        {
            t=j;
            break;
        }
    }
    for (int j=t;j<idnum;j++){
        data[j]=data[j+1];
    }
    idnum--;
    writeln();
    return;
}
string DAO::querybyID(int id){
    int t = 0;
    string ppp="";
    ppp = to_string(id);
    readln();
    for (int j = 1; j < idnum + 1; j++)
    {
        t = 0;
        for (int k = 1; k < 8; k++)
        {
            if (data[j][k] != ppp[k])
            {
                t = 1;
            }
        }
        if (t == 0)
        {
            ppp = data[j];
            break;
        }
    }
    return ppp;
}
void DAO::writeln(){
    for(int j=1;j<idnum+1;j++){
        dbc1.Write(idnum,j,data[j]);
    }
    return;
}
void DAO::readln(){
    for(int j=1;j<idnum+1;j++){
        data[j]=dbc1.Read(j);
    }
    return;
}