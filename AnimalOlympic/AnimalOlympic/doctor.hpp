# pragma warning (disable:4819)
#ifndef doctor_hpp
#define doctor_hpp
#include "basic.hpp"
#include "patient.hpp"
class Doctor  //抽象的医生类
{
private:
    string name;  //医生名字
    Doctor* next;  //责任链的下属医生
protected:
    string kind;    //医生所属的种类
    string DoctorLevel;//医生的等级
    int patientsNum;   //表示病人的数量，超过5个则不能再继续收治病人
    virtual bool isQualified(Patient* patient)=0;    //医生是否满足看病的条件
    virtual void Cure(Patient* patient);  //成功找到本医生并去治疗
    virtual void fail(Patient* patient);   //最终没能找到医生
public:
    Doctor(string kind,string name);
    virtual ~Doctor(){};
    void FindDoctorToCure(Patient * patient);    //从责任链起始开始寻找医生
    Doctor* setNext(Doctor * next);    //设定下一个负责对象，构建责任链
    friend ostream & operator<<( ostream & os,const Doctor * c);
};

#endif /* doctor_hpp */
