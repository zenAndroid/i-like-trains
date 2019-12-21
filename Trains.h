#ifndef TRAINS_H
#define TRAINS_H

#include <thread>
#include <iostream>
#include <Track.h>

class Trains {
private:
    int initialPos;
    int currentPos;
    Track associatedTrack;
    std::thread circulate;

public:
    Trains();
};

#endif /* TRAINS_H */
