#include "Cell.h"
#include "Track.h"
#include "Train.h"
#include <iostream>
#include <mutex>

/* CONSTRUCTORS {{{1 */
/* DEFAULT CONSTRUCTOR {{{2 */
Cell::Cell()
{
    m_type = CellType::CELL;
    m_cellKey = new std::mutex();
}
/* 2}}} */

/* Sensible constructor {{{2 */

Cell::Cell(CellType type, std::string cellName)
{
    m_type = type;
    // TODO: probably need to initialze the mutex?
    m_cellKey = new std::mutex();
    m_cellName = cellName;
}

/* 2}}} */
/* 1}}} */

/* Member functions {{{1 */

// enteringTrain := The train that is going to enter this cell
void Cell::enter(std::string enteringTrain)
{
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
}

void Cell::leave(std::string leavingTrain)
{
    // TODO : I have no idea how to implement this :)
        if (m_type == CellType::STATION) {
            std::cout << leavingTrain << " is leaving " << m_cellName << "!\n";
        } else {
        }
}

void Cell::promoteCell(std::string cellName)
{
    m_type = CellType::STATION;
    m_cellName = cellName;
}

/* 1}}} */
