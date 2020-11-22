#include "DataBaseConnect.h"
using namespace std;
class DAO
{
private:
   string data[10001];
   int idnum=0;
   DBC dbc1;
public:
    void insert(int id,string mes);
    void update(int id,string mes);
    void Delete1(int id);
    string querybyID(int id);
    void writeln(); 
    void readln();
 };
