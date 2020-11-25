#include "Music.h"
#include "OAAdapter.h"
void Music::play(string Songstype,string SongsName)
{
    if (Songstype=="Bird"){
        cout << "Playing Bird's Songs:  " << SongsName << endl;
        int time1;
        time1 = clock();
        while (clock() - time1 <= 3000) {
            if ((clock() - time1) % 100 == 0) {
                cout << "#";
            }
        }
        cout << endl;
    }else if ((Songstype=="Dolphin")|| (Songstype=="Lion") || (Songstype == "Elephant")){
        OAAdapter playplus;
        playplus.play(Songstype,SongsName);
    }else {
        cout<<"We cannot play "<<Songstype<<"'s song."<<endl;
    }
    return;
}
