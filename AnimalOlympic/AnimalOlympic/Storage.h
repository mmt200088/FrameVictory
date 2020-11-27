#include <string>
#include <iostream>

using namespace std;
class storage
{
private:
    int Nkg;
    string PlayerName;
    int PID; 
public:
    storage(string x,int y,int z){
        Nkg=z;
        PID=y;
        PlayerName=x;
    }
    void showMessage(){
         cout<<PlayerName<<"  "<<PID<<"  "<<Nkg<<"kg"<<endl;
         return;
    }
};
