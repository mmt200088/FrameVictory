//
//  ChainsOfResponsibilityPattern.cpp
//  ChainsOfResponsibility(DesignPattern)
//
//  Created by 侯彤 on 2020/11/20.
//

#include "ChainsOfResponsibilityPattern.hpp"
void ChainsOfResponsibilityPattern::test()
{
    vector<string> arr={"common","internal","surgery","eye","pediatrics"};
    vector<Doctor*>  doctors =
    {new EmergencyDoctor("Emergency","Charlie"),new NormalDoctor(arr[0],"Bob"),new NormalDoctor(arr[1],"Fred"),new NormalDoctor(arr[2],"John"),new AttendingDoctor(arr[2],"Diana"),new AttendingDoctor(arr[0],"Julia"),new CheifDoctor(arr[0],"Einus"),new AttendingDoctor(arr[3],"Alen"),new AttendingDoctor(arr[4],"Elmo"),new CheifDoctor(arr[4],"Mario"),new CheifDoctor(arr[3],"Cherry"),new CheifDoctor(arr[2],"Haro"),new CheifDoctor(arr[1],"Buky"),new CheifDoctor(arr[0],"Lucas")};
    for(auto i=doctors.begin();i!=doctors.end()-1;i++)
    {
        (*i)->setNext(*(i+1));   //构建责任链
    }
    cout<<"***********************************************************************************************************\n";
    cout<<"ChainsOfResponsibility"<<endl;
    cout<<"Welcome to our animal hospital .It's free for all the players and audience"<<endl;
    cout<<"Now you are a sick animal, and then we need you to show us your basic information"<<endl;
    cout<<"***********************************************************************************************************\n";
    while (1)
    {
        int healthValue;
        string name;
        int aspectNum;
        cout<<"Please input your name(input [quit] to terminate this pattern)"<<endl;
        cin>>name;
        if(name!="quit")
        {
            cout<<"Please input your healthValue (0~100). The bigger,the healthier."<<endl;
            cin>>healthValue;
            cout<<"Please input what's wrong with you. [0]-common disease  [1]-internal disease [2]-surgical disease [3]-eye disease [4]-pediatric disease"<<endl;
            cin>>aspectNum;
            Patient *patient = new Patient(healthValue,name,arr[aspectNum]);
            doctors[0]->FindDoctorToCure(patient);//从责任链首端出发寻找负责对象
        }
        else
            break;
        cout<<"press any key to continue"<<endl;
        cin.get();
    }
    for(auto i=doctors.begin();i!=doctors.end();i++)
    {
        delete *i;
    }
}
