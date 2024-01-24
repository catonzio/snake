#include "fruit.h"

void printFruit(fruit_t *fruit) {
    printf("Fruit at (%d;%d)\n", fruit->x, fruit->y);
}

void printFruitList(fruit_list_t *list) {
    printf("Length of list: %d\n", list->length);

    fruit_node_t *current = list->head;
    while (current->next != NULL) {
        printFruit(current->fruit);
        current = current->next;
    }
    printFruit(current->fruit);
}

fruit_t *createFruit(int x, int y) {
    fruit_t *fruit = malloc(sizeof(fruit_t));
    fruit->x = x;
    fruit->y = y;

    return fruit;
}

fruit_node_t *createFruitNode(int x, int y) {
    fruit_t *fruit = createFruit(x, y);
    fruit_node_t *fruitNode = malloc(sizeof(fruit_node_t));

    fruitNode->fruit = fruit;
    fruitNode->next = NULL;

    return fruitNode;
}

fruit_list_t *createFruitList(int x, int y) {
    fruit_node_t *head = createFruitNode(x, y);

    fruit_list_t *list = malloc(sizeof(fruit_list_t));
    list->head = head;
    list->length = 1;

    return list;
}

fruit_list_t *addFruit(fruit_list_t *list, int x, int y) {
    fruit_node_t *fruitNode = createFruitNode(x, y);

    fruit_node_t *current = list->head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = fruitNode;
    list->length++;

    return list;
}

