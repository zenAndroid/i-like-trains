#ifndef TRACK_H
#define TRACK_H

#include <vector>
#include "Cell.h"

class Track
{
public:
    int m_trackLength;
    std::vector<Cell> m_actualTrack; // 2019-12-22 15:05 zenAndroid -- Just decided to turn this into a Cell-pointers vector
    // I can see the bullet hole in my foot already
    Track();
    Track(int, Cell, Cell, Cell, int, int, int);
    // This Constructor is a fucking disgrace, however i'll run with this at first then i assume i'll set up a map or something ...
    // Although I don't even fucking know if that'd be a decent way to solve it.
    // Still, better than fucking hardcoding it in the constructor, I bet.
};

#endif /* TRACK_H */
