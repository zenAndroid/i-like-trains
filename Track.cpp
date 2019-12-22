#include <iostream>
#include "Track.h"
#include "Trains.h"
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
    // Forgive me Allah for what i'm about to do ...
    //
    // TODO: Fill this up
    //
    for (int i = 0; i < trackLength; ++i) {
        if (!(i== fLocation || i == sLocation || i == tLocation)) { // As long as we're not in the stations locations
            m_actualTrack[i] = new Cell(CellType::CELL); // We'll create a new regular Cell
            // If dynamic allocation causes a problem i think i'll switch to declaring m_actualTrack as a vector of `Cell`s
            // Then modify the constructor to make the regular cellType the default
        }
    }
}

/* 2}}} */
/* 1}}} */
