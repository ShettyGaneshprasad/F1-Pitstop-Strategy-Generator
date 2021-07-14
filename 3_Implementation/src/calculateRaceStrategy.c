/**
 * @file calculateRaceStrategy.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief Calculating and selecting best race strategy
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <unistd.h>
#include "../inc/F1-Pitstop-Strategy-Generator.h"

//TyreDetails

/**
 * @brief Calculate race time of all available Strategy and then select the strategy with best time
 * 
 * @return currentLapTime
 * 
 */
int calculateRaceStrategy(TyreDetails *tyreDetail, TrackDetails *trackDetail, RaceDetails *raceDetail, PitStopStrategy *pitStopStrategy, LapdetailsBeforeGP *lapdetailsBeforeGP) //1 if true 0 if false
{
    unsigned int StrategyCounter = 0;
    /**
     * @brief for all 30 strategy
     * 
     */
    int eachStrategyTotalTime[30];
    pitStopStrategy->TotalPitStop = 1;
    //to pit strategy
    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = None;

    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    //2 stop strategy below

    pitStopStrategy->TotalPitStop = 2;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    printf("Calculating Strategy for strategy Number: %u\n\n", StrategyCounter);
    StrategyCounter++;

    int length = 30;
    int optimalMinimumTimeStrategy = eachStrategyTotalTime[0];
    int optimalStrategyNumber = 0;

    for (int minCounter = 0; eachStrategyTotalTime[minCounter] < length; minCounter++)
    {
        //Compare elements of array with min
        if (eachStrategyTotalTime[minCounter] < optimalMinimumTimeStrategy)
            optimalMinimumTimeStrategy = eachStrategyTotalTime[minCounter];
        optimalStrategyNumber = minCounter;
    }

    printf("\n\noptimalStrategyNumber:in seconds %d\n\noptimalStrategyNumber %d", optimalMinimumTimeStrategy, optimalStrategyNumber);
    return 0; //dummy return
}

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
int Calculate1StopStrategyTime(TyreDetails *tyreDetail, TrackDetails *trackDetail, RaceDetails *raceDetail, PitStopStrategy *pitStopStrategy, LapdetailsBeforeGP *lapdetailsBeforeGP)
{
    int total1StopStrategyRaceTime;
    total1StopStrategyRaceTime = (StintTime(1, lapdetailsBeforeGP, tyreDetail, trackDetail, raceDetail, pitStopStrategy, 0) +
                                  trackDetail->timeLostInPits +
                                  StintTime(2, lapdetailsBeforeGP, tyreDetail, trackDetail, raceDetail, pitStopStrategy, 1));
    return total1StopStrategyRaceTime;
}

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
int Calculate2StopStrategyTime(TyreDetails *tyreDetail, TrackDetails *trackDetail, RaceDetails *raceDetail, PitStopStrategy *pitStopStrategy, LapdetailsBeforeGP *lapdetailsBeforeGP)
{
    int total2StopStrategyRaceTime;
    total2StopStrategyRaceTime = (StintTime(1, lapdetailsBeforeGP, tyreDetail, trackDetail, raceDetail, pitStopStrategy, 0) +
                                  trackDetail->timeLostInPits +
                                  StintTime(2, lapdetailsBeforeGP, tyreDetail, trackDetail, raceDetail, pitStopStrategy, 0) +
                                  trackDetail->timeLostInPits +
                                  StintTime(3, lapdetailsBeforeGP, tyreDetail, trackDetail, raceDetail, pitStopStrategy, 1));
    return total2StopStrategyRaceTime;
}