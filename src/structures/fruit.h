#ifndef FRUIT_H
#define FRUIT_H

#define FRUIT_SYM "\U0001F34E"

#include <stdlib.h>
#include <stdio.h>
#include "../utils/constants.h"
#include "../utils/random.h"

struct fruit {
    int x;
    int y;
};
typedef struct fruit fruit_t;

struct fruit_node {
    fruit_t *fruit;
    struct fruit_node *next;
};
typedef struct fruit_node fruit_node_t;

struct fruit_list {
    fruit_node_t *head;
    int length;
};
typedef struct fruit_list fruit_list_t;

void printFruit(fruit_t *fruit);
void printFruitList(fruit_list_t *list);
fruit_t *createFruit(int x, int y);
fruit_node_t *createFruitNode(int x, int y);
fruit_list_t *createFruitList();
fruit_list_t *addFruit(fruit_list_t *list, int x, int y);
fruit_list_t *addRandomFruit(fruit_list_t *list);
fruit_t *getFruitAt(fruit_list_t *list, int x, int y);
#endif /* FRUIT_H */

