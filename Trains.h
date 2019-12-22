#ifndef TRAINS_H
#define TRAINS_H

#include <thread>
#include <iostream>
#include "Track.h"

class Trains {
private:
    std::string m_trainName;
    int m_initialPos;
    int m_currentPos;
    Track m_associatedTrack;
    std::thread m_circulate;

public:
    Trains();
    Trains(int initialPos, Track associatedTrack, std::string trainName);
};

#endif /* TRAINS_H */
