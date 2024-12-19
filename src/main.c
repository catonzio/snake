#include <stdio.h>

#include "structures/game.h"

int main() {
    // set seed as current time
    srand(time(0));
    gameLoop();
}
