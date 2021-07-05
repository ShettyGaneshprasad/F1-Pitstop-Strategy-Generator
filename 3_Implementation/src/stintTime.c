/**
 * @file trackInput.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief Calculating stint time
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
 * @brief Take input from the user about all lap times in fp1, fp2, fp3, Q1, Q2, Q3 
 * and store all the data including tyre used in q1 and also tyre lap age which is needed for further computation for strategy
 * 
 * @return LapdetailsBeforeGP 
 * 
 */
int StintTime(LapdetailsBeforeGP *lapDetails, TyreDetails *tyreDetail, TrackDetails *trackDetail)
{
    int currentLap = 0; //from  parameter
    int currentTyreLapAge = lapDetails->Q1TyreLapAge;
    int currentLapNo = currentLap;
    int totalStintTime = 0; //in seconds
    // TyreDetails tyreDetail;

    FILE *fptr = NULL;

    if (0 == lapDetails->Q1Tyre)
    // soft tyre
    {
        fptr = fopen("../7_Data/SoftCompoundTyre.txt", "a+");
    }
    else
    {
        if (1 == lapDetails->Q1Tyre)
        //Medium Tyre
        {
            fptr = fopen("../7_Data/SoftCompoundTyre.txt", "a+");
        }
        else
        //Hard Tyre
        {

            fptr = fopen("../7_Data/HardCompoundTyre.txt", "a+");
        }
    }
    if (fptr == NULL)
    {
        perror("File Opening Error");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    char buf[100];
    int whileChecker = 1;
    int switchSelection;

    int LineNO = 1;
    while (fgets(buf, sizeof(buf), fptr))
    {

        if (LineNO == 1)
        {
            while (whileChecker)
            {

                printf("\nTyre Used in Q1 :\nEnter 1 if Soft tyre Compound\nEnter 2 if Medium Tyre Compound\nEnter 3 if Hard Tyre Compound:\n");

                scanf("%u", &switchSelection);

                switch (switchSelection)
                {
                case 1:
                    tyreDetail->TyreCompound = Soft;
                    whileChecker = 0;
                    break;
                case 2:
                    tyreDetail->TyreCompound = Medium;
                    whileChecker = 0;
                    break;
                case 3:
                    tyreDetail->TyreCompound = Hard;
                    whileChecker = 0;
                    break;

                default:
                    printf("\nInvalid Input-Try again\n");
                }
            }
            // strcpy(tyreDetail.Q1Tyre, buf);
        }
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

    printf("\nSelectedTyre  : %d", tyreDetail->TyreCompound);
    printf("Speed Off Set %u \n", tyreDetail->SpeedOffset);
    printf("Tyre Deg %u \n", tyreDetail->TyreDegradation);
    printf("tyre lap age %u \n", tyreDetail->MaxTyreLapAge);

    while (currentLapNo <= trackDetail->TotalLapInGP && currentTyreLapAge <= tyreDetail->MaxTyreLapAge)
    {

        totalStintTime += 1; //add that laptime in stint
        currentLap++;
        currentLapNo++;
    }

    free(fptr);
    return totalStintTime;
}
