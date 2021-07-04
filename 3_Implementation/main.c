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

/**
 * @brief main function start of our F1-Pitstop-Strategy-Generator
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char **argv)
{

    // TrackDetails trackDetail;
    // trackDetail = trackSelection();

    LapdetailsBeforeGP lapDetails;
    lapDetails = LapInput();
    //Module 5

    unsigned int mainDivider = 3;
    unsigned int subDivider = 2;
    if (lapDetails.Q1 == 0)
    {
        mainDivider = 2;
        // not qualidfied for Q1
    }
    if (lapDetails.Q2 == 0)
    {
        subDivider = 1;
        // not qualidfied for Q2
    }
    unsigned int averageRacePace = ((lapDetails.Q1 + ((lapDetails.Q2 + lapDetails.Q3) / subDivider) + (lapDetails.fp1 + lapDetails.fp2 + lapDetails.fp3) / 3) / mainDivider);

    printf("Average race pace is :%u", averageRacePace);
    return 0;
}
