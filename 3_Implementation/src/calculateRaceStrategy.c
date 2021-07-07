/**
 * @file calculateRaceStrategy.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief Calculating stint time
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
 * @brief Calculate speed of the lap in seocnds by taking consideration of average race pace tyre used and fuel load
 * 
 * @return currentLapTime
 * 
 */

int calculateRaceStrategy(TyreDetails *tyreDetail, TrackDetails *trackDetail, RaceDetails *raceDetail, PitStopStrategy *pitStopStrategy, LapdetailsBeforeGP *lapdetailsBeforeGP) //1 if true 0 if false
{
    int StrategyCounter = 0;
    int eachStrategyTotalTime[30]; // for all total strategy
    pitStopStrategy->TotalPitStop = 1;
    //to pit strategy
    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = None;
    eachStrategyTotalTime[StrategyCounter] = Calculate1StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    //2 stop strategy below

    pitStopStrategy->TotalPitStop = 2;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Medium;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Medium;
    pitStopStrategy->thirdStintTyre = Medium;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Soft;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Hard;
    pitStopStrategy->secondStintTyre = Soft;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
    StrategyCounter++;

    pitStopStrategy->firstStintTyre = Soft;
    pitStopStrategy->secondStintTyre = Hard;
    pitStopStrategy->thirdStintTyre = Hard;
    eachStrategyTotalTime[StrategyCounter] = Calculate2StopStrategyTime(tyreDetail, trackDetail, raceDetail, pitStopStrategy, lapdetailsBeforeGP);
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
}

int Calculate1StopStrategyTime(TyreDetails *tyreDetail, TrackDetails *trackDetail, RaceDetails *raceDetail, PitStopStrategy *pitStopStrategy, LapdetailsBeforeGP *lapdetailsBeforeGP)
{
    int total1StopStrategyRaceTime;
    total1StopStrategyRaceTime = (StintTime(1, lapdetailsBeforeGP, tyreDetail, trackDetail, raceDetail, pitStopStrategy, 0) +
                                  trackDetail->timeLostInPits +
                                  StintTime(2, lapdetailsBeforeGP, tyreDetail, trackDetail, raceDetail, pitStopStrategy, 1));
    return total1StopStrategyRaceTime;
}

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