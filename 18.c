#include <stdio.h>
// to determine whether a no. is divisible by 3,7,5,8,6 or not by using nested if else
int main() {
    int number;

    printf("Enter a number: ");

    scanf("%d", &number);

    if (number % 3 == 0) {
        printf("%d is divisible by 3.\n", number);
    } else {
        if (number % 7 == 0) {
            printf("%d is divisible by 7.\n", number);
        } else {
            if (number % 5 == 0) {
                printf("%d is divisible by 5.\n", number);
            } else {
                if (number % 8 == 0) {
                    printf("%d is divisible by 8.\n", number);
                } else {
                    if (number % 6 == 0) {
                        printf("%d is divisible by 6.\n", number);
                    } else {
                        printf("%d is not divisible by 3, 7, 5, 8, or 6.\n", number);
                    }
                }
            }
        }
    }

    return 0;
}
