#include "game.h"

game_t *initializeGame() {
    int x = randomX();
    int y = randomY();

    snake_t *snake = initializeSnake(x, y);
    fruit_list_t *fruitList = createFruitList();
    fruitList = addRandomFruit(fruitList, snake);

    game_t *game = malloc(sizeof(game_t));
    game->snake = snake;
    game->fruitList = fruitList;
    game->score = 0;

    return game;
}

void gameLoop() {
    game_t *game = initializeGame();

    int stopped = 0;
    int iteration = 1;
    do {
        printf("Interation #%d\n", iteration);

        drawScreen(game->snake, game->fruitList);
        char input = ' ';
        scanf("%c", &input);
        printf("Input: %c\n", input);
        switch (input) {
            case 'a':
                move(game->snake, LEFT);
                break;
            case 'w':
                move(game->snake, UP);
                break;
            case 'd':
                move(game->snake, RIGHT);
                break;
            case 's':
                move(game->snake, DOWN);
                break;
            case 'q':
                stopped = 1;
                break;
            default:
                stopped = 1;
                break;
        }

        // if (isSnakeColliding(game->snake)) {
        //     stopped = 1;
        // }

        // system("clear");
    } while (stopped);
}
