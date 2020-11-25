#include "Otheranimals.h"

void Otheranimals::playDolphin(string SongsName)
{
    cout << "Playing Dolphin's Songs:  "<< SongsName << endl;
    time1 = clock();
    while (clock() - time1 <= 2600) {
        if ((clock() - time1) % 100 == 0) {
            cout << "%";
        }
    }
    cout << endl;
    return;
};
