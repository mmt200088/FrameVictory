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
    string ppp="";
    for(int j=1;j<numjion+1;j++){
        ppp=ppp+playersjion[j]+",";
    }
    return ppp;
}
string VO::getplayersno(){
     string ppp="";
     for(int j=1;j<numjion+1;j++){
        ppp=ppp+playersno[j]+",";
    }
    return ppp;
}
void VO::sendmes(){
    string test1,connect1;
    test1=dao1.querybyID(playersid);
    connect1=to_string(playersid)+","+playersname+","+to_string(numjion)+","+getplayersjion()+","+getplayersno()+";";
    if (test1==to_string(playersid)){
        dao1.insert(playersid,connect1);
    } else
    {
        dao1.update(playersid,connect1);
    }
    return;
}
void VO::deletelvo(int i){
    dao1.Delete1(i);
    return;
}
string VO::queryDB(int i){
    string ppp;
    ppp=dao1.querybyID(i);
    if (ppp == to_string(i)) {
        ppp = "该ID不存在！";
    }
     return ppp;
}