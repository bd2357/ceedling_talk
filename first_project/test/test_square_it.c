#include "unity.h"

#include "square_it.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_square_it_positive(void)
{
    TEST_ASSERT_EQUAL(4, square_it(2));
}

void test_square_it_negative(void)
{
    TEST_ASSERT_EQUAL(49, square_it(-7));
}