#include "Otheranimals.h"

void Otheranimals::playLion(string SongsName)
{
    cout << "Playing Lion's Songs:  "<<SongsName << endl;
    time1 = clock();
    while (clock() - time1 <= 1500) {
        if ((clock() - time1) % 100 == 0) {
            cout << "*!";
        }
    }
    cout << endl;
    return;
}