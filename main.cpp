// {{{ - Includes
#include <iostream>
#include "tick.h"
#include "Track.h"
#include "Train.h"
#include "Cell.h"
// }}}

int main(int argc, char *argv[]) {

    Cell fStation(CellType::STATION); // First station = fStation
    Cell sStation(CellType::STATION); // And so on ...
    Cell tStation(CellType::STATION);


    // I cringe everytiem
    // If I do include something like a hash mao or something ... let's see
    // Probably something like std::map<Station,int>
    // Also I have plan to change the class hierarchy just a bit
    // namely, i think i'm going to create a new class to represent station, and not 
    // the same class, and the more i think about it i guess it makes sense since a station truly *is* a cell
    // as far as the software is concerned.
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
