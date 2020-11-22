#include <string>
#include <iostream>
using namespace std;
class VO
{
private:
    int playersid;
    string playersname;
    int numjion;
    string playersjion[10];
    string playersno[10];

public:
    void setplayersid(int i);
    void setplayersname(string name);
    void setnumjion(int numb);
    void setplayersjion(int i, string mes);
    void setplayersno(int i, string mes);
    int getplayersid();
    string getplayersname();
    int getnumjion();
    string getplayersjion();
    string getplayersno();
};
