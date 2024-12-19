#include "random.h"

int randomNumberRange(int lower, int upper) {
    return (rand() % (upper - lower + 1)) + lower;
}

int randomX() {
    return randomNumberRange(1, SIZE_X - 2);
}

int randomY() {
    return randomNumberRange(1, SIZE_Y - 2);
}
