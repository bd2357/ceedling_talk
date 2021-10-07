#include "mathfun.h"
#include "square_it.h"
#include "cube_it.h"

int square_twice(int val)
{
    return square_it(square_it(val));
}

int cube_twice(int val)
{
    return cube_it(cube_it(val));
}