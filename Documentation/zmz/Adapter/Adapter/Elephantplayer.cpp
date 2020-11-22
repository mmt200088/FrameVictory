#include "Otheranimals.h"

void Otheranimals::playElephant(string SongsName)
{
    cout << "Playing Elephant's Songs:  " << SongsName << endl;
    time1 = clock();
    while (clock() - time1 <= 3800) {
        if ((clock() - time1) % 100 == 0) {
            cout << "&";
        }
    }
    cout << endl;
    return;
}