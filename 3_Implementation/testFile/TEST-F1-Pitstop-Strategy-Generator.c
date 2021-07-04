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
    TEST_ASSERT(fptr);
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

    /* Close the Unity Test Framework */
    return UNITY_END();
}
