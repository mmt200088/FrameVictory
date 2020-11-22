#include "VO.h"

void VO::setplayersid(int i){
    playersid=i;
    return;
}
void VO::setplayersname(string name){
    playersname=name;
    return;
}
void VO::setnumjion(int numb){
    numjion=numb;
    return;
}
void VO::setplayersjion(int i, string mes){
    playersjion[i]=mes;
    return;
}
void VO::setplayersno(int i, string mes){
    playersno[i]=mes;
    return;
}
int VO::getplayersid(){
    return playersid;
}
string VO::getplayersname(){
    return playersname;
}
int VO::getnumjion(){
    return numjion;
}
string VO::getplayersjion(){
    string ppp;
    for(int j=1;j<numjion+1;j++){
        ppp=ppp+"该运动员参加了项目"+playersjion[j]+"  ";
    }
    return ppp;
}
string VO::getplayersno(){
     string ppp;
     for(int j=1;j<numjion+1;j++){
        ppp=ppp+"该运动员参加项目"+playersjion[j]+"的名次是"+playersno[j]+" ";
    }
    return ppp;
}