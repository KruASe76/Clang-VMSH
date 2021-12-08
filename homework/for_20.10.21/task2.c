#include <stdio.h>

void main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double value = a * b * c;
    printf("%f\n", value);
}