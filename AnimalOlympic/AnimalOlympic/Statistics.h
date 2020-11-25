
#include <string>
#include <iostream>
#include "Board.h"
using namespace std;
class Statistics
{
private:
    Board board;
    int score1[11];
    string PlayerName;
public:
    void IntputScore(int x,int y);
    void setName(string y);
    string showName();
    void sendMessage();
    int Sum();

};
