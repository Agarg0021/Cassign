#include <stdio.h>

int main() {
    int multiplier = 2;
    int limit = 10;

    printf("Multiplication Table of 2 up to 10:\n");

    for (int i = 1; i <= limit; ++i) {
        printf("%d x %d = %d\n", multiplier, i, multiplier * i);
    }

    return 0;
}
