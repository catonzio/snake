#include <stdio.h>

#define EMOJI "\U0001F600"

int main() {
    // char *c = "\U0001F600";
    char *c = EMOJI;
    int width = 2;
    printf("%-*s a\n", width, c);
    printf("%-*s a\n", width, " ");
    return 0;
}
