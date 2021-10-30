#include "unity.h"

#include "mathfun.h"
#include "square_it.h"
#include "mock_cube_it.h"

void setUp(void)
{
    
}

void tearDown(void)
{
}

void test_mathfun_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement mathfun");
}


void test_square_twice(void)
{
    TEST_ASSERT_EQUAL(16, square_twice(2));
}

void test_cube_twice_static(void)
{
    cube_it_ExpectAndReturn(-2,-8);
    cube_it_ExpectAndReturn(-8,-512);
    TEST_ASSERT_EQUAL(-512, cube_twice(-2));
}

int my_cube_stub(int val, int calls)
{
    return val * val * val;
}

void test_cube_twice_cb(void)
{
    cube_it_StubWithCallback(my_cube_stub);
    TEST_ASSERT_EQUAL(-1, cube_twice(-1));
    TEST_ASSERT_EQUAL(-19683, cube_twice(-3));
}

