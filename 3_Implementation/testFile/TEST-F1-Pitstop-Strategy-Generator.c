/**
 * @file TEST-F1-Pitstop-Strategy-Generator.c
 * @author Shetty Ganeshprasad (shettyganeshprasad1998@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <string.h>
#include "../unity/unity.h"
#include "../inc/F1-Pitstop-Strategy-Generator.h"
#include "../src/trackInput.c"
#include "../src/lapTimeInput.c"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

/**
 * @brief checking if programme is able to read file 
 * 
 */
void test_FileAvailability(void)
{
    FILE *fptr;
    fptr = fopen("../7_Data/f1Tracks.txt", "a+");

    TEST_ASSERT_MESSAGE(fptr, "Program cannot access FILE");
}

void test_LapTimeInput(void)
{
    LapdetailsBeforeGP lapDetails;
    lapDetails = LapInput();

    TEST_ASSERT_MESSAGE(lapDetails.fp1 > 0, "fp1 lap time is negative");
    TEST_ASSERT_MESSAGE(lapDetails.fp2 > 0, "fp2 lap time is negative");
    TEST_ASSERT_MESSAGE(lapDetails.fp3 > 0, "fp3 lap time is negative");
    TEST_ASSERT_MESSAGE(lapDetails.PositionInQ2 > 0, "Q2 Position is negative");
    TEST_ASSERT_MESSAGE(lapDetails.PositionInQ3 > 0, "Q2 Position is negative");
    TEST_ASSERT_MESSAGE(lapDetails.Q1 > 0, "Q1 lap time is negative");
    TEST_ASSERT_MESSAGE(lapDetails.Q2 > 0, "Q2 lap time is negative");
    TEST_ASSERT_MESSAGE(lapDetails.Q3 > 0, "Q3 lap time is negative");
    TEST_ASSERT_MESSAGE(lapDetails.Q1TyreLapAge > 0, "Q1 Tyre lap age is negative");
}

void test_AverageRacePace(void)
{
    LapdetailsBeforeGP lapDetails;
    lapDetails = LapInput();

    int averageRacePace = AvgRacePace(&lapDetails);

    TEST_ASSERT_MESSAGE(averageRacePace > 0, "Average Race Pace is negative");
}

void test_details(void)
{
    int a = 1;

    TEST_ASSERT_EQUAL_INT_MESSAGE(1, a, "A is not equal to 1");
}

void test_display(void)
{
    int b = 2;

    TEST_ASSERT_EQUAL_INT_MESSAGE(2, b, "B is not equal to 2");
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    RUN_TEST(test_display);
    RUN_TEST(test_FileAvailability);
    RUN_TEST(test_LapTimeInput);
    RUN_TEST(test_AverageRacePace);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
