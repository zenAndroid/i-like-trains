#include "tick.h"
#include <iostream>
#include "Track.h"
#include "Train.h"
#include "Cell.h"


int main(int argc, char *argv[])
{
    // I guess the Cell_Stations should be declared first
    // Then the tracks
    // Then the trains
    // then i imagine you just kinda start all the trains ?

    Cell fStation(CellType::STATION); // First station = fStation
    Cell sStation(CellType::STATION); // And so on ...
    Cell tStation(CellType::STATION);


    // I cringe everytiem
    Track tracka(15,fStation,sStation,tStation,2,5,7);
    Track trackb(35,fStation,sStation,tStation,5,9,17);
    Track trackc(15,fStation,sStation,tStation,1,11,14);

    Train first  (2,&tracka,"train #1");
    Train second (5,&tracka,"train #2");
    Train third  (5,&trackb,"train #3");
    Train fourth (1,&trackb,"train #4");
    Train fifth  (5,&trackb,"train #5");
    Train sixth  (1,&trackc,"train #6");

    return 0;
}
