#ifndef TRAINS_H
#define TRAINS_H

#include <thread>
#include <iostream>
#include "Track.h"

class Trains
{
public:
    std::string m_trainName;
    int m_initialPos;
    int m_currentPos;
    Track * m_associatedTrack; // Declaring this as a pointer makes me feel like i might make this harder for me than is necessary
    std::thread m_circulate;
    // -------------------------------------------------- //
    Trains();
    ~Trains();
    Trains(int, Track *, std::string);
    void circulate();
};

#endif /* TRAINS_H */
