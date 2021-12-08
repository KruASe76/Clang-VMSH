#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(0));

    double rnd;
    for (int i = 0; i < 5; i++) {
        rnd = rand();
        printf("%lf\n", (rnd / RAND_MAX) * 3);
    }
}