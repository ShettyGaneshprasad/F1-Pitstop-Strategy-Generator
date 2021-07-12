/**
 * @file trackInput.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief Getting track input and displaying that tracks facts and returning Structure TrackDetails to main function
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
LapdetailsBeforeGP LapInput()
{

    LapdetailsBeforeGP lapdetails = {0, 0, 0, 0, 0, 0, 0, 0, 0, None};

    unsigned int switchSelection;
    unsigned int whileChecker = 1;

    printf("Enter best Lap time in Free Practice Session in seconds\n\n");

    printf("FP1 Best Lap time : ");
    scanf("%u", &lapdetails.fp1);

    printf("FP2 Best Lap time : ");
    scanf("%u", &lapdetails.fp2);

    printf("FP3 Best Lap time : ");
    scanf("%u", &lapdetails.fp3);

    printf("\n\nEnter best Lap time in Qualification in seconds\n\n");

    printf("Q3 Best Lap time : ");
    scanf("%u", &lapdetails.Q3);

    printf("\nPosition Obtained in Q3 : ");
    scanf("%u", &lapdetails.PositionInQ3);
    if (lapdetails.PositionInQ3 > 15)
    {
        printf("\nOpps our team didn\'t qualify for Q2\n");
        return lapdetails;
    }

    printf("\nQ2 Best Lap time : ");
    scanf("%u", &lapdetails.Q2);

    printf("\nPosition Obtained in Q2 : ");
    scanf("%u", &lapdetails.PositionInQ2);
    if (lapdetails.PositionInQ3 > 10)
    {
        printf("\nOpps our team didn\'t qualify for Q1\n");
        return lapdetails;
    }

    printf("\nQ1 Best Lap time : ");
    scanf("%u", &lapdetails.Q1);

    while (whileChecker)
    {

        printf("\nTyre Used in Q1 :\nEnter 1 if Soft tyre Compound\nEnter 2 if Medium Tyre Compound\nEnter 3 if Hard Tyre Compound:\n");

        scanf("%u", &switchSelection);

        switch (switchSelection)
        {
        case 1:
            lapdetails.Q1Tyre = Soft;
            whileChecker = 0;
            break;
        case 2:
            lapdetails.Q1Tyre = Medium;
            whileChecker = 0;
            break;
        case 3:
            lapdetails.Q1Tyre = Hard;
            whileChecker = 0;
            break;

        default:
            printf("\nInvalid Input-Try again\n");
        }
    }

    printf("\nTyre lap age used in Q1: ");
    scanf("%u", &lapdetails.Q1TyreLapAge);

    return lapdetails;
}
