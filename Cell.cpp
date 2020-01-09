// {{{ Includes

#include "tick.h"
#include "Cell.h"
#include "Track.h"
#include "Train.h"
#include <iostream>
#include <mutex>
#include <chrono>

// }}}

/* CONSTRUCTORS {{{1 */

Cell::Cell() { /* {{{2 */
    m_type = CellType::CELL;
    m_cellKey = new std::mutex();
} /* 2}}} */

Cell::Cell(CellType type) {/*{{{2*/
    m_type = type;
    m_cellKey = new std::mutex();
}/*2}}}*/

/* 1}}} */

/* Member functions {{{1 */

// enteringTrain := The train that is going to enter this cell
void Cell::enter(std::string enteringTrain) { /* {{{2 */
    if (m_type == CellType::STATION) {
        std::cout << enteringTrain << " attempting to enter into " << m_cellName << " at SysTick " << WannaBeSysTick++ << "!\n";
    }
    {
        std::lock_guard<std::mutex> lock(*m_cellKey);
        // Reasoning, in the program, when a train will call this Cell's enter function
        // it'll lock the mutex and run the crtical section (ie it'll sleep in this case) and no other thread 
        // can do the same thing *while* holding the key to this cell.
        // Maybe i'm right, maybe not, i'm kinda afraid i'll run into the same non-copyable/non-movable
        // bullshit i ran into when i tried to make the sensible-seeming decision to make a mutex a field in a class
        // but apparently that's not how things work in sepples, go figure ...
        if (m_type == CellType::STATION) {
            std::cout << enteringTrain << " entered station " << m_cellName << " !\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
        } else {
            // If this is a cell, then we don't really announce anything so we just sleep ...
            std::this_thread::sleep_for(std::chrono::milliseconds(750));
            // This is not verbose :)
            // Not in the least.
        }
    }
} /* 2}}}*/

void Cell::leave(std::string leavingTrain) { /* {{{2 */
    if (m_type == CellType::STATION) {
            std::cout << leavingTrain << " is leaving " << m_cellName << " at Systick " <<  WannaBeSysTick << "!\n";
    }
} /* 2}}}*/

void Cell::promoteCell(std::string cellName) { /* {{{2 */
    m_type = CellType::STATION;
    m_cellName = cellName;
} /* 2}}}*/

/* 1}}} */
