#include "random.h"

int randomNumberRange(int lower, int upper) {
    // set seed as current time
    srand(time(0));
    return (rand() % (upper - lower + 1)) + lower;
}
