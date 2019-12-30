// {{{ - Includes
#include "tick.h"
#include <iostream>
#include "Track.h"
#include "Train.h"
#include "Cell.h"
// }}}

/* Constructors {{{1 */

Track::Track() {/* {{{2 */
    std::cout << "Call ought never to happen" << std::endl;
    exit(1);
} /* 2}}} */

Track::Track(int trackLength, Cell fStation, Cell sStation, Cell tStation, int fLocation, int sLocation, int tLocation){/* "Good" CONSTRUCTOR {{{2 */
        m_trackLength = trackLength;
        m_actualTrack.resize(m_trackLength);
        m_actualTrack.at(fLocation).promoteCell("First station");
        m_actualTrack.at(sLocation).promoteCell("Second station");
        m_actualTrack.at(tLocation).promoteCell("Third station");
        
        // Need to turn this into an std::map or some such memery
} /* 2}}} */

/* 1}}} */
