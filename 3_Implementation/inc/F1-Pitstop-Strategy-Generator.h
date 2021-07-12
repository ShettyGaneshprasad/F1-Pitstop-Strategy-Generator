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

/**
 * @brief Structure to save various track information like track id no
 * Grandprix name, circuit name, time lost in pits, first GP held year, Total lap in the Gp,
 * Circuit length in KM, Race distance in that GP, fastest Lap record in that circuit, Driver name having fastest 
 * lap in that circuit along with the year.
 * 
 */
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
 * @brief enum to save tyre compound used in the car.
 * 
 */
typedef enum TyreCompound
{
    Soft,
    Medium,
    Hard,
    None
} TyreCompound;

/**
 * @brief Structure to hold  all inportant information before race like fp1, fp2, fp3, Q1, Q2, Q3 
 * nd store all the data including tyre used in q1 and also tyre lap age which is needed for further computation for strategy
 * 
 */
typedef struct LapdetailsBeforeGP
{
    unsigned int fp1;
    unsigned int fp2;
    unsigned int fp3;
    unsigned int Q1;
    unsigned int Q2;
    unsigned int Q3;

    unsigned int Q1TyreLapAge;
    unsigned int PositionInQ2;
    unsigned int PositionInQ3;

    TyreCompound Q1Tyre;

} LapdetailsBeforeGP;

typedef struct TyreDetails
{
    TyreCompound tyreCompound;
    unsigned int SpeedOffset;
    unsigned int TyreDegradation;
    unsigned int MaxTyreLapAge;

} TyreDetails;

typedef struct RaceDetails
{
    unsigned int currentLap;
    unsigned int averageRacePace;

} RaceDetails;

typedef struct PitStopStrategy
{
    unsigned int TotalPitStop;   // can be 1 for 1 stop i.e 2 tyre needed for full race
    TyreCompound firstStintTyre; //
    TyreCompound secondStintTyre;
    TyreCompound thirdStintTyre; //not needed for 1 stop race if not needed assign None

} PitStopStrategy;

/**
 * @brief Take input from user about track
 * 
 */
TrackDetails trackSelection();

/**
 * @brief Take input from the user about all lap times in fp1, fp2, fp3, Q1, Q2, Q3 
 * and store all the data including tyre used in q1 and also tyre lap age which is needed for further computation for strategy
 * 
 * @return LapdetailsBeforeGP 
 */
LapdetailsBeforeGP LapInput();

int AvgRacePace(LapdetailsBeforeGP *);

int StintTime(int, LapdetailsBeforeGP *, TyreDetails *, TrackDetails *, RaceDetails *, PitStopStrategy *, int);

int CurrentLapTime(TyreDetails *, TrackDetails *, RaceDetails *);

int calculateRaceStrategy(TyreDetails *, TrackDetails *, RaceDetails *, PitStopStrategy *, LapdetailsBeforeGP *);

int Calculate1StopStrategyTime(TyreDetails *, TrackDetails *, RaceDetails *, PitStopStrategy *, LapdetailsBeforeGP *);

int Calculate2StopStrategyTime(TyreDetails *, TrackDetails *, RaceDetails *, PitStopStrategy *, LapdetailsBeforeGP *);

#endif /* #ifndef __F1STRATEGYGENERATOR_H__*/