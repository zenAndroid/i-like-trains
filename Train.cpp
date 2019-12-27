#include "Track.h"
#include "Train.h"
#include "Cell.h"
#include <iostream>
#include <thread>

/* Constructors {{{1 */
Train::Train()
{
    std::cout << "Something ain't right" << '\n';
    std::cout << "Train constructor with no parameters" << '\n';
    exit(1);
}

Train::Train(int initialPos, Track * associatedTrack, std::string trainName)
{
    m_initialPos = initialPos; // Init
    // And since, at the time of construction
    // the `current` position of the train is also
    // technically its initial position
    // then ...
    //
    m_currentPos = initialPos;

    // Associate track
    m_associatedTrack = associatedTrack;


    m_trainName = trainName; // in this very instructive (and very helpful) comment i tell you that this line of elegant code 
    // initializes the string field called m_trainName with the string value trainName :)

    // Still need to know what to do to set up the threading stuff
    // Fucking Java trying to infect me ...
    //
    m_circulate = std::thread(&Train::circulate,this);

    // As per https://stackoverflow.com/questions/29814233/how-to-use-stdthread
    // Please be right!
}

Train::~Train()
{
    if (m_circulate.joinable()) {
        m_circulate.join();
    }
    else {
        std::cout << "Doot doot little bitch" << '\n';
    }
}

/* 1}}} */

/* Member functions {{{1 */

void Train::circulate()
{ // Function that is supposed to run in a thread of some sort, i f*cking hate c++ already god i can see the reference confusion aaaAAAAaaAAA
    while(1){
        // TODO : something
        // Need to calculate the next position the train is going to take.
        m_currentPos = (m_currentPos + 1) % (m_associatedTrack->m_trackLength);
        // This is how you access the corresponding cell : m_associatedTrack->m_actualTrack[m_currentPos];
        // For now I don't want to confuse myself so I'll be doing the oprations chained together
        // until i grasp how i can do stuff like Cell = [that statement]; without hecking myself up
        //
        // ... Let me think
        m_associatedTrack->m_actualTrack[m_currentPos].enter(m_trainName);
        // Presumably enters the cell
        m_associatedTrack->m_actualTrack[m_currentPos].leave(m_trainName);
    }
}

/* 1}}} */
