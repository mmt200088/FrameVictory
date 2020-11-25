#include "Otheranimals.h"

class OAAdapter
{
public:
    void play(string Songstype, string SongsName)
    {
        Otheranimals playsongs;
        if (Songstype == "Lion")
        {
            playsongs.playLion(SongsName);
        }
        if (Songstype == "Dolphin")
        {
            playsongs.playDolphin(SongsName);
        }
        if (Songstype == "Elephant")
        {
            playsongs.playDolphin(SongsName);
        }
        return;
    }
};