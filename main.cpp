#include <iostream>
#include "Track.h"
#include "Trains.h"
#include "Cell.h"


int main(int argc, char *argv[])
{
    std::cout << "Hello world !" << std::endl; // It works, so I'm probably not *that* ~~retarded~~ far-off!
    // I guess the Cell_Stations should be declared first
    // Then the tracks
    // Then the trains
    // then i imagine you just kinda start all the trains ?

    Cell fStation(CellType::STATION); // First station = fStation
    Cell sStation(CellType::STATION); // And so on ...
    Cell tStation(CellType::STATION);

    std::cout << (int)fStation.getCellType() << std::endl;
    return 0;
}
