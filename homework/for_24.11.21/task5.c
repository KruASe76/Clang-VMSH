#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH1 21
#define LENGTH2 42

char action(char *, int);

void main() {
    srand(time(0));

    int a[LENGTH1];
    int b[LENGTH2];
    int i;

    printf("Odd array: %c\n", action(a, LENGTH1));
    for (i = 0; i < LENGTH1; i++) {
        printf("%d\n", a[i]);
    }
    printf("\nEven array: %c\n", action(b, LENGTH2));
    for (i = 0; i < LENGTH2; i++) {
        printf("%d\n", b[i]);
    }
}

char action(char *arr, int len) {
    for (int i = 0; i < len; i++) {
        arr[i] = rand();
    }
    return len % 2 == 0 ? 'A' : 'C';
}