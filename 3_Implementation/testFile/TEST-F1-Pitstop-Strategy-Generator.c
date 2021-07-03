#include <string.h>
#include "../unity/unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_details(void)
{
    int a = 1;
    // strcpy(stream.passport,"1234");
    // strcpy(stream.name,"gs");
    // strcpy(stream.email,"igsgs@gmail.com");
    // strcpy(stream.destination,"Inida");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, a, "A is not equal to 1");
    // TEST_ASSERT_EQUAL_STRING("1234",stream.passport);
    // TEST_ASSERT_EQUAL_STRING("gsgs",stream.name);
    // TEST_ASSERT_EQUAL_STRING("gsgs@gmail.com",stream.email);
    // TEST_ASSERT_EQUAL_STRING("India",stream.destination);
}

void test_display(void)
{
    int b = 2;
    // strcpy(stream.passport,"1234");
    // strcpy(stream.name,"gsgs");
    // strcpy(stream.email,"gsgs@gmail.com");
    // strcpy(stream.destination,"India");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, b, "B is not equal to 1");
    // TEST_ASSERT_EQUAL_STRING("1234",stream.passport);
    // TEST_ASSERT_EQUAL_STRING("isha",stream.name);
    // TEST_ASSERT_EQUAL_STRING("gsgs@gmail.com",stream.email);
    // TEST_ASSERT_EQUAL_STRING("India",stream.destination);
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    RUN_TEST(test_display);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
