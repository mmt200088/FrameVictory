#include <string>
#include <iostream>
using namespace std;
class Board
{
private:
    string players[1001][2];
    int num3[1001];
    int ii = 0;
    string PlayerName;
public:
    void IntputData(string name1, string mes, int num1);
    void showData();
};
