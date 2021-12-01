#include <stdio.h>

int factorial(int);

void main() {
    int num;
    printf("Input number to get its factorial:\n>> ");
    scanf("%d", &num);

    int result = factorial(num);

    printf("\nResult:\n%d", result);
}

int factorial(int num) {
    int result = 1;
    for (num; num > 0; num--) {
        result *= num;
    }
    return result;
}