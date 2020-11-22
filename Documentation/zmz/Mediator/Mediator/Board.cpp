#include "Board.h"

void Board::IntputData(string name1,string mes,int num1) {
   ii++;
   players[ii][1]=name1;
   players[ii][2]=mes;
   num3[ii]=num1;
   return;
}
void Board::showData() {
    for(int j=1;j<ii+1;j++){
      cout<<"            选手："<<players[j][1]<<endl;
      cout<<"裁判的打分是:"<<players[j][2]<<endl;
      double nnum = num3[j];
      cout <<"           选手"<< players[j][1] << "的得分是" << nnum << endl;
    }
    return;
}