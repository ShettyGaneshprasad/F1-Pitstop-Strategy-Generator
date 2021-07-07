/**
 * @file main.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief Getting track input and displaying that tracks facts and returning Structure TrackDetails to main function
 * @version 0.1
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inc/F1-Pitstop-Strategy-Generator.h"
#include "src/trackInput.c"
#include "src/lapTimeInput.c"
#include "src/avgRacePace.c"
#include "src/stintTime.c"
#include "src/calculateRaceStrategy.c"

/**
 * @brief main function start of our F1-Pitstop-Strategy-Generator
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char **argv)
{

    TrackDetails trackDetail;
    trackDetail = trackSelection();

    LapdetailsBeforeGP lapDetailsBeforeGP;
    lapDetailsBeforeGP = LapInput();
    RaceDetails raceDetail;

    raceDetail.averageRacePace = AvgRacePace(&lapDetailsBeforeGP);

    TyreDetails tyreDetail;
    // //checked above all clear
    // int firstStintTime = StintTime(1, &lapDetailsBeforeGP, &tyreDetail, &trackDetail, &raceDetail, 0);

    // printf("firstStint::%d", firstStintTime);
    ////adding above code inside calculate race strategy

    // calculate all race strategy
    PitStopStrategy pitStopStrategy;
    calculateRaceStrategy(&tyreDetail, &trackDetail, &raceDetail, &pitStopStrategy, &lapDetailsBeforeGP);

    return 0;
}
