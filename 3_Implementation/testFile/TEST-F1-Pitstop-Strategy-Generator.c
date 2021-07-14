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
#include "../unity/unity_internals.h"
// #include "../unity/unity.c"
#include "../inc/F1-Pitstop-Strategy-Generator.h"
#include "../src/trackInput.c"
#include "../src/lapTimeInput.c"
#include "../src/avgRacePace.c"

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
void test_FileAvailabilityF1Tracks(void)
{
    FILE *fptr;
    fptr = fopen("../7_Data/f1Tracks.txt", "a+");

    TEST_ASSERT_MESSAGE(fptr, "Program cannot access FILE: f1Tracks.txt");
}

void test_FileAvailabilityHardCompoundTyre(void)
{
    FILE *fptr;
    fptr = fopen("../7_Data/HardCompoundTyre.txt", "a+");

    TEST_ASSERT_MESSAGE(fptr, "Program cannot access FILE: HardCompoundTyre.txt");
}

void test_FileAvailabilityMediumCompoundTyre(void)
{
    FILE *fptr;
    fptr = fopen("../7_Data/MediumCompoundTyre.txt", "a+");

    TEST_ASSERT_MESSAGE(fptr, "Program cannot access FILE: MediumCompoundTyre.txt");
}

void test_FileAvailabilitySoftCompoundTyre(void)
{
    FILE *fptr;
    fptr = fopen("../7_Data/SoftCompoundTyre.txt", "a+");

    TEST_ASSERT_MESSAGE(fptr, "Program cannot access FILE:SoftCompoundTyre.txt");
}
void test_FileAvailabilityTyreData(void)
{
    FILE *fptr;
    fptr = fopen("../7_Data/TyreData.txt", "a+");

    TEST_ASSERT_MESSAGE(fptr, "Program cannot access FILE:TyreData");
}

void test_LapTimeInputFp1(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

    TEST_ASSERT_MESSAGE(lapDetails.fp1 > 0, "fp1 lap time is negative");
}

void test_LapTimeInputFp2(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

    TEST_ASSERT_MESSAGE(lapDetails.fp2 > 0, "fp2 lap time is negative");
}

void test_LapTimeInputFp3(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

    TEST_ASSERT_MESSAGE(lapDetails.fp3 > 0, "fp3 lap time is negative");
}

void test_LapTimeInputPosQ2(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

    TEST_ASSERT_MESSAGE(lapDetails.PositionInQ2 > 0, "Q2 Position is negative");
}

void test_LapTimeInputPosQ3(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

    TEST_ASSERT_MESSAGE(lapDetails.PositionInQ3 > 0, "Q2 Position is negative");
}

void test_LapTimeInputQ1(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

    TEST_ASSERT_MESSAGE(lapDetails.Q1 > 0, "Q1 lap time is negative");
}

void test_LapTimeInputQ2(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

    TEST_ASSERT_MESSAGE(lapDetails.Q2 > 0, "Q2 lap time is negative");
}

void test_LapTimeInputQ3(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

    TEST_ASSERT_MESSAGE(lapDetails.Q3 > 0, "Q3 lap time is negative");
}

void test_LapTimeInputQ1TyreLap(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

    TEST_ASSERT_MESSAGE(lapDetails.Q1TyreLapAge > 0, "Q1 Tyre lap age is negative");
}

void test_AverageRacePace(void)
{
    LapdetailsBeforeGP lapDetails = {69, 68, 67, 65, 64, 63, 10, 2, 1, Hard};

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
    RUN_TEST(test_FileAvailabilityF1Tracks);
    RUN_TEST(test_FileAvailabilityHardCompoundTyre);
    RUN_TEST(test_FileAvailabilityMediumCompoundTyre);
    RUN_TEST(test_FileAvailabilitySoftCompoundTyre);
    RUN_TEST(test_FileAvailabilityTyreData);
    RUN_TEST(test_LapTimeInputFp1);
    RUN_TEST(test_LapTimeInputFp2);
    RUN_TEST(test_LapTimeInputFp3);
    RUN_TEST(test_LapTimeInputPosQ2);
    RUN_TEST(test_LapTimeInputPosQ3);
    RUN_TEST(test_LapTimeInputQ1);
    RUN_TEST(test_LapTimeInputQ2);
    RUN_TEST(test_LapTimeInputQ3);
    RUN_TEST(test_LapTimeInputQ1TyreLap);
    RUN_TEST(test_AverageRacePace);
    RUN_TEST(test_details);
    RUN_TEST(test_display);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
