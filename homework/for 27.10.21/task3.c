#include <stdio.h>
#include <math.h>

void main() {
    double a, b, c;
    printf("Enter coefficients a, b, c for equation format: ax^2 + bx + c = 0\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            printf("The single root is x = %f\n", -c);
        } else {
            printf("The single root is x = %f\n", (-c) / b);
        }
    } else {
        double d = b*b - 4*a*c;
        if (d < 0) {
            printf("There are no roots for such coefficients\n");
        } else if (d == 0) {
            printf("The single root is x = %f\n", (-b) / (2*a));
        } else {
            printf("The roots are: x1 = %f, x2 = %f\n", (-b - sqrt(d)) / (2*a), (-b + sqrt(d)) / (2*a));
        }
    }
}

// Я еще не проходил, что такое комплексные числа.. поэтому мне лень в этом разбираться, а еще и писать код