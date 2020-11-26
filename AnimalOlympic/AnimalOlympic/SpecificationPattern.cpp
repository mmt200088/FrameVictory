//
//  SpecificationModel.cpp
//  Specification(DesignPattern)
//
//  Created by 侯彤 on 2020/11/21.
//

#include "SpecificationPattern.hpp"
void SpecificationPattern::test()
{
    MedalSpecification * s1=new MedalSpecification();
    ChampionSpecification * s2=new ChampionSpecification();
    HasCheatedSpecification * s3=new HasCheatedSpecification();
    cout<<"*********************************************************************************************************************\n";
    cout<<"Specification\n";
    cout<<"Welcome to the prize evaluation after all games. \nWe will determine the level of each animal's prize according to the number of champion trophies and the total number of medals. \nHowever, if you cheat in the game, you won't receive any awards\n";
    cout<<"Now you are an animal player,you should input some information about your achievement"<<endl;
    cout<<"*********************************************************************************************************************\n";
    while(1)
    {
        int championNum,medalNum;
        char i;
        cout<<"Have you cheated in a game?[Y/N]"<<endl;
        cin>>i;
        bool ischeated;
        if(i=='y'||i=='Y')
            ischeated = true;
        else if(i=='n'||i=='N')
            ischeated = false;
        else
            ischeated = true;
        cout<<"input the number of championship that you have won"<<endl;
        cin>>championNum;
        cout<<"input the number of medals that you have won"<<endl;
        cin>>medalNum;
        AnimalCandidate * animal=new AnimalCandidate(championNum,medalNum,ischeated);
        if(s3->Not()->isSatisfiedBy(animal))//逻辑非应用
        {
            cout<<"You win the ";
            if(s1->And(s2)->isSatisfiedBy(animal))//逻辑与应用
            {
                cout<<"First Prize!\n";
            }
            else if(s1->Or(s2)->isSatisfiedBy(animal))//逻辑或应用
            {
                cout<<"Second Prize!\n";
            }
            else
            {
                cout<<"Third Prize!\n";
            }
        }
        else
        {
            cout<<"Sorry, you can not get any Prize\n";
        }
        char q;
        cout<<"Do you want to quit?[Y/N]"<<endl;
        cin>>q;
        if(q=='Y')
            break;
    }
}
