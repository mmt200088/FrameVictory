#include "Statistics.h"

void Statistics::IntputScore(int x,int y)
{
    score1[x] = y;
    return;
}
void Statistics::setName(string y)
{
    PlayerName = y;
    return;
}
string Statistics::showName()
{
    return PlayerName;
}
int Statistics::Sum()
{
    int max = score1[1];
    int min = score1[1];
    int summ = 0;
    for (int j = 1; j < 5; j++)
    {
        summ = summ + score1[j];
        if (score1[j] > max)
        {
            max = score1[j];
        }
        if (score1[j] < min)
        {
            min = score1[j];
        }
    }
    summ = summ - max - min;
    return summ;
}
void Statistics::sendMessage()
{
    string showScore = "";
    int mm=Sum();
    for (int j = 1; j < 5; j++)
    {
        showScore = showScore + "��" +to_string(j)+ "λ���еĸ�����" + to_string(score1[j])+" ";
    }//ƴ���ַ���
    board.IntputData(PlayerName,showScore,mm);
    board.showData();
    return;
}