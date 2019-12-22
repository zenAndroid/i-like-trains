#ifndef TRAINS_H
#define TRAINS_H

#include <thread>
#include <iostream>
#include "Track.h"

class Trains {
private:
    int m_initialPos;
    int m_currentPos;
    Track m_associatedTrack;
    std::thread m_circulate;

public:
    Trains();
    Trains(int initialPos, Track associatedTrack);
};

#endif /* TRAINS_H */
