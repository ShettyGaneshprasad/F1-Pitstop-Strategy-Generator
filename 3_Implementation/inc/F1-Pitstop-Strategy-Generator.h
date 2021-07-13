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
 * Soft,Medium,Hard,None
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

/**
 * @brief Structure containg tyre details like tyre compund selected speed offset tyre degradation and maxtyre lap age
 * 
 */
typedef struct TyreDetails
{
    TyreCompound tyreCompound;
    unsigned int SpeedOffset;
    unsigned int TyreDegradation;
    unsigned int MaxTyreLapAge;

} TyreDetails;

/**
 * @brief structure to hold race details info like current lap and average race pace calculated for that grandprix
 * 
 */
typedef struct RaceDetails
{
    unsigned int currentLap;
    unsigned int averageRacePace;

} RaceDetails;

/**
 * @brief structure to hold pitstop Strategy
 * totalpitstop count int that strategy first tyre stint 2nd tyre stint and 3rd tyre stint
 */
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

/**
 * @brief Calculate Average RacePace  with the data collected of previous session
 * 
 * @return LapdetailsBeforeGP 
 */
int AvgRacePace(LapdetailsBeforeGP *);

/**
 * @brief calculate stint time with that particular tyre considering tyre deggradation and fuel load
 * 
 * @param StintCount 
 * @param lapDetails 
 * @param tyreDetail 
 * @param trackDetail 
 * @param raceDetail 
 * @param pitStopStrategy 
 * @param lastStint 
 * @return int 
 */
int StintTime(int, LapdetailsBeforeGP *, TyreDetails *, TrackDetails *, RaceDetails *, PitStopStrategy *, int);

/**
 * @brief Calculate curent lap time considering fuel load and tyre degraddation
 * 
 * @return currentLapTime
 * 
 */
int CurrentLapTime(TyreDetails *, TrackDetails *, RaceDetails *);

/**
 * @brief Calculate race time of all available Strategy and then select the strategy with best time
 * 
 * @return currentLapTime
 * 
 */
int calculateRaceStrategy(TyreDetails *, TrackDetails *, RaceDetails *, PitStopStrategy *, LapdetailsBeforeGP *);

/**
 * @brief Calculating race time for strategy having 1 Stop.
 * 
 * @param tyreDetail 
 * @param trackDetail 
 * @param raceDetail 
 * @param pitStopStrategy 
 * @param lapdetailsBeforeGP 
 * @return int 
 */
int Calculate1StopStrategyTime(TyreDetails *, TrackDetails *, RaceDetails *, PitStopStrategy *, LapdetailsBeforeGP *);

/**
 * @brief Calculating race time for strategy having 2 Stop.
 * 
 * @param tyreDetail 
 * @param trackDetail 
 * @param raceDetail 
 * @param pitStopStrategy 
 * @param lapdetailsBeforeGP 
 * @return int 
 */
int Calculate2StopStrategyTime(TyreDetails *, TrackDetails *, RaceDetails *, PitStopStrategy *, LapdetailsBeforeGP *);

#endif /* #ifndef __F1STRATEGYGENERATOR_H__*/