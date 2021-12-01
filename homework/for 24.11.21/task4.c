#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAND_AMOUNT 64

double randrange(int, int); // отсылочка :)

void main() {
    srand(time(0));

    int a, b;
    printf("Input range for stack of random numbers:\nFrom:\n>> "); // вторая отылочка :)
    scanf("%d", &a);
    printf("To:\n>> ");
    scanf("%d", &b);

    double rands[RAND_AMOUNT];
    for (int i = 0; i < RAND_AMOUNT; i++) {
        rands[i] = randrange(a, b);
    }

    printf("\nYour numbers:\n");
    for (int i = 0; i < RAND_AMOUNT; i++) {
        printf("%d) %lf\n", i+1, rands[i]);
    }
}

double randrange(int a, int b) {
    double rnd = rand();
    return a + (rnd / RAND_MAX) * b;
}