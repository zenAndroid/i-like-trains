#include <Trains.h>
#include <Track.h>
#include <iostream>
#include <thread>

/* Constructors {{{1 */
Trains::Trains(){
    std::cout << "Something ain't right" << std::endl;
    std::cout << "Train constructor with no parameters" << std::endl;
}

Train::Train(int initialPos, Track associatedTrack){
    m_initialPos = initialPos; // Init
    // And since, at the time of construction
    // the `current` position of the train is also
    // technically its initial position
    // then ...
    //
    m_currentPos = initialPos;

    // Associate track
    m_associatedTrack = associatedTrack;


    // Still need to know what to do to set up the threading stuff
    // Fucking Java trying to infect me ...
    //
}

/* 1}}} */
