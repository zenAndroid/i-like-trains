#include <Cell.h>
#include <Track.h>
#include <Train.h>
#include <iostream>

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
}

/* 2}}} */
/* 1}}} */


/* Member functions {{{1 */

CellType Cell::getCellType()
{
    return m_type;
}

void Cell::enter()
{
    // TODO : I have no idea how to implement this :)
}

void Cell::leave()
{
    // TODO : I have no idea how to implement this :)
}
