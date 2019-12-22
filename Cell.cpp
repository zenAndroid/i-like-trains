#include "Cell.h"
#include "Track.h"
#include "Trains.h"
#include <iostream>
#include <mutex>

/* CONSTRUCTORS {{{1 */
/* DEFAULT CONSTRUCTOR {{{2 */
Cell::Cell(){
    std::cout << "Cell's empty constructor ought not be called, something is wrong" << std::endl;
}
/* 2}}} */

/* Sensible constructor {{{2 */

Cell::Cell(CellType type){
    m_type = type;
    // TODO: probably need to initialze the mutex?
    m_cellKey = new std::mutex();
}

/* 2}}} */
/* 1}}} */


/* Member functions {{{1 */

CellType Cell::getCellType()
{
    return m_type;
}

void Cell::enter() // ITS GODDAMN 00:48 AND I CANT HELP BUT READ THIS AS CALL CENTER I THINK IM GOING TO SLEEP BAI
{
    static std::mutex enterMutex;
    {
        std::scoped_lock<std::mutex> lock(enterMutex);
        if (getCellType() == CellType::STATION) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
        } else {
            std::this_thread::sleep_for(std::chrono::milliseconds(20));
        }
    } // If my understanding is correct, then after this 'line' is executed, the scoped lock is destroyed and the mutex is released.
}

void Cell::leave()
{
    // TODO : I have no idea how to implement this :)
}
/* 1}}} */
