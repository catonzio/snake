#include "gui.h"

void drawScreen(snake_t *snake, fruit_list_t *fruitList) {
    for(int i=0; i<SIZE; i++) {
        for(int j=0; j<SIZE; j++) {
            if (i==0 || i==SIZE-1) {
                printf("O");
            }
            else if (j==0 || j==SIZE-1) {
                printf("O");
            }
            else {
                cell_t *cell = getCellAt(snake, i, j);
                printf(cell == NULL ? " " : "S");
            }
        }
        printf("\n");
    }
}

