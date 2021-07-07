/**
 * @file trackInput.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief Calculating that lap time considering tyre deg
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <unistd.h>
#include "../inc/F1-Pitstop-Strategy-Generator.h"
#include "currentLapTime.c"

//TyreDetails

/**
 * @brief Take input from the user about all lap times in fp1, fp2, fp3, Q1, Q2, Q3 
 * and store all the data including tyre used in q1 and also tyre lap age which is needed for further computation for strategy
 * 
 * @return LapdetailsBeforeGP 
 * 
 */

int StintTime(int StintCount, LapdetailsBeforeGP *lapDetails, TyreDetails *tyreDetail, TrackDetails *trackDetail, RaceDetails *raceDetail, PitStopStrategy *pitStopStrategy, int lastStint) //1 if true 0 if false
{

    int currentTyreLapAge = lapDetails->Q1TyreLapAge;
    int currentLapNo = raceDetail->currentLap;
    int totalStintTime = 0; //in seconds
                            // TyreDetails tyreDetail;
    FILE *fptr = NULL;

    //checking if first stint if first stint use Q1 tyre
    if (1 == StintCount)
    {

        if (0 == lapDetails->Q1Tyre)
        // soft tyre
        {
            fptr = fopen("../7_Data/SoftCompoundTyre.txt", "a+");
            tyreDetail->TyreCompound = Soft;
            printf("tyre file selected Soft");
        }
        else
        {
            if (1 == lapDetails->Q1Tyre)
            //Medium Tyre
            {
                fptr = fopen("../7_Data/SoftCompoundTyre.txt", "a+");
                tyreDetail->TyreCompound = Medium;
                printf("tyre file selected Medium");
            }
            else
            //Hard Tyre
            {

                fptr = fopen("../7_Data/HardCompoundTyre.txt", "a+");
                tyreDetail->TyreCompound = Hard;
                printf("tyre file selected Hard");
            }
        }
        if (fptr == NULL)
        {
            perror("File Opening Error");
            fprintf(stderr, "%s\n", strerror(errno));
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        if (2 == StintCount)
        {
        }
    }

    char buf[100];

    int LineNO = 1;
    while (fgets(buf, sizeof(buf), fptr))
    {

        if (LineNO == 2)
        {

            tyreDetail->SpeedOffset = atoi(buf);
        }
        if (LineNO == 3)
        {

            tyreDetail->TyreDegradation = atoi(buf);
        }
        if (LineNO == 4)
        {

            tyreDetail->MaxTyreLapAge = atoi(buf);
        }

        LineNO++;
    }

    fclose(fptr);
    printf("\nSelectedTyre  : %d\n", tyreDetail->TyreCompound);
    printf("Speed Off Set %u \n", tyreDetail->SpeedOffset);
    printf("Tyre Deg %u \n", tyreDetail->TyreDegradation);
    printf("tyre lap age %u \n", tyreDetail->MaxTyreLapAge);

    while (currentLapNo <= trackDetail->TotalLapInGP)
    {
        printf("Outer Loop start\ncurrent Lap no-%d\ntotal lap in gp %u", currentLapNo, trackDetail->TotalLapInGP);

        if (currentTyreLapAge <= tyreDetail->MaxTyreLapAge)
        {
            printf("\ninside while if\ncurrentTyreLapAge-%d\ntyreDetail->MaxTyreLapAge %u\n", currentTyreLapAge, tyreDetail->MaxTyreLapAge);

            totalStintTime += CurrentLapTime(tyreDetail, trackDetail, raceDetail); //add that laptime in stint

            currentLapNo++;
            currentTyreLapAge++;
        }
        else
        {
            if (lastStint)
            {
                return totalStintTime = 99999999;
            }
            return totalStintTime;
        }
    }

    return totalStintTime;
}
