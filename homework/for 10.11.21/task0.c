#include <stdio.h>
#include <math.h>

#define COUNT 15

void main() {
    double sum = 0, mult = 1, inv_sum = 0;
    printf("Input %d numbers:\n", COUNT);
    for (int i = 0; i < COUNT; i++) {
        double temp;
        scanf("%lf", &temp);
        
        sum += temp;
        mult *= temp;
        inv_sum += 1 / temp;
    }
    
    printf("\nArithmetic mean: %lf\n", sum / COUNT);
    printf("Geometric mean: %lf\n", sqrt(mult));
    printf("Harmonic mean: %lf\n", COUNT / inv_sum);
}