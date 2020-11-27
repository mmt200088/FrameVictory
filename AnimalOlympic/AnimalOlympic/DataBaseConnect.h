#include <string>
#include <iostream>
using namespace std;
class DBC
{  
private:
  string datacache[10001];    
public:
    string Read(int r);
    void Write(int rall,int r,string mes);
};