#ifndef SNAKE_H
#define SNAKE_H

#define SNAKE_HEAD_SYM "\U0001F47D"
#define SNAKE_BODY_SYM "\U0001F7E2"

#include <stdio.h>
#include <stdlib.h>

#include "../utils/constants.h"

struct cell {
    int x;
    int y;
    int isLast;
    int isHead;
    struct cell *next;
};
typedef struct cell cell_t;

struct snake {
    cell_t *head;
    cell_t *last;
    int numCells;
};
typedef struct snake snake_t;

void printCell(cell_t *cell);
void printSnake(snake_t *snake);
cell_t *createCell(int x, int y, int isHead, int isLast);
snake_t *initializeSnake(int x, int y);
snake_t *addCell(snake_t *snake, int x, int y);
cell_t *getCellAt(snake_t *snake, int x, int y);
void move(snake_t *snake, int direction);
void moveLeft(snake_t *snake);
void moveUp(snake_t *snake);
void moveRight(snake_t *snake);
void moveDown(snake_t *snake);

#endif /* SNAKE_H */
