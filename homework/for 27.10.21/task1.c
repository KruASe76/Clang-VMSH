#include <stdio.h>
#include <math.h> // Без нее же тут не обойтись, так? Просто про нее говорится только в 3 задании...

void main() {
    double a, b;
    scanf("%lf %lf", &a, &b);

    double c = sqrt(a*a + b*b);
    double p = a + b + c;
    double s = a * b / 2;

    printf("Hypotenuse: %f\nPerimeter: %f\nSquare: %f\n", c, p, s);
}