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
    // This Constructor is a fucking disgrace, however i'll run with this at first then i assume i'll set up a map or something ...
    // Although I don't even fucking know if that'd be a decent way yo solve it.
    // Still, better than fucking hardcoding it in the constructor, i bet.
};

#endif /* TRACK_H */
