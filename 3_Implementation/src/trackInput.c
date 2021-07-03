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
#include <errno.h>
#include "../inc/F1-Pitstop-Strategy-Generator.h"

/**
 * @brief Getting track input and displaying that tracks facts and returning Structure TrackDetails to main function
 * 
 * @return TrackDetails 
 */
TrackDetails trackSelection()
{
    TrackDetails trackDetails;
    errno = 0;
    int number_of_seconds = 2;
    FILE *fptr = NULL;
    fptr = fopen("../7_Data/f1Tracks.txt", "a+");
    char buf[100];
    int RaceTrack = 3;
    int LineNO = 0;
    char dummy;
    int selectedTrackNumber;

    if (fptr == NULL)
    {
        perror("File Opening Error");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    printf("Welcome to F1 Pitstop Strategy Generator\n");
    printf("Which track will your team racing on?\n Enter the track number as shown below\nPress any key to continue\n");
    scanf("%c", &dummy);

    char line[256];
    int currentFileLineNo = 0;
    int TrackNo = 1;
    while (fgets(line, sizeof(line), fptr))
    {
        currentFileLineNo++;
        LineNO = currentFileLineNo % 10;
        if (LineNO == 3)
        {
            printf("%d : %s", TrackNo, line);
            TrackNo++;
        }
    }

    printf("Enter Track Number of which you want strategy to be generated");
    scanf("%d", &selectedTrackNumber);

    currentFileLineNo = 0;
    TrackNo = 1;
    fseek(fptr, 0, 0);
    int selectedTrackDetailsStartPosition = ((selectedTrackNumber * 10) - 10);
    int selectedTrackDetailsEndPosition = (selectedTrackNumber * 10);
    while (fgets(buf, sizeof(buf), fptr))
    {

        if ((currentFileLineNo >= selectedTrackDetailsStartPosition && currentFileLineNo <= selectedTrackDetailsEndPosition))
        {
            LineNO = (currentFileLineNo % 10) + 1;
            // printf("LineNo %d : ", LineNO);
            if (LineNO == 1)
            {
                trackDetails.trackUid = atoi(buf);
                // printf("%u\n", trackDetails.trackUid);
            }
            if (LineNO == 2)
            {
                strcpy(trackDetails.grandPrixName, buf);

                // printf("%s\n", trackDetails.grandPrixName);
            }
            if (LineNO == 3)
            {
                strcpy(trackDetails.circuitName, buf);
                // printf("%s\n", trackDetails.circuitName);
            }
            if (LineNO == 4)
            {
                trackDetails.timeLostInPits = atoi(buf);
                // printf("%u\n", trackDetails.timeLostInPits);
            }
            if (LineNO == 5)
            {
                trackDetails.firstGpHeldYear = atoi(buf);
                // printf("%u\n", trackDetails.firstGpHeldYear);
            }
            if (LineNO == 6)
            {
                trackDetails.TotalLapInGP = atoi(buf);
                // printf("%u\n", trackDetails.TotalLapInGP);
            }
            if (LineNO == 7)
            {
                trackDetails.circuitLengthKM = atof(buf);
                // printf("%f\n", trackDetails.circuitLengthKM);
            }
            if (LineNO == 8)
            {
                trackDetails.raceDistanceKM = atof(buf);
                // printf("%f\n", trackDetails.raceDistanceKM);
            }
            if (LineNO == 9)
            {
                strcpy(trackDetails.fastestLapRecord, buf);
                // printf("%s\n", trackDetails.fastestLapRecord);
            }
            if (LineNO == 10)
            {
                strcpy(trackDetails.driverHavingFastestLap, buf);
                // printf("%s\n", trackDetails.driverHavingFastestLap);
            }
            // printf("%s", buf);
        }
        currentFileLineNo++;
    }
    // system(“clear”);
    for (int screenClearCounter = 0; screenClearCounter < 50; screenClearCounter++)
        putchar('\n');
    printf("So We will be creating our teams Tire Strategy for the %s", trackDetails.grandPrixName);
    sleep(number_of_seconds);
    printf("The first Grand Prix held here was year %u \n", trackDetails.firstGpHeldYear);
    sleep(number_of_seconds);
    printf("Average time lost in the pits will be %u seconds (pit lane entering to race track exit)\n", trackDetails.timeLostInPits);
    sleep(number_of_seconds);
    printf("Total lap in this race will be of %u\n", trackDetails.TotalLapInGP);
    sleep(number_of_seconds);
    printf("Total length of the Circuit is %f KM\n", trackDetails.circuitLengthKM);
    sleep(number_of_seconds);
    printf("Total Race distance to be covered in this GrandPrix is %f KM\n", trackDetails.raceDistanceKM);
    sleep(number_of_seconds);
    printf("Fastest lap record held in this circuit is %s", trackDetails.fastestLapRecord);
    sleep(number_of_seconds);
    printf("Fastest lap record is held by %s", trackDetails.driverHavingFastestLap);

    fclose(fptr);

    return trackDetails;
}