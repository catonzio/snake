#include "snake.h"

void printCell(cell_t *cell) {
    printf("Cell at (%d;%d). ", cell->x, cell->y);
    printf(cell->isHead ? "Head!\n" : cell->isLast ? "Last!\n" : "\n");
}

void printSnake(snake_t *snake) {
    printf("Length of Snake: %d\n", snake->numCells);

    cell_t *current = snake->head;
    int i = 0;
    while (i < snake->numCells) {
        printCell(current);
        current = current->next;
        i++;
    }
}

cell_t *createCell(int x, int y, int isHead, int isLast) {
    cell_t *newCell = malloc(sizeof(cell_t));
    newCell->next = NULL;
    newCell->x = x;
    newCell->y = y;
    newCell->isLast = isLast;
    newCell->isHead = isHead;

    return newCell;
}

snake_t *initializeSnake(int x, int y) {
    // initialize head
    cell_t *head = createCell(x, y, 1, 1);
    // initialize snake
    snake_t *snake = malloc(sizeof(snake_t));
    snake->head = head;
    snake->last = head;
    snake->numCells = 1;

    return snake;
}

snake_t *addCell(snake_t *snake, int x, int y) {
    // create new cell
    cell_t *newCell = createCell(x, y, 0, 1);

    cell_t *current = snake->head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newCell;
    snake->last->isLast = 0;
    snake->last = newCell;
    snake->numCells++;

    return snake;
}

cell_t *getCellAt(snake_t *snake, int x, int y) {
    cell_t *current = snake->head;
    int i = 0;

    while (i < snake->numCells) {
        if (current->x == x && current->y == y) {
            return current;
        } else {
            current = current->next;
        }
        i++;
    }
    return NULL;
}

void move(snake_t *snake, int direction) {
    if (direction == LEFT) {
        moveLeft(snake);
    } else if (direction == UP) {
        moveUp(snake);
    } else if (direction == RIGHT) {
        moveRight(snake);
    } else if (direction == DOWN) {
        moveDown(snake);
    }
}

void moveLeft(snake_t *snake) {}

void moveUp(snake_t *snake) {}

void moveRight(snake_t *snake) {}

void moveDown(snake_t *snake) {}
