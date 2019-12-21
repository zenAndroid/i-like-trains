#ifndef TRACK_H
#define TRACK_H

#include <vector>
#include <Cell.h>

class Track {
private:
    int trackLength;
    std::vector<Cell> actualTrack;

public:
    Track();
    Track(int trackLength, Cell fStation, Cell sStation, Cell tStation, int fLocation, int sLocation, int tLocation); // So much for generality ..
};

#endif /* TRACK_H */
