#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(NULL));

    int n;
    printf("Input amount of numbers:\n");
    scanf("%d", &n);
     
    double *p = NULL;
    p = (double*) malloc(sizeof(double) * n);

    for (int i = 0; i < n; i++) {
        p[i] = (float) rand() / (float) rand() * 1000;
    }

    for (int i = 0; i < n; i++) {
        printf("%lf\n", p[i]);
    }

    free(p);
}