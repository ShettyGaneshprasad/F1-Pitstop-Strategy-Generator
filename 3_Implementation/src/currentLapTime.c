/**
 * @file trackInput.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief Calculate curent lap time considering fuel load and tyre degraddation
 * @version 0.1
 * @date 2021-07-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <unistd.h>
#include "../inc/F1-Pitstop-Strategy-Generator.h"

//TyreDetails

/**
 * @brief Calculate curent lap time considering fuel load and tyre degraddation
 * 
 * @return currentLapTime
 * 
 */
int CurrentLapTime(TyreDetails *tyreDetail, TrackDetails *trackDetail, RaceDetails *raceDetail) //1 if true 0 if false
{
    int currentLapTime = 0;

    currentLapTime = ((raceDetail->averageRacePace) +
                      (tyreDetail->SpeedOffset / 100) +
                      (9 -
                       ((9 / trackDetail->TotalLapInGP) * raceDetail->currentLap)));

    return currentLapTime;
}
