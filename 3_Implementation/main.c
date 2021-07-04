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
    TrackDetails trackDetail;
    trackDetail = trackSelection();

    //input  module 4
    // typedef enum TyreCompound
    // {
    //     Soft,
    //     Medium,
    //     Hard
    // } TyreCompound;

    // typedef struct LapdetailsBeforeGP
    // {
    //     unsigned int fp1;
    //     unsigned int fp2;
    //     unsigned int fp3;
    //     unsigned int Q1;
    //     unsigned int Q2;
    //     unsigned int Q3;

    //     unsigned int Q1TyreLapAge;
    //     unsigned int PositionInQ2;
    //     unsigned int PositionInQ3;

    //     TyreCompound Q1Tyre;

    // } LapdetailsBeforeGP;

    // LapdetailsBeforeGP lapdetails;
    // unsigned int switchSelection;

    // printf("Enter best Lap time in Free Practice Session in seconds\n\n");

    // printf("FP1 Best Lap time : ");
    // scanf("%u", &lapdetails.fp1);

    // printf("FP2 Best Lap time : ");
    // scanf("%u", &lapdetails.fp2);

    // printf("FP3 Best Lap time : ");
    // scanf("%u", &lapdetails.fp3);

    // printf("\n\nEnter best Lap time in Qualification in seconds\n\n");

    // printf("Q3 Best Lap time : ");
    // scanf("%u", &lapdetails.Q3);

    // printf("\nPosition Obtained in Q3 : ");
    // scanf("%u", &lapdetails.PositionInQ3);

    // printf("\nQ2 Best Lap time : ");
    // scanf("%u", &lapdetails.Q2);

    // printf("\nPosition Obtained in Q2 : ");
    // scanf("%u", &lapdetails.PositionInQ2);

    // printf("\nQ1 Best Lap time : ");
    // scanf("%u", &lapdetails.Q1);
    // unsigned int whileChecker = 1;
    // while (whileChecker)
    // {

    //     printf("\nTyre Used in Q1 :\nEnter 1 if Soft tyre Compound\nEnter 2 if Medium Tyre Compound\nEnter 3 if Hard Tyre Compound:\n");

    //     scanf("%u", &switchSelection);

    //     switch (switchSelection)
    //     {
    //     case 1:
    //         lapdetails.Q1Tyre = Soft;
    //         whileChecker = 0;
    //         break;
    //     case 2:
    //         lapdetails.Q1Tyre = Medium;
    //         whileChecker = 0;
    //         break;
    //     case 3:
    //         lapdetails.Q1Tyre = Hard;
    //         whileChecker = 0;
    //         break;

    //     default:
    //         printf("\nInvalid Input-Try again\n");
    //     }
    // }

    // printf("\nTyre lap age used in Q1: ");
    // scanf("%u", &lapdetails.Q1TyreLapAge);
    LapdetailsBeforeGP lapDetails;
    lapDetails = LapInput();
    return 0;
}
