#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdlib.h>

#include "../gui/gui.h"
#include "../utils/constants.h"
#include "../utils/random.h"
#include "fruit.h"
#include "snake.h"

struct game {
    snake_t *snake;
    fruit_list_t *fruitList;
    int score;
};
typedef struct game game_t;

game_t *initializeGame();
void gameLoop();

#endif /* GAME_H */