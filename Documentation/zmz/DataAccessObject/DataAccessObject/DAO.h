#include <string>
#include <iostream>
using namespace std;
class DAO
{
private:
   string data[10001];
   int idnum=0;
public:
    void insert(int id,string mes);
    void update(int id,string mes);
    void Delete1(int id);
    string querybyID(int id);
 };
