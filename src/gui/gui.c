#include "gui.h"
#include <string.h>

char *getBorderChar(int x, int y) {
    char *c = " ";
    if (x == 0 && y == 0) {
        // left top corner
        c = LT_CORNER;
    } else if (x == SIZE_X-1 && y == 0) {
        // right top corner
        c = RT_CORNER;
    } else if (x == 0 && y == SIZE_Y-1) {
        // left bottom corner
        c = LB_CORNER;
    } else if (x == SIZE_X-1 && y == SIZE_Y-1) {
        // right bottom corner
        c = RB_CORNER;
    } else if (x == 0 || x == SIZE_X-1) {
        // left or right bar
        c = VER_BAR;
    } else if (y == 0 || y == SIZE_Y-1) {
        // upper or lower bar
        c = HOR_BAR;
    }
    return c;
}

void drawScreen(snake_t *snake, fruit_list_t *fruitList) {
    for(int j=0; j<SIZE_Y; j++) {
        for(int i=0; i<SIZE_X; i++) {
            char *charToPrint = " ";
            charToPrint = getBorderChar(i, j);
            if (strcmp(charToPrint, " ") == 0) {
                cell_t *cell = getCellAt(snake, i, j);
                if (cell != NULL) {
                    charToPrint = cell->isHead ? SNAKE_HEAD_SYM : SNAKE_BODY_SYM;
                } else {
                    fruit_t *fruit = getFruitAt(fruitList, i, j);
                    if (fruit != NULL) {
                        charToPrint = FRUIT_SYM;
                    }
                }
            }
            printf("%s", charToPrint);
        }
        printf("\n");
    }
}

