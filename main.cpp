#include <iostream>
#include "Track.h"
#include "Train.h"
#include "Cell.h"


int main(int argc, char *argv[])
{
    std::cout << "Hello world !" << std::endl; // It works, so I'm probably not *that* ~~retarded~~ far-off!
    // I guess the Cell_Stations should be declared first
    // Then the tracks
    // Then the trains
    // then i imagine you just kinda start all the trains ?

    Cell fStation(CellType::STATION,"f"); // First station = fStation
    Cell sStation(CellType::STATION,"s"); // And so on ...
    Cell tStation(CellType::STATION,"t");


    Track tracka(15,fStation,sStation,tStation,2,5,7);
    Track trackb(35,fStation,sStation,tStation,5,9,17);
    Track trackc(15,fStation,sStation,tStation,1,11,14);

    Train firstToot(2,&tracka,"First train");

    std::cout << (int)fStation.getCellType() << std::endl;
    return 0;
}
