#include "Track.h"
#include "Trains.h"
#include "Cell.h"
#include <iostream>
#include <thread>

/* Constructors {{{1 */
Trains::Trains(){
    std::cout << "Something ain't right" << std::endl;
    std::cout << "Train constructor with no parameters" << std::endl;
}

Trains::Trains(int initialPos, Track associatedTrack, std::string trainName){
    m_initialPos = initialPos; // Init
    // And since, at the time of construction
    // the `current` position of the train is also
    // technically its initial position
    // then ...
    //
    m_currentPos = initialPos;

    // Associate track
    m_associatedTrack = associatedTrack;


    m_trainName = trainName; // in this very instructive (and very helpful) comment i tell you that this line of elegant code initializes the string field called m_trainName with the string value trainName :)

    // Still need to know what to do to set up the threading stuff
    // Fucking Java trying to infect me ...
    //
}

/* 1}}} */
