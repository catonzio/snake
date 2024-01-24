#include <stdio.h>
#include "gui/gui.h"
#include "structures/snake.h"
#include "structures/fruit.h"

snake_t *testSnake() {
    snake_t *snake = initializeSnake(1, 1);
    for (int i=2; i<10; i++) {
        snake = addCell(snake, i, i);
    }
    printSnake(snake);

    return snake;
}

fruit_list_t *testFruit() {
    fruit_list_t *list = createFruitList(3, 5);
    list = addFruit(list, 5, 3);
    list = addFruit(list, 10, 8);

    printFruitList(list);

    return list;
}

int main() {
    snake_t *snake = testSnake();
    printf("\n");
    fruit_list_t *fruitList = testFruit();
    drawScreen(snake, fruitList);
    return 0;
}
