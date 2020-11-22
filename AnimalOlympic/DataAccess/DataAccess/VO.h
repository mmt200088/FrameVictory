#include "DAO.h"
using namespace std;
class VO
{
private:
    int playersid=1854116;
    string playersname;
    int numjion=0;
    string playersjion[10];
    string playersno[10];
    DAO dao1;
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
    void sendmes();
    void deletelvo(int i);
    string queryDB(int i);
};
