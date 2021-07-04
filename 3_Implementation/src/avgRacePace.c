/**
 * @file avgRacePace.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief Calculating average race pace with available data
 * @version 0.1
 * @date 2021-07-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <unistd.h>
#include "../inc/F1-Pitstop-Strategy-Generator.h"

/**
 * @brief Take input from the user about all lap times in fp1, fp2, fp3, Q1, Q2, Q3 
 * and store all the data including tyre used in q1 and also tyre lap age which is needed for further computation for strategy
 * 
 * @return LapdetailsBeforeGP 
 */
int AvgRacePace(LapdetailsBeforeGP *lapDetails)
{
    unsigned int mainDivider = 3;
    unsigned int subDivider = 2;
    if (lapDetails->Q1 == 0)
    {
        mainDivider = 2;
        // not qualified for Q1
    }
    if (lapDetails->Q2 == 0)
    {
        subDivider = 1;
        // not qualified for Q2
    }
    unsigned int averageRacePace = ((lapDetails->Q1 + ((lapDetails->Q2 + lapDetails->Q3) / subDivider) + (lapDetails->fp1 + lapDetails->fp2 + lapDetails->fp3) / 3) / mainDivider);

    printf("Average race pace is :%u", averageRacePace);
    return averageRacePace;
}
