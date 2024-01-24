#include <stdio.h>

#define EMOJI "\U0001F600"

int main() {
    // char *c = "\U0001F600";
    char *c = EMOJI;
    printf("Hello there: %s\n", c);
    return 0;
}
