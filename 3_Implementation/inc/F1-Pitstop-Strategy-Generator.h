/**
 * @file F1-Pitstop-Strategy-Generator.h
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief header file
 * @version 0.1
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __F1STRATEGYGENERATOR_H__
#define __F1STRATEGYGENERATOR_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct TrackDetails
{
    unsigned int trackUid;
    char grandPrixName[50];
    char circuitName[50];
    unsigned int timeLostInPits;
    unsigned int firstGpHeldYear;
    unsigned int TotalLapInGP;
    float circuitLengthKM;
    float raceDistanceKM;
    char fastestLapRecord[15];
    char driverHavingFastestLap[50];

} TrackDetails;

/**
 * @brief Take input from user about track
 * 
 */
TrackDetails trackSelection();

#endif /* #ifndef __F1STRATEGYGENERATOR_H__*/