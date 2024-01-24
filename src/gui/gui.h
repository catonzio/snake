#ifndef GUI_H
#define GUI_H

#include "../structures/snake.h"
#include "../structures/fruit.h"
#include "../utils/constants.h"

#define LT_CORNER "\U00002554"
#define RT_CORNER "\U00002557"
#define LB_CORNER "\U0000255A"
#define RB_CORNER "\U0000255D"
#define VER_BAR "\U00002551"
#define HOR_BAR "\U00002550"

void drawScreen(snake_t *snake, fruit_list_t *fruitList);
char *getBorderChar(int x, int j);

#endif /* GUI_H */

