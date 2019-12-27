#include <iostream>
#include "Track.h"
#include "Train.h"
#include "Cell.h"

/* Constructors {{{1 */
/* DEFAULT CONSTRUCTOR {{{2 */
Track::Track()
{
    std::cout << "Call ought never to happen" << std::endl;
    exit(1);
}
/* 2}}} */
/* "Good" CONSTRUCTOR {{{2 */
Track::Track(int trackLength, Cell fStation, Cell sStation, Cell tStation, int fLocation, int sLocation, int tLocation){
        m_trackLength = trackLength;
        m_actualTrack.resize(m_trackLength);
        m_actualTrack.at(fLocation).promoteCell("First station");
        m_actualTrack.at(sLocation).promoteCell("Second station");
        m_actualTrack.at(tLocation).promoteCell("Third station");
        
}

/* 2}}} */
/* 1}}} */
